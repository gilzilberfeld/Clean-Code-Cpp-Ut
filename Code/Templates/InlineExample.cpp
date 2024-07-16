#include <string>

//Inline variables should be used to declare global variables in header files
struct A1 {
	static std::string& getS1() { 
		static std::string s1 = "s1";
		return s1;
	}

};

inline std::string& gets2() { 
	static std::string s2 = "s2";
	return s2;
}

//// Prefered
struct A2 {
	inline static std::string s1 = "s1"; 
};

inline std::string s2 = "s2"; 

