enum e_PackageType {
	Standard = 0,
	Premium = 1
};

typedef enum e_PackageType PackageType;

struct s_University {
	PackageType packageType;
};


struct s_Student {
	char emailAddress[100];
	int universityId;
};

typedef struct s_University University;
typedef struct s_Student Student;

University* UniversityRepositoryGetById(universityId)
{
	return 0;
}

int StudentRepositoryExists(char* emailAddress) 
{
	return 0;
}

void StudentRepositoryAdd(Student* student) 
{
}

void SetMonthlyBookAllowance(Student* student, int allowance)
{
}

int AddIfValid(char* emailAddress, int universityId)
{
	
	//SRP
	printf("Log: Start add student with email  %s", emailAddress);
	
	if (strcmp(emailAddress,"") != 0) {
		return -1;
	}

	if (StudentRepositoryExists(emailAddress) == 1)
		return -1;

	University *university = UniversityRepositoryGetById(universityId);
	
	
	Student student;
	strcpy(student.emailAddress, emailAddress);
	student.universityId = universityId;
	
	//SRP, OCP
	PackageType type =
		university->packageType;

	
	if (type == Standard)
	{
		SetMonthlyBookAllowance(&student, 10);
	}

	else if (type == Premium)
	{
		SetMonthlyBookAllowance(&student, 10 * 2);
	}

	
	StudentRepositoryAdd(&student);

	//SRP
	printf("Log: End add student with email  %s", emailAddress);
	
	return 0;//CQS
}