#include "gmock/gmock.h"
using namespace testing;

#include "GMockFactorials.h"
#include "../../../Code/Factorials/FactorialService.h"

TEST(GMockTests, ErrorMessageFromException)
{
	GMockFactorial mock;
	ON_CALL(mock, Calculate(_))
		.WillByDefault(Throw(string("msg")));

	FactorialService service(&mock);
	auto result = service.CalculateAsString(1);
	ASSERT_THAT(result, StartsWith("Error"));
	ASSERT_THAT(result, EndsWith("msg"));
}

TEST(GMockTests, StoreArguments)
{
	GMockFactorial mock;
	int passedArgument;
	EXPECT_CALL(mock, Calculate(_))
		.WillOnce(DoAll(
					SaveArg<0>(&passedArgument),
					Return(110)));

	FactorialService service(&mock);
	auto result = service.CalculateAsString(1);
	ASSERT_EQ(result, "110");
	ASSERT_EQ(passedArgument, 1);
}