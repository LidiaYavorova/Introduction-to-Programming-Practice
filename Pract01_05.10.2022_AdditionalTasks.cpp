
#include <iostream>
#include <cmath>
#include <math.h>

int main()
{

    //1
    std::cout << "Oh what" << std::endl << "a happy day!" << std::endl << "Oh yes, " << std::endl << "what a happy day!";

    //2
    double width=5.4, height=7.9;
    double perimeter = (width + height) * 2;
    double area = width * height;
    std::cout << perimeter << std::endl;
    std::cout << area << std::endl;

    //3
    double BGN;
    std::cin >> BGN;
    double USD = BGN* 0.50;
    double EUR = BGN * 0.51;
    std::cout << USD << std::endl << EUR;

    //4
    double width, height;
    std::cout << "Please enter the length of the width:";
    std::cin >> width;
    std::cout << "Please enter the length of the height:";
    std::cin >> height;
    double perimeter = (width + height) * 2;
    double area = width * height;
    std::cout << perimeter << std::endl;
    std::cout << area << std::endl;

    //5
    double number01, number02;
    std::cin >> number01 >> number02;
    bool comaparisonOfNumbers = number01 < number02;
    std::cout << std::boolalpha << comaparisonOfNumbers;

    //6
    int dividend, divisor;
    std::cout << "Dividend";
    std::cin >> dividend;
    std::cout << "Divisor";
    std::cin >> divisor;
    int quotient = dividend / divisor;
    std::cout << "The quotient of the division is : " << quotient;
    int remainder = dividend % divisor;
    std::cout << "The remainder of the division is : " << remainder;

    //7
    int apples, pears, bananas;
    std::cout << "Apples: ";
    std::cin>> apples;
    std::cout << "Pears: ";
    std::cin >> pears;
    std::cout << "Bananas: ";
    std::cin >> bananas;
    std::cout << "Pesho, don’t forget to buy " << apples << " apples, " << pears << " pears and " << bananas << " bananas!";

    //8
    double radius;
    std::cin >> radius;
    const double PI = 3.14159265;
    double perimeter = 2.0 * PI * radius;
    double area = PI * radius * radius;
    std::cout << perimeter << area;

    //9
    double a, b, c;
    std::cin >> a >> b >> c;
    double x1, x2;
    if (a == 0)
    {
        if (b == 0)
        {
            if (c == 0)
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
            std::cout <<"x= " << -c / b;
        }
    }
    else
    {
        double discriminant = b*b - 4 + a * c;
        if (discriminant >= 0)
        {
            x1 = (-b + sqrt(discriminant)) / (2 * a);
            x2 = (-b - sqrt(discriminant)) / (2 * a);
        }
        else
        {
            std::cout << "No real solutions";
        }
    }

     //10
     double number1, number2;
     std::cout << "Number 1: ";
     std::cin >> number1;
     std::cout << "Number 2: ";
     std::cin>>number2;
     double temporary;
     temporary = number2;
     number2 = number1;
     number1 = temporary;
     std::cout << "Number 1: "<<number1<<std::endl;
     std::cout << "Number 2: " << number2;

     //11
     double x, y;
     std::cin >> x >> y;
     double max = x;
     if (max < y)
     {

         max = y;
     }
     std::cout <<"Max: " <<max<<std::endl;
     double min = x;
     if (min > y)
     {
         min = y;
     }
     std::cout << "Min: " << min;

    //12
    int seconds, days=0, hours=0, minutes=0;
    std::cout << "Seconds: ";
    std::cin >> seconds;
    if (seconds >= 86400)
    {
        days=seconds / 86400;
        seconds -=days*86400;
    }
    if (seconds >= 3600)
    {
        hours = seconds / 3600;
        seconds -=hours* 3600;
    }
    if (seconds >= 60)
    {
        minutes = seconds / 60;
        seconds -=minutes*60;
    }
    std::cout << days<<"days, "<<hours<<" hours, "<<minutes<<" minutes and "<<seconds<<"seconds";

    //13
    int x1, y1, x2, y2;
    std::cin >> x1 >> y1 >> x2 >> y2;
    double temp = (x2 - x1)*(x2 - x1) + (y2 - y1)*(y2 - y1);
    double distance = sqrt(temp);

    //14
    long long int cardNumber;
    std::cin >> cardNumber;
    int part=cardNumber%10000;
    std::cout << "XXXXXXXXXXXX" << part;




    
}


