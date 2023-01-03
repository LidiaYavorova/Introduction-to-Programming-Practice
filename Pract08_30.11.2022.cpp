#include <iostream>
using namespace std;

//1
void onlySmallLetters(char* str)
{
    int index = 0;
    int indexNewStr = 0;
    while (str[index] != '\0') 
    {
        if (str[index] >= 'a' && str[index] <= 'z')
        {
            str[indexNewStr] = str[index];
            indexNewStr++;
        }
        index++;
    }
    str[indexNewStr] = '\0';

    cout << str;
}

//2-helping function 
int MyStrLen(const char* word)
{
    int index = 0;
    while (word[index] != '\0')
    {
        index++;
    }
    return index;
}
//2
void subStringFromBegToEnd(char* word, int beg, int end)
{
    if (MyStrLen(word) < beg)
    {
        cout << "";
    }
    else
    {
        if (end > MyStrLen(word))
        {
           end = MyStrLen(word);
        }

    int index = 0;
    for (int i = beg; i <= end; i++)
    {
        word[index] = word[i];
        index++;
    }
    word[index] = '\0';

    cout << word;
    }

}

//5
int countOfSymbolInString(const char* word, char symbol)
{
    int index = 0;
    int countOfSymbol = 0;
    while (word[index] != '\0')
    {
        if (word[index] == symbol)
        {
            countOfSymbol++;
        }
        index++;
    }
    return countOfSymbol;
}



int main()
{
    char str[1024];
    cin >> str;
    onlySmallLetters(str);
    subStringFromBegToEnd(str, 5, 6);
    cout<<countOfSymbolInString(str, 'a');
}
