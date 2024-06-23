#pragma once
class Student
{
public:
	Student(string emailAddress, int universityID);
	string GetEmailAddress();
	int GetUniversityID();
	int GetMonthlyEbookAllowance();
	int GetCurrentlyBorrowedEbooks();
	void SetMonthlyBookAllowance(int allowence);
	void SetCurrentlyBorrowedEbooks(int books);

private:
	int _universityID;
	string _emailAddress;

};

