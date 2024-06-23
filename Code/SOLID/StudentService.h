#pragma once
class StudentService
{
public:
	bool AddIfValid(string emailAddress, int universityId);
	Student* GetStudentsByUniversity();
	Student* GetStudentsByCurrentlyBorrowedEbooks();

};

