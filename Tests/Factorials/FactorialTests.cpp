#include "gtest/gtest.h"
#include "..\..\Code\Factorials\Factorials.h"

TEST(Factorial_Tests, calculation)
{
	Factorials factorial;
	EXPECT_EQ( factorial.Calculate(1) , 1);
	EXPECT_EQ( factorial.Calculate(2) , 2);
	EXPECT_EQ( factorial.Calculate(3) , 6);
	EXPECT_EQ( factorial.Calculate(10) ,3628800);

}


