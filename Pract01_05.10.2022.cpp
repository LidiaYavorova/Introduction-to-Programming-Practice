#include <iostream>
#include <cmath>
int main()
{
	//1
	 int c;
	 std::cin >> c;
	 bool d = c % 2;
	 std::cout << !d;

	 //2
	 int number;
	 std::cin >> number;
	 int firstPart = number % 10;
	 int secondPart = number / 10 % 10;
	 int thirdpart = number / 100;
	 std::cout << firstPart * 100 + secondPart * 10 + thirdpart + 1;

	 //3
	char symbol;
	std::cin >> symbol;
	if (symbol == 'A' || symbol == 'E' || symbol == 'O' || symbol == 'I' || symbol == 'U' ||
		symbol == 'a' || symbol == 'e' || symbol == 'o' || symbol == 'i' || symbol == 'u')
	{
		std::cout << 1;
	}
	else
	{
		std::cout << 0;
	}

	//4
	int grade;
	std:: cin >> grade;
	if (grade >= 2 && grade <= 6)
	{
		std::cout << 1;
	}
	else
	{
		std::cout << 0;
	}

	//5
	int x;
	std::cin >> x;
	std::cout << x / 10;


	//6
	double a;
	double b;
	std::cin >> a >> b;
	double final = pow((a + b),4) - pow((a - b), 2);
	std::cout << final;

	//7
	int money;
	std::cin >> money;
	while (money >= 100)
	{
		money = money - 100;
		std::cout << 100<<" ";
	}
	while (money >= 50)
	{
		money = money - 50;
		std::cout << 50 << " ";
	}
	while (money >= 20)
	{
		money = money - 20;
		std::cout << 20 << " ";
	}
	while (money >= 10)
	{
		money = money - 10;
		std::cout << 10 << " ";
	}
	while (money >= 5)
	{
		money = money - 5;
		std::cout << 5 << " ";
	}
	while (money >= 2)
	{
		money = money - 2;
		std::cout << 2 << " ";
	}
	while (money >= 1)
	{
		money = money - 1;
		std::cout << 1 << " ";
	}
	
		



}
