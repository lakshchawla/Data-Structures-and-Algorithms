// INVERTED PYRAMID

#include<iostream>
using namespace std;

int main(void)
{
    int n;
    cout<<"Input size of the base: ";
    cin>>n;

    for (int i = n; i > 0; i--)
    {
        for (int j = 0; j < i; j++)
        {
            cout<<"*";
        }
        cout<<endl;
    }
    
}