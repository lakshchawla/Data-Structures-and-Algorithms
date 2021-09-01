#include<bits/stdc++.h>
using namespace std;

int main(void)
{
    int n;
    cin>>n;
    int farm[n];
    for (int i = 0; i < n; i++)
    {
        cin>>farm[i];
    }

    if(n%2 == 0)
        n = n/2;

    else
        n = (n-1)/2;


    int i = 0, part = 0;
    while(i <= n)
    {
        if (farm[i] < farm[n-1-i])
        {
            i++;
            int j,sum = 0;
            for (j = 0; j < i; j++)
            {
                sum += farm[j];
            }

            if (sum >= farm[n-i-1])
            {
                i = j;
                break;  
            }
        }

        else if (farm[i] == farm[n-1-i])     
        {
            continue;
            i++;
        }

        else
        {
            i++;
            int j,sum = 0;
            for (j = i; j > 0; j++)
            {
                sum += farm[j];
            }

            if (sum >= farm[i])
            {
                i = j;
                break;
            }
        }
        

        if(n == part)
            break;

    }

    cout<<i;
}