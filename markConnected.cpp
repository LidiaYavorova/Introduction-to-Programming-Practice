using namespace std;
#include <iostream>

const int wall = 0;
const int walkable= 1;
const int marked = 2;
const int moves = 4;
const int dx[] = { 0,0,-1,1 };
const int dy[] = { -1,1,0,0 };

bool isValid(int x, int y, int width, int height)
{
	return x >= 0 && y >= 0 && x <= width && y <= height;
}

void DFS(int** table, int currX, int currY, int width, int height)
{
	if (!isValid(currX, currY, width, height) || table[currX][currY] != walkable) return;
	
	table[currX][currY] = marked;

	for (size_t i = 0; i < moves; i++)
	{
		DFS(table, currX + dx[i], currY + dy[i], width, height);
	}
}
int main()
{
	int** table;
	int width, height;
	cin >> width >> height;
	int startX, startY;
	cin >> startX >> startY;
	table = new int* [height]; 
	for (size_t i = 0; i < height; i++)
	{
		table[i] = new int[width];
		for (size_t j = 0; j < width; j++)
		{
			cin >> table[i][j];
		}
	}

	DFS(table, startX, startY, width, height);
	
	for (size_t i = 0; i < height; i++)
	{
		for (size_t j = 0; j < width; j++)
		{
			cout << table[i][j] << " ";
		}
		cout << endl;
	}

	for (size_t i = 0; i < height; i++)
	{
		delete[] table[i];
	}
	delete[] table;
}


