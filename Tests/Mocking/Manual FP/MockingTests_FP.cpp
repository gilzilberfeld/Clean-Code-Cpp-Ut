#include "gtest/gtest.h"
#include "ManualMockFixture.h"

extern "C" int factorial(int n);
int fake_factorial(int) { return -2; }

TEST_F(ManualMockFixture, ChangeBehavior_RealFactorial)
{
	factorialPtr = factorial;
	EXPECT_EQ(24, factorialPtr(4));
}

TEST_F(ManualMockFixture, ChangeBehavior_MockFactorial)
{
	factorialPtr = fake_factorial;
	EXPECT_EQ(-2, factorialPtr(4));
}
