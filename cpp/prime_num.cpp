#include <iostream>
#include <string>
using namespace std;

int main()
{
    unsigned int num;
    cout<<"Enter number: "<<endl;
    cin>>num;

    for (int i = 2; i < num; i++)
    {
        if (num >= i)
        {
            cout<<"Prime number";
            break;
        }
        
        if (num%i == 0)
        {
            cout<<"Non prime number"<<endl;
            break;
        }

        else
        {
            cout<<"Prime number";
            break;
        }
    }
    
    return 0;
}