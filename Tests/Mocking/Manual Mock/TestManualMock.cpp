#include "gmock/gmock.h"

#include "TestManualMock.h"
#include "MockFactorials.h"
#include "../../../Code/Factorials/FactorialService.h"

using namespace testing;
TEST(ManualMockTests, ErrorMessageFromException)
{
	MockFactorials mock;
	mock.message = "msg";

	FactorialService service(&mock);
	auto result = service.CalculateAsString(1);
	ASSERT_THAT(result, StartsWith("Error"));
	ASSERT_THAT(result, EndsWith("msg"));

}
