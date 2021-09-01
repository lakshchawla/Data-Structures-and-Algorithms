//NAME:   Lakshay Chawla
//UID:    20BEC1002
//BRANCH: 20BEC-BEL(A)

//Ques 1.

//This program will check if the 
// number is odd or even, using try catch, 
// if the number is odd it will terminate 
// with a warning

#include<bits/stdc++.h>
using namespace std;

void checkCondition(int num)
{
    if(num%2 != 0)
    {
        throw("The entered number is odd");
        return;
    }

    else
        return;
}

int main()
{
    int num;
    cout<<"Enter a number: ";
    cin>>num;
    checkCondition(num);

    try
    {
        cout<<"The entered number is even"<<endl;
    }
    catch (const char *errMsg)
    {
        cout<<errMsg<<endl;
    }

    return 0;
}