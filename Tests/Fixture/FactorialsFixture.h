#include "gtest/gtest.h"
#include "FactorialWrapper.h"
#pragma once
class FactorialsFixture : public testing::Test
{
protected:
    void SetUp() override {
        fwrapper = new FactorialWrapper();
    }

    void TearDown() override {
        delete fwrapper;
    }

    FactorialWrapper* fwrapper;
};

