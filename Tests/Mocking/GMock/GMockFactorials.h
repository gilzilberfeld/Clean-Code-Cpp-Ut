#include <string>
using namespace std;

#include "../../../Code/Factorials/Factorials.h"

class GMockFactorial : public Factorials {
public:
	MOCK_METHOD(int, Calculate, (int));
};