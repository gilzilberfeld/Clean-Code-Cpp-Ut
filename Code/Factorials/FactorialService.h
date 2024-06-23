class FactorialService
{
private:
	Factorials* theFactorial;

public:
	FactorialService(Factorials* fac)
	{
		theFactorial = fac;
	}

	std::string CalculateAsString(int value);

};



