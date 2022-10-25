
#include <cmath>
#include <iostream>

int main()
{
	//1
	int a, b;
	std::cin >> a >> b;
	int bigger = (a > b) ? a : b;
	std::cout << bigger;

	//2
	double number1, number2, number3;
	std::cin >> number1 >> number2 >> number3;
	double theBiggest = number1;
	if (theBiggest < number2)
	{
		theBiggest = number2;
	}
	if (theBiggest < number3)
	{
		theBiggest = number3;
	}
	std::cout << theBiggest;

	//3
	double num1, num2;
	double sum = num1 + num2;
	double diff = fabs(num1 - num2);
	double productOfNumbers = num1 * num2;
	double division = 0;
	if (num1 > num2)
	{
		division = num1 / num2;
	}
	else
	{
		division = num2 / num1;
	}

	if ((sum > diff) && (sum > productOfNumbers) && (sum > division))
	{
		std::cout << sum;
	}
	else if (diff > sum && diff > productOfNumbers && diff > division)
	{
		std::cout << diff;
	}
	else if (productOfNumbers > sum && productOfNumbers > diff && productOfNumbers > division)
	{
		std::cout << productOfNumbers;
	}
	else
	{
		std::cout << division;
	}

	//4
	int firstNumber, secondNumber, thirdNumber;
	std::cin >> firstNumber >> secondNumber >> thirdNumber;
	int theBiggest = firstNumber;
	if (theBiggest < secondNumber)
	{
		theBiggest = secondNumber;
	}
	if (theBiggest < thirdNumber)
	{
		theBiggest = thirdNumber;
	}
	

	int theSmallest = firstNumber;
	if (theSmallest > secondNumber)
	{
		theSmallest = secondNumber;
	}
	if (theSmallest > thirdNumber)
	{
		theSmallest = thirdNumber;
	}
	
	int middleNumber;
	if (firstNumber > theSmallest && firstNumber < theBiggest)
	{
		middleNumber = firstNumber;
	}
	if (secondNumber > theSmallest && secondNumber < theBiggest)
	{
		middleNumber = secondNumber;
	}
	if (thirdNumber > theSmallest && thirdNumber < theBiggest)
	{
		middleNumber = thirdNumber;
	}
	std::cout << theSmallest<< " " << middleNumber <<" " << theBiggest;
	

	//5
	int threeDigitNumber;
	std::cin >> threeDigitNumber;
	int firstDigit = threeDigitNumber / 100;
	int secondDigit = threeDigitNumber % 100 / 10;
	int thirdDigit = threeDigitNumber % 10;
	bool flag=0;
	if (firstDigit == secondDigit || firstDigit == thirdDigit || secondDigit == thirdDigit)
	{
		flag = 1;
		std::cout << std::boolalpha << flag;
	}
	else
	{
		std::cout << std::boolalpha << flag;
	}
   

    //6
    double chislo;
    std::cin >> chislo;
	if (chislo == (int)chislo)
	{
		if ((int)chislo % 2 == 0)
		{
			std::cout << "Even integer";

		}
		else
		{
			std::cout << "Odd integer";
		}
	}
	else
	{
		if (chislo < 0)
		{
			std::cout << "Negative rational";
		}
		else
		{
			std::cout << "Positive rational";
		}
	}

    //7
    double sideA, sideB, sideC;
    if (sideA + sideB > sideC || sideB + sideC > sideA || sideA + sideC > sideB)
    {
	   std::cout << "Valid triangle";
    }
    else
    {
	   std::cout << "Invalid triangle";
    }

	//8
	//тази задача е обратната на сортиране на числата, затова ще използвам същия алгоритъм, но с обратно извеждане
	int firstNumber, secondNumber, thirdNumber;
	std::cin >> firstNumber >> secondNumber >> thirdNumber;
	int theBiggest = firstNumber;
	if (theBiggest < secondNumber)
	{
		theBiggest = secondNumber;
	}
	if (theBiggest < thirdNumber)
	{
		theBiggest = thirdNumber;
	}


	int theSmallest = firstNumber;
	if (theSmallest > secondNumber)
	{
		theSmallest = secondNumber;
	}
	if (theSmallest > thirdNumber)
	{
		theSmallest = thirdNumber;
	}

	int middleNumber;
	if (firstNumber > theSmallest && firstNumber < theBiggest)
	{
		middleNumber = firstNumber;
	}
	if (secondNumber > theSmallest && secondNumber < theBiggest)
	{
		middleNumber = secondNumber;
	}
	if (thirdNumber > theSmallest && thirdNumber < theBiggest)
	{
		middleNumber = thirdNumber;
	}
	std::cout << theBiggest<< middleNumber << theSmallest;

   //9
   int number;
   int digitOne, digitTwo;
   std::cin >> number;
   if (number == 100)
   {
	   std::cout << "One hundred";
   }
   else
   {
	   digitOne = number / 10;
	   digitTwo = number % 10;
   }
   
   switch (digitOne)
   {
   case 1: 
	   switch (digitTwo)
   {
   case 1:std::cout << "eleven"; break;
   case 2:std::cout << "twelve"; break;
   case 3:std::cout << "thrirteen"; break;
   case 4:std::cout << "fourteen"; break;
   case 5:std::cout << "fifteen"; break;
   case 6:std::cout << "sixteen"; break;
   case 7:std::cout << "seventeen"; break;
   case 8:std::cout << "eighteen"; break;
   case 9:std::cout << "nineteen"; break;
   }break;
   case 2:std:: cout << "twenty "; break;
   case 3:std::cout << "thirty "; break;
   case 4:std::cout << "fourty "; break;
   case 5:std::cout << "fifty "; break;
   case 6:std::cout << "sixty "; break;
   case 7:std::cout << "seventy "; break;
   case 8:std::cout << "eighty "; break;
   case 9:std::cout << "ninety "; break;
   }
   if (digitOne != 1)
   {
	   switch (digitTwo)
	   {
	   case 1:std::cout << "one"; break;
	   case 2:std::cout << "two"; break;
	   case 3:std::cout << "three"; break;
	   case 4:std::cout << "four"; break;
	   case 5:std::cout << "five"; break;
	   case 6:std::cout << "six"; break;
	   case 7:std::cout << "seven"; break;
	   case 8:std::cout << "eight"; break;
	   case 9:std::cout << "nine"; break;
	   }
   }
  
   
    //10
    int card1, card2;
    std::cin >> card1 >> card2;
	bool flag = 0;
	int sum = card1 + card2;
	if (sum > 21)
	{
		flag = 1;
		std::cout << std::boolalpha << flag;
	}
	else
	{
		std::cout << std::boolalpha << flag;
	}

   //11
   int startA, endA, startB, endB, numberToCheck;
   std::cin >> startA >>endA >> startB >> endB >> numberToCheck;
   bool condition1, condition2, condition3 = 0;
   condition1 = numberToCheck >= startA && numberToCheck <= endA || numberToCheck >= startB && numberToCheck <= endB;
   condition2 = numberToCheck >= startA && numberToCheck <= endA && numberToCheck >= startB && numberToCheck <= endB;
   condition3 = numberToCheck >= startA && numberToCheck <= endA && !(numberToCheck >= startB && numberToCheck <= endB);
   if (condition1)
   {
	  condition1 = 1;
   }
   std::cout << std::boolalpha << condition1 << ",";

   if (condition2)
   {
	  condition2 = 1;
	
   }
   std::cout << std::boolalpha << condition2 << ",";
   if (condition3)
   {
	condition3 = 1;
	
   }
   std::cout << std::boolalpha << condition3<<",";
   std::cout << std::boolalpha << (!condition2);
   

   //12
   char letterA, letterZ, lettera, letterz, letterToCheck;
   std::cin >> letterA >> letterZ >> lettera >> letterz >> letterToCheck;
   bool condition1, condition2, condition3 = 0;
   condition1;
   condition2;
   condition3;
   
   std::cout << std::boolalpha << condition1 << ",";
   std::cout << std::boolalpha << condition2 << ",";
   std::cout << std::boolalpha << condition3 << ",";
   std::cout << std::boolalpha << !condition2;

	
   //13
   int day, month, year;
   std::cin >> day >> month >> year;
   day++;
   if (day == 31 && (month == 4 || month==6 || month==9 || month==11))
   {
	   day -= 30;
	   month++;
   }
   if (day == 32 && (month == 1 || month==3 || month==5 || month==7 || month==8 || month==10))
   {
	   month++;
	   day -= 31;
   }
   if (day == 32 && month == 12)
   {
	   day -= 31;
	   month -= 11;
	   year++;
   }
   if (day == 29 && month == 2)
   {
	   day -= 28;
	   month++;
   }

   bool y4 = year % 4 == 0;
   bool y100 = year % 100 == 0;
   bool y400 = year % 400 == 0;
   if (y4 && (y100 = y400))
   {
	   if (day == 30 && month == 2)
	   {
		   day -= 29;
		   month++;
	   }
   }
   else
   {
	   if (day == 29 && month == 2)
	   {
		   day -= 28;
		   month++;
	   }
	   if (day == 30 && month == 2)
	   {
		   day -= 29;
		   month++;
	   }

   }

   std::cout << day <<" "<< month<< " " << year;

   //14
   //остава отворена
   
}

