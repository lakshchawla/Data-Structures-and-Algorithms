#include <bits/stdc++.h>
using namespace std;

void Reverse()
{
    int i = 0;
    while (i < top)
    {
        i++;
    }

    int t;
    if (i % 2 == 0)
        t = (i - 1) / 2;

    else
        t = i / 2;

    for (int j = 1; j <= t; j++)
    {
        int tmp = arr[-1 + j];
        arr[t - j] = arr[-1 + j];
        arr[-1 + j] = tmp;
    }

    for (int k = 0; k < i; k++)
    {
        cout << arr[k] << "  ";
    }
    cout << endl;
}

int main(void)
{
}