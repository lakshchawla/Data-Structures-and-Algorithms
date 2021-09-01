#include <iostream>
using namespace std;

void RepeatingElementIndex(int arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        for (int j = i + 1; j < size; j++)
        {
            if (arr[i] == arr[j])
            {
                cout<< i<<endl;
                break;
            }
        }
    }
} 

int main(void)
{
    int arr[7] = {1,8,3,4,3,5,6};

    RepeatingElementIndex(arr, 7);
    return 0;
}