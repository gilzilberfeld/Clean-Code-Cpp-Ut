#pragma once

enum class OperationType {
    Plus,
    Div
};

class Calculator
{
private:
    string display = "";
    int lastArgument = 0;
    int result = 0;
    bool newArgument = false;
    bool shouldReset = true;
    OperationType lastOperation;

public:
	void Press(string key);
	string GetDisplay();

};

