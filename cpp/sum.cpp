#include<iostream>
using namespace std;

int sum(int a,int b)
{
    return a+b;
}

int main(void)
{
    int num1, num2;

    cout<<"Enter two nums for addition"<<endl;
    cin>>num1>>num2;

    cout<<"Sum of "<<num1<<" and "<<num2 <<" is "<<sum(num1, num2)<<endl;
}