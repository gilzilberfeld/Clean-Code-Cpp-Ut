#include <exception>
#include <string>
using namespace std;

#include "NotImplementedException.h"
#include "Student.h"
#include "University.h"
#include "StudentRepository.h"
#include "UniversityRepository.h"
#include "StudentService.h"
#include <iostream>

bool StudentService::AddIfValid(string emailAddress, int universityId)
{
	//SRP
	cout << "Log: Start add student with email  " << emailAddress;

	if (emailAddress == "") {
		return false;
	}

	StudentRepository* studentRepository = 
		new StudentRepository();

	if (studentRepository->Exists(emailAddress)) {
		return false;
	}

	UniversityRepository* universityRepository =
		new UniversityRepository();

	University* university =
		universityRepository->GetByID(universityId);

	Student* student = new Student(emailAddress, universityId);

	//SRP, OCP
	PackageType type =
		university->GetPackageType();
	if (type == Standard)
	{
		student->SetMonthlyBookAllowance(10);
	}
	else if (type == Premium)
	{
		student->SetMonthlyBookAllowance(10 * 2);
	}

	studentRepository->Add(student);

	//SRP
	cout << "Log: End add student with email " << emailAddress;

	return true;//CQS
}

Student * StudentService::GetStudentsByUniversity()
{
	throw new NotImplementedException();
}

Student * StudentService::GetStudentsByCurrentlyBorrowedEbooks()
{
	throw new NotImplementedException();
}
