#include <exception>
#include <string>
using namespace std;

#include "NotImplementedException.h"
#include "University.h"

int University::GetID()
{
	return _ID;
}

string University::GetName()
{
	throw new NotImplementedException();
}

PackageType University::GetPackageType()
{
	throw new NotImplementedException();
}

void University::SetID(int id)
{
	throw new NotImplementedException();
}

void University::SetName(string name)
{
	throw new NotImplementedException();
}

void University::SetPackageType(PackageType packageType)
{
	throw new NotImplementedException();
}
