#include <exception>
#include <string>
using namespace std;

#include "NotImplementedException.h"
#include "Student.h"
#include "StudentRepository.h"


void StudentRepository::Add(Student* student)
{
	throw new NotImplementedException();
}


bool StudentRepository::Exists(string name)
{
	throw new NotImplementedException();
}
