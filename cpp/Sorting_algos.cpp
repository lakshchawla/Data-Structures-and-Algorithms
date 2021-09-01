#include <iostream>
using namespace std;

void NormalSort(int arr[], int size)
{
    int tmp = 0;

    // int arr[5] = {3,5,2,4,1};

    for (int i = 0; i < size; i++)
    {
        for (int j = 0; j < size; j++)
        {
            if (arr[i] < arr[j])
            {
                tmp = arr[i];
                arr[i] = arr[j];
                arr[j] = tmp;
            }
        }
    }

    for (int k = 0; k < size; k++)
    {
        cout << arr[k] << "  ";
    }
}

void InsertionSort(int arr[], int size)
{
    
    for (int i = 1; i < size; i++)
    {
        int tmp = arr[i];
        int j = i-1;

        while (arr[j]>tmp && j >= 0)
        {
            arr[j+1] = arr[j];
            j--;
        }
        arr[j+1] = tmp;
        
    }

    for (int x = 0; x < size; x++)
    {
        cout<<arr[x]<<"  ";
    }
    
}

void BubbleSort(int arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        for (int j = 0; j < size; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                int tmp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = tmp;
            }
            else
            {
                continue;
            }
        }
    }

    for (int k = 0; k < size; k++)
    {
        cout << arr[k] << "  ";
    }
    cout << endl;
    cout << endl;
}


int main(void)
{
    int arr[6] = {12, 45, 23, 51, 19, 8};

    InsertionSort(arr,6); 
}