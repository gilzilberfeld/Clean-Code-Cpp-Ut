#include <string>
using namespace std;

#include "../../../Code/Factorials/Factorials.h"
class MockFactorials :
    public Factorials
{
public:
    int Calculate(int x) override {
        throw "Error: " + message;
    }
    string message="";
};

