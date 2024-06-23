#pragma once
#include "PackageType.h"

class University
{
public:
	int GetID();
	string GetName();
	PackageType GetPackageType();

private:
	int _ID;
	void SetID(int id);
	void SetName(string name);
	void SetPackageType(PackageType packageType);
};

