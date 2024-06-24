#pragma once
#include <string>
using namespace std;

class IExternalDisplay
{
	virtual void Show(string text) =0;
	virtual	bool IsOn() = 0;
	virtual ~IExternalDisplay() = default;
};

