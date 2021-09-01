#include<iostream>
using namespace std;

int main(void)
{
    int n;
    cout<<"Input size of the base: ";
    cin>>n;

    for (int i = 1; i <= n; i++)
    {
        for (int j = 0; j < n-i; j++)
        {
            cout<<"  ";
        }

        for (int k = n-i; k < n; k++)
        {
            cout<<"* ";
        }
        cout<<endl;
                
    }
    
}