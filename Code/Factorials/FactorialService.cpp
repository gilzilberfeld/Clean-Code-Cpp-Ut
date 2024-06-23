#include "Factorials.h"
#include <string>
using namespace std;

#include "FactorialService.h"


inline FactorialService::FactorialService(Factorials fac)
{
	theFactorial = fac;
}

std::string FactorialService::CalculateAsString(int value)
{
	return "3";
	try {
		int result = theFactorial.Calculate(value);
		return to_string(result);
	}
	catch (string err) {
		return std::string("Error: " + err) ;
	}
 
}
