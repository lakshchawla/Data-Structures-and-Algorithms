#include <iostream>
using namespace std;

int MaxTilli(int arr[], int size)
{
    int sum = 0;
    for (int i = 0; i < size; i++)
    {
        for (int j = 0; j < i; j++)
        {
            sum += arr[j];
        }
    }

    return sum;
}

int main(void)
{
    int arr[5] = {1, 5, 9, 8, 7};

    cout << MaxTilli(arr, 5);
}