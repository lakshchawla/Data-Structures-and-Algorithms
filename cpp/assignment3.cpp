#include<bits/stdc++.h>
using namespace std;

int main(void)
{
    int *ptr_arr = new int[10];

    for (int i = 0; i < 10; i++)
    {
        cout<<"Enter value "<<(i+1)<<": ";
        cin>>ptr_arr[i];
    }

    for (int i = 0; i < 10; i++)
    {
        cout<<"The entered value at index "<<i<<" is "<<ptr_arr[i]<<endl;
    }
}