#include <bits/stdc++.h>
using namespace std;

int main(void)
{
    int n = 5, arr[n] = {4,5,1,2,3};
    int iSum = 0;

    for (int i = 0; i < n; i++)
    {
        iSum += (arr[i] * i);
    }

    for (int r = 0; r < n; r++)
    {
        int tmp[r];
        for (int i = 0; i < r; i++)
            tmp[i] = arr[n - r + i];

        for (int j = 1; j <= n - r; j++)
            arr[n - j] = arr[n - r - j];

        for (int i = 0; i < r; i++)
            arr[i] = tmp[i];

        int fSum = 0;
        for (int i = 0; i < n; i++)
            fSum += (arr[i] * i);

        if (fSum > iSum)
            iSum = fSum;
    }

    cout<<iSum;    
}
