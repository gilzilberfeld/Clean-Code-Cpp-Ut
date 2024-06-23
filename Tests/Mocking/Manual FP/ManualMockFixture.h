#pragma once
class ManualMockFixture : public ::testing::Test
{
protected:
    void SetUp() override {
        factorialPtr = NULL;
    }

    void TearDown() override {
        factorialPtr = NULL;
    }

public:
    int (*factorialPtr)(int);

};

