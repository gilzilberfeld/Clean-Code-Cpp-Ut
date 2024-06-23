#include "pch.h"
#pragma once

extern "C" int factorial(int n);

TEST(Factorials)
{
	EXPECT_EQ(1, factorial(0));
	EXPECT_EQ(1, factorial(1));
	EXPECT_EQ(2, factorial(2));

}
