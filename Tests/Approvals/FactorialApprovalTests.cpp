#include "gtest/gtest.h"
#define APPROVALS_GOOGLETEST // This tells Approval Tests to provide a main() - only do this in one cpp file
#include "../ApprovalTests.v.10.13.0.hpp"
using namespace ApprovalTests;

#include "..\..\Code\Factorials\Factorials.h"

TEST(Approval_Factorial_Tests, DISABLEDApproval_Factorial_Tests)
{
	std::stringstream log;
	Factorials factorial;
	log << "1 -> " << factorial.Calculate(1) << '\n';
	log << "2 -> " << factorial.Calculate(2) << '\n';
	log << "3 -> " << factorial.Calculate(3) << '\n';

	Approvals::verify(log.str());

}


