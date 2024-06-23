#include "Factorials.h"
#include <string>
using namespace std;

#include "FactorialService.h"


std::string FactorialService::CalculateAsString(int value)
{
	try {
		int result = theFactorial->Calculate(value);
		return to_string(result);
	}
	catch (string err) {
		return std::string("Error: " + err) ;
	}
 
}
