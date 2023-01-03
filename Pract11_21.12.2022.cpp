#include <iostream>
using namespace std;


//1
bool IsnumberKInANumber(int numberToCheck, int k)
{
    if (numberToCheck == 0)
    {
        return false;
    }
    if (numberToCheck%10 == k)
    {
        return true;
    }
   
    return IsnumberKInANumber(numberToCheck / 10,k);
}

//2
int power(int base, int exponent)
{
    if (exponent == 0)
    {
        return 1;
    }
    return base * power(base, exponent - 1);
}

//3
void reverseNumber(int numberToReverse)
{
    if (numberToReverse > 0)
    {
        cout << numberToReverse % 10;

        reverseNumber(numberToReverse / 10);
    }
    
}
int main()
{
    int k;
    cin >> k;
    cout<<boolalpha<<IsnumberKInANumber(167, k);
    int base,exponent;
    cin >> base >> exponent;
    cout << power(base, exponent);*/
    reverseNumber(787878);

}
