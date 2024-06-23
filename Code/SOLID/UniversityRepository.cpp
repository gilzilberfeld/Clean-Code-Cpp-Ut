#include <exception>
#include <string>
using namespace std;

#include "NotImplementedException.h"
#include "University.h"
#include "UniversityRepository.h"

University* UniversityRepository::GetByID(int ID)
{
	throw new NotImplementedException();
}
