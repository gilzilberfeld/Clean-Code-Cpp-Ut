#include "gtest/gtest.h"
#include "FactorialWrapper.h"

extern "C" int factorial(int n);

int FactorialWrapper::Calculate(int n)
{
	return factorial(n);
}
