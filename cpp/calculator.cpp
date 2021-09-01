#include <iostream>
using namespace std;

float calculate(float n1, char oper, float n2)
{
    float result = 0;

    switch (oper)
    {
    case '+':
        result = n1 + n2;
        break;

    case '-':
        result = n1 - n2;
        break;

    case '*':
        result = n1 * n2;
        break;

    case '/':
        result = n1 / n2;
        break;

    default:

        break;
    }

    return result;
}

int main(void)
{
    float a, b;
    char oper;

    char ans;

    do
    {
        cout<<"Enter the operation: ";
        cin>>a>>oper>>b;
        cout<<"The ans is : " <<calculate(a,oper,b)<<endl;

        cout<<"Do you want to calculate again (y/n): ";
        cin>>ans;

        if (ans == 'n')
            break;
        
        
    } while (ans == 'y');

    return 0;
    
}