#include <iostream>
using namespace std;

//functions

//1
double absoluteValue(double number)
{
	return number < 0.00 ? -number : number;
}

//2
double distance(int x1, int y1, int x2, int y2)
{
	double result = 0;
	result = sqrt((x2 - x1) * (x2 - x1) + (y2 - y1) * (y2 - y1));
	return result;
}


//3
double perimeterOfTriangle(int x1, int y1, int x2, int y2, int x3, int y3)
{
	double sideA = distance(x1, y1, x2, y2);
	double sideB = distance(x1, y1, x3, y3);
	double sideC = distance(x2, y2, x3, y3);
	return sideA + sideB + sideC;

}

bool IsPrime(int number)
{
	bool flag = true;
	int limit = sqrt(number);
	for (int i = 2; i <= limit; i++)
	{
		if (number % i == 0)
		{
			flag = false;
			break;
		}
	}
	return flag;
}


//4
void kDivisorsInInterval(int startInterval, int endInterval, int k)
{
	int count = 0;
	if (startInterval < 0 || endInterval < 0)
	{
		cout << "Invalid input";
	}

	if (startInterval > endInterval)
	{
		int temp = startInterval;
		startInterval = endInterval;
		endInterval = temp;
	}

	for (int i = startInterval; i <= endInterval; i++)
	{
		for (int j = 2; j <= startInterval; j++)
		{
			if (IsPrime(j))
			{
				if (i % j == 0)
				{
					count++;
				}
			}

		}
		if (count == k)
		{
			cout << i<<" ";
		}
		count = 0;
	}
}


//arrays
void inputArray(int* arr, unsigned size)
{
	for (int i = 0; i < size; i++)
	{
		cin >> arr[i];
	}
}

//1
bool isArrayPalindrome(const int* arr, unsigned size)
{
	bool flag = true;
	for (int i = 0; i < size/2; i++)
	{
		if (arr[i] != arr[size-1 - i]) 
		{
			flag = false;
		}
	}
	return flag;
}


//5
int countInversionsInArray(const int* arr, unsigned size)
{
	int count = 0;
	for (unsigned i = 0; i < size; i++)
	{
		for (unsigned j = i+1; j < size; j++)
		{
			if (arr[i] > arr[j])
			{
				count++;
			}
		}
	}
	return count;
}

//6
int firstRemovedNumber(int* arr, unsigned size)
{
	for (int i = 0; i < size; i++)
	{
		if (arr[i+1]-arr[i]!=1)
		{
			return arr[i]+1;
		}
	}
}
int main()
{
	
}

