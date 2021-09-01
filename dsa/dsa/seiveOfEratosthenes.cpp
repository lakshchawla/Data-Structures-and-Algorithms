#include <bits/stdc++.h>
using namespace std;

void primeSieve(int n)
{
    int primeArr[n] = {0};

    for (int i = 2; i * i <= n; i++)
    {
        for (int j = i * i; j < n; j += i)
        {
            primeArr[j] = 1;
        }
    }

    for (int i = 2; i < n; i++)
    {
        if (primeArr[i] == 0)
        {
            cout<<i<<"  ";
        }
        
    }
    
}

int main(void)
{
    primeSieve(50);
}