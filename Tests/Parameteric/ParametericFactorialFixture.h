#include "gtest/gtest.h"
using namespace testing;

class FactorialParameterizedTestFixture :public ::TestWithParam<tuple<int,int>> {
protected:
    tuple<int,int> theValues;
};