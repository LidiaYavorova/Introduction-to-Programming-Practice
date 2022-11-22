#include <iostream>

int main()
{
    //8
    int n;
    std::cin >> n;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            std::cout << '$' << ' ';
        }
        std::cout<<std::endl;
    }

    //9
    int spaces = n - 1;
    for (int i = 1; i <= n;i++)
    {
        for (int b=spaces; b>0; b--)
        {
            std::cout << " ";
        }
        spaces--;
        for (int j = i; j >=1; j--)
        {
            std::cout << j;
        }
        std::cout << std::endl;
    }
    spaces = n-1;
    for (int i = n-1; i >0; i--)
    {
        for (int j = 1; j<spaces; j++)
        {
            std::cout << " ";
        }
        spaces++;
        
        for (int b= i; b >0; b--)
        {
            std::cout << b;
        }
        std::cout << std::endl;
    }

}


