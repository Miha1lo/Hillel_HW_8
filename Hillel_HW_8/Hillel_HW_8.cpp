#include <iostream>

class Calculator
{
private:
	int result = 0;
	static const char ADDITION = '+';
	static const char SUBTRACT = '-';
	static const char MULTIPLY = '*';
	static const char DIVISION = '/';


public:

	int getResult() const
	{
		return result;
	}

	void resetResult()
	{
		result = 0;
	}

	void calculateValues(const int value1, const int value2, const char operation)
	{
		switch (operation)
		{
		case ADDITION:
			result = value1 + value2;
			break;
		case SUBTRACT:
			result = value1 - value2;
			break;
		case MULTIPLY:
			result = value1 * value2;
			break;
		case DIVISION:
			if (value2 != 0)
			{
				result = value1 / value2;
				break;
			}
			else
			{
				std::cout << "You can't divide by zero!!! Please use \"resetResult\" to reset value" << std::endl;
				result = 0;
				break;
			}
		default:
			std::cout << "Invalid operation" << std::endl;
			break;
		}
	}

	Calculator& calculateValues(const int value1, const char operation)
	{
		switch (operation)
		{
		case ADDITION:
			result += + value1;
			break;
		case SUBTRACT:
			result -= value1;
			break;
		case MULTIPLY:
			result *= value1;
			break;
		case DIVISION:
			if (value1 != 0)
			{
				result /=  value1;
				break;
			}
			else
			{
				std::cout << "You can't divide by zero!!! Please use \"resetResult\" to reset value" << std::endl;
				result = 0;
				break;
			}
		default:
			std::cout << "Invalid operation" << std::endl;
			break;
		}
		return *this;
	}
};


int main()
{
	Calculator myCalculator;
	std::cout << myCalculator.calculateValues(2, '+').calculateValues(4, '-').calculateValues(5, '*').getResult() << "\n";

	return 0;
}

