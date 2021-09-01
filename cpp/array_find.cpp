#include <iostream>
using namespace std;

int LinearSearch(int arr[], int n, int key)
{
    for (int i = 0; i < n + 1; i++)
    {
        if (arr[i] == key)
        {
            // cout << "Key is at index " << i << endl;
            return i;
            break;
        }

        else
        {
            continue;
        }
    }
    return -1;
}

int main(void)
{
    int n = 6;
    int arr[n] = {12, 18, 20, 42, 8, 10};
    int key = 8;

    cout<<LinearSearch(arr, n, key);
}