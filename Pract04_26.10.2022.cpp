
#include <iostream>

int main()
{
    //1
   double number;
    double sum = 0;
    std::cin >> number;
    while (number != 0)
    {
        sum += number;
        std::cin >> number;
    }
    std::cout << sum;

    //2
    int number1, number2;
    std::cin >> number1>>number2;
    int maximalNumber;
    if (number1 >= number2)
    {
        maximalNumber = number1;
    }
    else 
    {
        maximalNumber = number2;
    }
    for (int i = maximalNumber/2; i>0; i--)
    {
        if (number1 % i == 0 && number2 % i == 0)
        {
            std::cout << i << " ";
        }
    }

    //3
    int originalNumber;
    std::cin >> originalNumber;
    int i = 0;
    int tempNumber=originalNumber;
    while (tempNumber > 0)
    {
        tempNumber=tempNumber/10;
        i++;
    }
    if (i % 2 == 0)
    {
        
    }
    else
    {

    }

    //4
    int numberOne, numberTwo;
    std::cin >> numberOne>>numberTwo;
    int count = 0;
    for (int i = numberOne; i <= numberTwo; i++)
    {
        for (int j= 1; j <= i; j++)
        {
            if (i % j == 0) 
            {
                count++;
               
            }
            
        }
        if (count == 2)
        {
            std::cout << i<< " ";
            
        }
        count = 0;
    }

    //5
    int numberToCheck;
    std::cin >> numberToCheck;
    while (numberToCheck>0)
    {
        if (numberToCheck == 1)
        {
            std::cout << "true";
            break;
        }
        numberToCheck %= 2;
            if (numberToCheck == 0)
            {
                std::cout << "true";
                
            }
            else if (numberToCheck==1)
            {
                std::cout << "false";
                break;
            }
           
        
       
    }
    
   

   
}

