#include "Factorials.h"


int Factorials::Calculate(int number) 
{
	if (number <= 1)
		return number;
	else
		return Calculate(number - 1)*number;
}
