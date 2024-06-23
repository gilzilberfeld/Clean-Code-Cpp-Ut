#include "gtest/gtest.h"
#include "FactorialsFixture.h"

TEST_F(FactorialsFixture, FactorialCalculations1)
{
	EXPECT_EQ(6, fwrapper->Calculate(3));
}

TEST_F(FactorialsFixture, FactorialCalculations2)
{
	EXPECT_EQ(2, fwrapper->Calculate(2));
}
