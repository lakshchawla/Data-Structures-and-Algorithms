#include <iostream>
using namespace std;

int main(void)
{
    int n = 5;
    int s = 17;
    int sum = 0;

    int arr[n] = {5,9,6,3,8};

    for (int i = 0; i < n; i++)
    {
        sum = 0;
        for (int j = i; j < n; j++)
        {
            sum = sum + arr[j];
            if (sum == s)
            {
                cout<< "We will get sum of "<< s <<" from index "<< i << " to " << j << endl;
                break;
            }

            else
            {
                continue;
            }
        }
        if (sum == s)
        {
            break;
        }
    }
}