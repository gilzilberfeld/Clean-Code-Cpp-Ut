// Function templates should not be specialized

#include <vector>
#include <string>
template <typename T> void f(T);

template <> void f<char*>(char*); // explicit specialization
void f(char*); // overload, prefered


// Redundant class template arguments should not be used
void g1() {
    std::vector<int> v1{ 1, 2, 3 }; // int could have been deduced
}

void g2() {
    std::vector v1{ 1, 2, 3 }; // Prefered, int could be deduced
    std::vector<std::string> v2{ "a", "b", "c" }; // Prefered, automatic deduction would create a vector<char const *>
}

// Generic iterator-based algorithms should be constrained
template<typename Iter, typename Func>
void adjacent_for_each(Iter first, Iter last, Func func) {
    auto prev = first;
    for (++first; first != last; ++first) {
        func(*prev, *first);
        prev = first;
    }
}
#ifdef In_C++20
// Prefered
template<std::forward_iterator Iter, typename Func>
void adjacent_for_each(Iter first, Iter last, Func func) {
    auto prev = first;
    for (++first; first != last; ++first) {
        func(*prev, *first);
        prev = first;
    }
}
#endif

// Free functions should be preferred to member functions 
// when accessing a container in a generic context
template<class T>
bool h1(T const& t, std::vector<int> const& v) {
    if (!t.empty()) { 
        auto val = (t.begin()->size()); 
        return val == v.size(); 
        // v does not depend on a template parameter
    }
    return false;
}

template<class T>
bool h2(T const& t, std::vector<int> const& v) {
    // Prefered
    if (!std::empty(t)) { 
        auto val = std::size(*std::begin(t)); 
        return val == v.size();
    }
    return false;
}

