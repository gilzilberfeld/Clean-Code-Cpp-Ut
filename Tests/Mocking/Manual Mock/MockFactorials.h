#pragma once
#include "../../../Code/Factorials/Factorials.h"
class MockFactorials :
    public Factorials
{
public:
    int Calculate(int x) override {
        throw "error message";
    }
};

