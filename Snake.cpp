#include <iostream>
#include <windows.h>
using namespace std;
const int maxSize = 50;

void print(char arr[][maxSize], int size)
{
	for (size_t i = 0; i < size; i++)
	{
		for (size_t j = 0; j < size; j++)
		{
			cout << arr[i][j] << " ";
		}
		cout << endl;
	}
}
int main()
{
	int size;
	char arr[maxSize][maxSize];

	cin >> size;

	for (size_t i = 0; i < size; i++)
	{
		for (size_t j = 0; j < size; j++)
		{
			arr[i][j] = ' ';
		}
	}

	int changeY = 1, changeX = 0, x = 0, y = 0;

	for (size_t i = 0; i < 4 * size - 3; i++)
	{
		arr[x][y] = '#';

		system("cls"); //only to make it look pretty
		print(arr, size);

		//changing direction here
		if (x == 0 && y == (size - 1))
		{
			changeX = 1;
			changeY = 0;
		}
		if (x == (size / 2) && y == (size - 1))
		{
			changeX = 0;
			changeY = -1;
		}
		if (x == (size / 2) && y == 0)
		{
			changeX = 1;
			changeY = 0;
		}
		if (x == (size - 1) && y == 0)
		{
			changeX = 0;
			changeY = 1;
		}

		x += changeX;
		y += changeY;
	}

	return 0;
}

