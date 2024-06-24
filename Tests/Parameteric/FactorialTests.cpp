#include "gtest/gtest.h"
#include "..\..\Code\Factorials\Factorials.h"
#include "ParametericFactorialFixture.h"


TEST_P(FactorialParameterizedTestFixture, calculation)
{
	Factorials factorial;
	int theInput = get<0>(GetParam());
	int theExpected = get<1>(GetParam());

	EXPECT_EQ( factorial.Calculate(theInput) , theExpected);
}

INSTANTIATE_TEST_SUITE_P(FactorialParams,
	FactorialParameterizedTestFixture,
	Values(make_tuple(1, 1),
		make_tuple(2, 2),
		make_tuple(3, 6),
		make_tuple(10, 3628800))
);

