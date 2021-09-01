/*
SUBARRAY MAXIMUM SUM ALGORITHMS
*/

#include <iostream>
#include <climits>
using namespace std;

int main(void)
// {

//     //BRUTE FORCES
//     //************

//     int n = 4;
//     int arr[n] = {-1,4,7,2};

//     int maxSum = 0;

//     for (int i = 0; i <= n; i++)
//     {
//         for (int j = i; j < n; j++)
//         {
//             int sum = 0;
//             for (int k = i; k <= j; k++)
//             {
//                 // cout<<arr[k]<<" ";
//                 sum += arr[k];
//                 // cout<<sum;
//             }
//             // cout << endl;
//             maxSum = max(maxSum,sum);
//         }
//     }

//     cout<<maxSum<<endl;
// }

// {
//     //CUMULATIVE SUM APPROACH
//     //***********************
//     int n = 5;
//     int arr[n] = {1,-4,3,2,1};
//     int sum = 0;

//     int currsum[n+1];
//     currsum[0] = 0;

//     for (int i = 1; i <= n; i++)
//     {
//         currsum[i] = currsum[i - 1] + arr[i - 1];
//     }

//     int maxSum = 0;
//     for (int i = 1; i <= n; i++)
//     {
//         int sum = 0;
//         for (int j = 0; j < i; j++)
//         {
//             sum = currsum[i] - currsum[j];
//             maxSum = max(sum, maxSum);
//         }
//     }

//     cout<<maxSum<<endl;

//     return 0;
// }

{
    // KADANES ALGO
    // ************
    int n = 5;
    int arr[n] = {-1, -4, -6, -7, -4};

    int currsum = 0;
    int max_sum = INT_MIN;

    for (int i = 0; i < n; i++)
    {
        currsum += arr[i];
        
        max_sum = max(max_sum, currsum);

        if (currsum < 0)
        {
            currsum = 0;
        }
    }
    cout << max_sum << endl;
}