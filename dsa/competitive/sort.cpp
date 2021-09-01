#include <iostream>
using namespace std;

void swap(int arr[], int a, int b)
{
    int tmp = arr[a];
    arr[a] = arr[b];
    arr[b] = tmp;
}

void printArray(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << "\n";
}

int partition(int arr[], int l, int h)
{
    int pivot = arr[h];
    int i = (l - 1);

    for (int j = l; j < h; j++)
    {

        if (arr[j] < pivot)
        {

            i++;
            swap(arr, i, j);
        }
    }
    swap(arr, i + 1, h);
    return (i + 1);
}

void quickSorting(int arr[], int l, int h)
{
    if (l < h)
    {
        int pivot = partition(arr, l, h);

        quickSorting(arr, l, pivot - 1);
        quickSorting(arr, pivot + 1, h);
    }
}

int main(void){
    int n; cin>>n;

    int arr[n];
    for (int i = 0; i < n; i++) cin>>arr[i];

    quickSorting(arr,0,n);
    printArray(arr, n);
    
}