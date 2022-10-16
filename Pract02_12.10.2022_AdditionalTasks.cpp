
#include <iostream>

int main()
{
	//1
	int year;
	std::cin >> year;
	bool y4 = year % 4 == 0;
	bool y100 = year % 100 == 0;
	bool y400 = year % 400 == 0;
	if (y4 && (y100 = y400))
	{
		std::cout << "Leap";
	}
	else
	{
		std::cout << "Not leap";
	}

	//2
    char symbol;
    std::cin >> symbol;
    bool vowel = (symbol == 'a' || symbol == 'e' || symbol == 'o' || symbol == 'u' || symbol == 'i' ||
        symbol == 'A' || symbol == 'E' || symbol == 'O' || symbol == 'U' || symbol == 'I');
    if (symbol >= 65 && symbol <= 90 || symbol>=97 && symbol<=122)
    {
        if (vowel)
        {
            std::cout << "Vowel";
        }
        else
        {
            std::cout << "Consonant";
        }
    }

	//3
	int a, b;
	std::cin >> a >> b;
	int bigger=(a > b) ? a : b;
	std::cout << bigger;

	//4
	double sideA, sideB, sideC;
	if (sideA + sideB > sideC || sideB + sideC > sideA || sideA + sideC > sideB)
	{
		std::cout << "Valid triangle";
	}
	else
	{
		std::cout << "Invalid triangle";
	}

	//5
    double coefA, coefB, coefC;
    std::cin >> coefA >> coefB >> coefC;
    double x1, x2;
    if (coefA == 0)
    {
        if (coefB == 0)
        {
            if (coefC == 0)
            {
                std::cout << "Every x is a solution";
            }
            else
            {
                std::cout << "No solution";
            }
        }
        else
        {
            std::cout << "x= " << -coefC / coefB;
        }
    }
    else
    {
        double discriminant = coefB * coefB- 4 + coefA * coefC;
        if (discriminant >= 0)
        {
            x1 = (-coefB + sqrt(discriminant)) / (2 * coefA);
            x2 = (-coefB - sqrt(discriminant)) / (2 * coefA);
        }
        else
        {
            std::cout << "No real solutions";
        }
    }

    //6
    double firstNumber, secondNumber;
    std::cin >> firstNumber >> secondNumber;
    char operation;
    std::cin >> operation;
    if (operation == '+')
    {
        std::cout << firstNumber + secondNumber;    
    }
    if (operation == '*')
    {
        std::cout << firstNumber * secondNumber;
    }
    if (operation == '-')
    {
        std::cout << firstNumber - secondNumber;
    }
    if (operation == '/' && secondNumber!=0)
    {
        std::cout << firstNumber / secondNumber;
    }
    else
    {
        std::cout << "Invalid division by zero";
    }

    //7
    int fourDigitNumber;
    std::cin>> fourDigitNumber;
    int firstNewNumber = fourDigitNumber / 1000 + fourDigitNumber % 10;
    int secondNewNumber = fourDigitNumber / 1000 / 10;
    if (firstNewNumber = secondNewNumber)
    {
        std::cout << "equal" << "(" << firstNewNumber << "=" << secondNewNumber << ")";
    }
    else if(firstNewNumber<secondNewNumber)
    {
        std::cout << "less" << "(" << firstNewNumber << "<" << secondNewNumber << ")";
    }
    else
    {
        std::cout << "greater" << "(" << firstNewNumber << ">" << secondNewNumber << ")";
    }
    
}

