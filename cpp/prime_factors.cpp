#include <bits/stdc++.h>
using namespace std;

int main(void)
{
    int num = 20;

    // int i = 2;

    // while (i < num)
    // {
    //     if(num%i == 0)
    //     {
    //         cout<<i<<" * ";
    //         num /= i;
    //     }
    //     i++;
    // }

    for (int i = 2; i <= num; i++)
    {
        if (num % i == 0)
        {
            cout << i << " * ";
        }
        
        num =num / i;

        if (num == 1)
            break;

            
    }

    cout << "1" << endl;
}