#include <iomanip>
#include <iostream>
#include<cmath>

int main()
{

    //1
    int day;
    std:: cin>> day;
    switch (day)
    {
    case 1:std::cout << "Monday"; break;
    case 2:std::cout << "Tuesday"; break;
    case 3:std::cout << "Wednesday"; break;
    case 4:std::cout << "Thursday"; break;
    case 5:std::cout << "Friday"; break;
    case 6:std::cout << "saturday"; break;
    case 7:std::cout << "Sunday"; break;
    default:std::cout << "Invalid day!";
    }

    //2
    int number;
    std::cin >> number;
    if (number < 100)
    {
        std::cout << "Less than 100";
    }
    else if (number <= 200)
    {
        std::cout << "Between 100 and 200";
    }
    else if (number > 200)
    {
        std::cout << "Greater than 200";
    }

    //3
    double speed;
    std::cin >> speed;
    if (speed <= 10)
    {
        std::cout << "slow";
    }
    else if (speed <= 50)
    {
        std::cout << "average";
    }
    else if (speed <= 150)
    {
        std::cout << "fast";
    }
    else if (speed <= 1000)
    {
        std::cout << "ultra fast";
    }
    else if (speed > 1000)
    {
        std::cout << "extremely fast";
    }

    //4
    char figure;
    std::cin >> figure;
    double area = 0;
    if (figure == 's')
    {
        double side;
        std::cin >> side;
        area = side * side;
        
    }
    else if (figure == 'r')
    {
        double height;
        double width;
        std::cin >> height >> width;
        area = height * width;

    }
    else if (figure == 'c')
    {
        double radius;
        std::cin >> radius;
        const double PI = 3.14159265;
        area = PI * radius * radius;

    }
    else if (figure == 't')
    {
        double side, height;
        std::cin >> side>> height;
        area = (side * height) / 2;
    }

    area = (int)(area * 100) / 100.0;
    std::cout << area;

    //5
    int hours, minutes;
    std::cin >> hours >> minutes;
    minutes += 15;
    if (minutes > 59)
    {
        hours++;
        minutes -= 60;
    }
    if (hours >= 24)
    {
        hours -= 24;
    }

    if (hours <= 9)
    {
        if (minutes <= 9)
        {
            std::cout << "0" << hours << ":0" << minutes;
        }
        else { std::cout << "0" << hours << ":" << minutes; }
    }
    else
    {
        if (minutes <= 9)
        {
            std::cout << hours << ":0" << minutes;
        }
        else  std::cout << hours << ":" << minutes;
    }

    //6
    int firstNumber, secondNumber, thirdNumber, forthNumber, fifthNumber;
    std::cin >> firstNumber >> secondNumber >> thirdNumber >> forthNumber >> fifthNumber;
    bool flag=0;
    if (firstNumber >= secondNumber || firstNumber <= secondNumber)
    {
        if ((secondNumber >= firstNumber && secondNumber >= thirdNumber) || (secondNumber <= firstNumber && secondNumber <= thirdNumber))
        {
            if ((thirdNumber >= secondNumber && thirdNumber >= forthNumber) || (thirdNumber <= secondNumber && thirdNumber <= forthNumber))
            {
                if ((forthNumber >= thirdNumber && forthNumber >= fifthNumber) || (forthNumber <= thirdNumber && forthNumber <= fifthNumber))
                {
                    if (fifthNumber >= forthNumber || fifthNumber <= forthNumber)
                    {
                        flag = true;
                    }
                }
            }
        }
    }

    if (flag == 1)
    {
        std::cout << "Yes";
    }
    else
    {
        std::cout << "No";
    }

    //7
    int radius;
    int x, y;
    std::cin >> radius >> x >> y;
    if ((x * x + y * y) == radius * radius)
    {
        std::cout << "On the circle";
    }
    if ((x * x + y * y) < radius * radius)
    {
        std::cout << "In the circle";
    }
    if ((x * x + y * y) > radius * radius)
    {
        std::cout << "Out of the circle";
    }





}


