#include <iostream>
using namespace std;

const int MAX_SIZE = 50;

void Swap(int& a, int& b)
{
    int temp = a;
    a = b;
    b = temp;
}

void inputMatrix(int matrix[][MAX_SIZE], int size)
{
    for (int i = 0; i < size; i++)
    {
        for (int j = 0; j < size; j++)
        {
            cin >> matrix[i][j];
        }
    }
}

void outputMatrix(int matrix[][MAX_SIZE], int size)
{
    for (size_t i = 0; i < size; i++)
    {
        for (size_t j = 0; j < size; j++)
        {
            cout << matrix[i][j] << " ";
        }
        cout << endl;
    }
}

void transponseMatrix(int matrix[][MAX_SIZE], int size)
{
    for (size_t i = 0; i < size; i++)
    {
        for (size_t j = i+1; j < size; j++)
        {
            Swap(matrix[i][j], matrix[j][i]);
        }
    }
}

void equalColumns()
{
    const int ROWS = 2;
    const int COLUMNS = 3;
    double matrix[ROWS][COLUMNS] = { {1, 2, 1}, {3, 3, 3} };
    bool found = false;
    // с първите два цикъла обхождаме всички възможни комбинации от два стълба (без повторение)
    for (int j = 0; j < COLUMNS - 1 && !found; j++)
    {
        for (int k = j + 1; k < COLUMNS && !found; k++)
        {
            // да проверим дали j-тият стълб е еднакъв с k-тия стълб:
            bool equal = true;
            for (int i = 0; i < ROWS && equal; i++)
            {
                if (matrix[i][j] != matrix[i][k])
                {
                    equal = false;
                }
            }
            if (equal)
            {
                found = true;
            }
        }
    }
    cout << boolalpha<<found << endl;
}

void ElementsAboveMainDiagonal(int matrix[][MAX_SIZE], int size)
{
    // обхождане на елементи над главния диагонал, включително и него
    for (int i = 0; i < size; i++)
        for (int j = i; j < size; j++)
            cout << matrix[i][j] << " ";
    cout << endl;
}

void ElementsUnderMainDiagonal(int matrix[][MAX_SIZE], int size)
{
    // обхождане на елементи под главния диагонал
    for (int i = 1; i < size; i++)
        for (int j = 0; j<i; j++)
            cout << matrix[i][j] << " ";
    cout << endl;
}


int main()
{
    int matrix[MAX_SIZE][MAX_SIZE];
    unsigned int size;
    cin >> size;
    inputMatrix(matrix, size);
    transponseMatrix(matrix, size);
    outputMatrix(matrix, size);
    equalColumns();
}

