#include <iostream>
using namespace std;

int divisible(int n)
{
    int d5 = 0, d7 = 0, dc = 0;
    for (int i = 0; i < n; i++)
    {
        if (i % 5 == 0 && i % 7 == 0)
            dc++;

        else if (i % 5 == 0)
            d5++;

        else if (i % 7 == 0)
            d7++;
    }

    return (d5 + d7 + dc);
}

int main(void)
{
    cout<<divisible(40);
}