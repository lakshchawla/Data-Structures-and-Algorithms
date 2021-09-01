/*
First, reversing the polarity of elelments of array
i.e. -ve to +ve and +ve to -ve
then checking the non contributing elements through 
kaden's theorem then calculating max sum by 
max_sum = total_array_sum - sum_non_contri_elem
*/

#include <iostream>
#include <climits>
using namespace std;

int main(void)
{
    int n = 7;
    int arr[n] = {4, -4, -6, 6, -10, 11, -12};
    int arr_sum = 0;

    for (int i = 0; i < n; i++)
    {
        arr_sum += arr[i];
    }

    for (int i = 0; i < n; i++)
    {
        arr[i] = arr[i] * -1;
    }

    int currsum = 0;
    int max_sum = INT_MIN;
    int SumNonConElem = 0;

    for (int i = 0; i < n; i++)
    {
        currsum += arr[i];

        if (currsum < 0)
        {
            currsum = 0;
        }

        if (currsum = arr[i])
        {
            SumNonConElem += arr[i];
        }

        max_sum = arr_sum - SumNonConElem;
    }
    cout << max_sum << endl;
}