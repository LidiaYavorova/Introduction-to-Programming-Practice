#include <iostream>
using namespace std;
const unsigned MAX_SIZE = 1000;

void Increment(int arr[], unsigned size)
{
    for (unsigned i = 0; i < size; i++)
    {
        arr[i]++;
    }
}

void inputArray(int* arr, int size)
{
    for (int i = 0; i < size; i++)
    {
        cin >> arr[i];
    }
}

void printArray(int* arr, int length)
{
    for (int i = 0; i < length; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int LinearSearch(const int* arr, int length, int number)
{
    for (int i = 0; i < length; i++)
    {
        if (arr[i] == number) return i;
    }
    return -1;
}

void Swap(int& a, int& b)
{
    int temp = a;
    a = b;
    b = temp;
}

void ReverseArray(int* arr, int length)
{
    for (int i = 0; i < length/2; i++)
    {
        Swap(arr[i], arr[length - 1 - i]);
        
    }
    for (int i = 0; i < length ; i++)
    {
        cout << arr[i] << " ";
    }

   
}

int BinarySearch(const int* arr, int size, int number)
{
    int l = 0, r = size - 1, m = (l + r) / 2;
    while (l <= r)
    {
         m = (l + r)/ 2;
        if (arr[m] == number) return m;
        else if (arr[m] < number) l = m + 1;
        else if (arr[m] > number) r = m - 1;
    }
    return -1;
}

void BubbleSort(int* arr, int length)
{
    int k;
    bool flag = false;
    for (int k = 1; k < length; k++)
    {
        for (int i = 0; i < length-k; i++)
        {
            if (arr[i] > arr[i + 1])
            {
                Swap(arr[i], arr[i + 1]);
                flag = true;
            }
        }
        if (flag == false) break;
    }
}

void InitArray(bool* arr, int size,bool value)
{
    for (unsigned i = 0; i < size; i++)
    {
        arr[i] = value;
    }
}

void EratosthenesSieve(bool* arr, int size)
{
    arr[0] = arr[1] = false;
    for (int i = 2; i < size / 2; i++)
    {
        if (!arr[i])
        {
            continue;
        }
        for (int j = i * i; j < size; j+=i)
        {
            arr[j] = false;
        }
    }
}

void printErathostensSieve(const bool* arr, unsigned size)
{
    for (int i = 0; i < size; i++)
    {
        if (arr[i])
        {
            cout << i << " ";
        }
    }
}

int numberOccurences(int* arr,int size,int number)
{
    int count = 0;
    for (int i = 0; i < size; i++)
    {
        if (arr[i] == number)
        {
            count++;
        }
        if (count >= 2)
        {
            return arr[i];
        }
    }
}

int repeatingNumber(int* arr, int size)
{
    for (int i = 0; i <= size; i++)
    {
        return numberOccurences(arr, size, arr[i]);
        
    }
}

void sortArrayEvenOddNumbers(int* arr, int size)
{
    int k;
    bool flag = false;
    for (int k = 1; k < size; k++)
    {
        for (int i = 0; i < size - k; i++)
        {
            if (arr[i]%2!=0 && arr[i+1] % 2 == 0)
            {
                Swap(arr[i], arr[i+1]);
                flag = true;
            }
        }
        if (flag == false) break;
    }
}

void decimalNumberToBinaryARRAY(int number) 
{
    int arr[MAX_SIZE];
    int count = 0;
        for (int i = 0; i < MAX_SIZE; i++)
        {
           
                arr[i] = number % 2;
                number /= 2;
                count++;
                if (number == 0)
                {
                    break;
                }
    
        }
    
    for (int i = count-1; i >=0; i--)
    {
        cout << arr[i];
    }
}

int reverseNumber(int n)
{
    int result = 0;
    while (n > 0)
    {
        (result *= 10) += n% 10;
        n/= 10;
    }
    return result;
}

int decimalNumberToBinaryNUMBER(int number)
{
    int result = 0;
    while (number > 0)
    {
        (result *= 10) += number % 2;
        number /= 2;
    }

    return reverseNumber(result);
}

int SmallerNumber(int a, int b)
{
    return ((a < b) ? a : b);
}

int BiggerNumber(int a, int b)
{
    return ((a > b) ? a : b);
}

void sectionOfTwoArrays(int* arr1, int size1, int* arr2, int size2)
{
    
    if (sizeof(arr1)<sizeof(arr2))
    {
        for (int i = 0; i < size1; i++)
        {
            for (int j = 0; j < size2; j++)
            {

                if (arr1[i] == arr2[j])
                {
                    cout << arr1[i] << " ";
                }

            }
        }
    }
    else
    {
        for (int i = 0; i < size2; i++)
        {
            for (int j = 0; j < size1; j++)
            {

                if (arr2[i] == arr1[j])
                {
                    cout << arr2[i] << " ";
                }

            }
        }
    }
}

void PrintPositiveElements(int n) {
    if (n <= 0) {
        std::cout << "Error!\n";
        return;
    }

    int counter = 1, elementCounter = 0;

    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < counter && elementCounter < n; ++j, ++elementCounter) {
            std::cout << counter << " ";
        }
        counter++;
    }
    std::cout << std::endl;
}

void transponseMatrix(int matrix[4][4], int rows, int columns)
{
    for (int i = 0; i < rows; i++)
    {
        for (int j = i + 1; j < columns; j++)
        {
            Swap(matrix[i][j], matrix[j][i]);
        }
    }
}

void printMatrix(int matrix[4][4], int rows,int columns)
{
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < columns; j++)
        {
            cout << matrix[i][j]<<" ";
        }
        cout <<endl;
    }
}

int main()
{
    
}

