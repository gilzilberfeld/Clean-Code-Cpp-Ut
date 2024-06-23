#include "gtest/gtest.h"
#include "../../fff.h"

DEFINE_FFF_GLOBALS;
FAKE_VALUE_FUNC(int, factorial,int);


TEST(FactorialMock_Default)
{
	EXPECT_EQ(0, factorial(1));
}

TEST(FactorialMock_ChangeBehavior)
{	
	factorial_fake.return_val = 2;
	EXPECT_EQ(2, factorial(4));
}

TEST(FactorialMock_Reset)
{
	factorial_fake.return_val = 2;
	EXPECT_EQ(2, factorial(4));
	RESET_FAKE(factorial)
	EXPECT_EQ(0, factorial(10));
}

TEST(FactorialMock_CaptureArguments)
{
	RESET_FAKE(factorial)
	factorial_fake.return_val = 10;
	int returnedValue = factorial(6);
	EXPECT_EQ(1, factorial_fake.call_count);
	EXPECT_EQ(10, returnedValue);
	EXPECT_EQ(factorial_fake.arg0_val, 6);
	RESET_FAKE(factorial)
}

TEST(FactorialMock_ARG_HISTORY) 
{
	factorial_fake.return_val = 10;
	int returnedValue = factorial(6);
	int returnedValue2 = factorial(7);
	EXPECT_EQ(6, factorial_fake.arg0_history[0]);
	EXPECT_EQ(7, factorial_fake.arg0_history[1]);
	RESET_FAKE(factorial);

	EXPECT_EQ(0, factorial_fake.arg0_history[0]);
	EXPECT_EQ(0, factorial_fake.arg0_history[1]);
	EXPECT_EQ(0, factorial_fake.arg0_history[2]);

}
