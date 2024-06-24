#include <string>
using namespace std;
#include "Calculator.h"


void Calculator::Press(string key)
{
	if (key == "+") {
		lastOperation = OperationType::Plus;
		lastArgument = stoi(display);
		newArgument = true;
	}
	else {
		if (key == "/") {
			lastOperation = OperationType::Div;
			lastArgument = stoi(display);
			newArgument = true;
		}
		else if (key == "=") {
			int currentArgument = stoi(display);
			if (lastOperation == OperationType::Plus) {
				display = to_string(lastArgument + currentArgument);
			}
			if (lastOperation == OperationType::Div && currentArgument == 0) {
				display = "Division By Zero Error";
			}
			shouldReset = true;
		}
		else {
			if (shouldReset) {
				display = "";
				shouldReset = false;
			}
			if (newArgument) {
				display = "";
				newArgument = false;
			}
			display += key;
		}
	}

}

string Calculator::GetDisplay() {
	if (display.empty())
		return "0";
	if (display.length() > 5)
		return "E";
	return display;
}
