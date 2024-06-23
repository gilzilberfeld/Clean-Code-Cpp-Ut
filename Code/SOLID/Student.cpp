#include <exception>
#include <string>
using namespace std;

#include "NotImplementedException.h"
#include "Student.h"


Student::Student(string emailAddress, int universityID) {
	this->_universityID = universityID;
	this->_emailAddress = emailAddress;
}


string Student::GetEmailAddress()
{
	throw new NotImplementedException();
}

int Student::GetUniversityID() {
	throw new NotImplementedException();
}

int Student::GetMonthlyEbookAllowance() {
	throw new NotImplementedException();
}

int Student::GetCurrentlyBorrowedEbooks() {
	throw new NotImplementedException();
}
void Student::SetMonthlyBookAllowance(int allowence) {
	throw new NotImplementedException();
}

void Student::SetCurrentlyBorrowedEbooks(int books){
	throw new NotImplementedException();
}

void SetCurrentlyBorrowedEbooks(int books) {
	throw new NotImplementedException();
}
