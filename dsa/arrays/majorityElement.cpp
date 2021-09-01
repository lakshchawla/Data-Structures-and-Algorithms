#include <iostream>
using namespace std;


void majorElement(int arr[])
{
    int ansIndex = 0;
    int eleCount = 1;

    for (int i = 0; i < 5; i++)
    {
        if (arr[i] == arr[ansIndex])
        {
            eleCount++;
        }
        else
        {
            eleCount--;
        }

        if (eleCount == 0)
        {
            ansIndex++;
            eleCount = 1;
        }
    }

    eleCount = 0;

    for (int i = 0; i < 5; i++)
    {
        if (arr[i] == arr[ansIndex])
        {
            eleCount++;
        }
        
    }
    
    if (eleCount > 2)
    {
        cout<<"The majority element is: "<<arr[ansIndex];
        return;
    }

    cout<<"Majority element not found";
    

    // cout<<arr[ansIndex];
}

int main(void)
{
    int arr[5] = {1, 1, 2, 2, 3};

    majorElement(arr);
}
