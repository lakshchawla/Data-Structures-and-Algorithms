//NAME:   Lakshay Chawla
//UID:    20BEC1002
//BRANCH: 20BEC-BEL(A)

//Ques 2.

#include<bits/stdc++.h>
using namespace std;

int myClass
{
public:
    myClass()
    {
        cout<<"Constructor called";
    }

    ~myClass()
    {
        cout<<"Destructor called";
    }
};

int main(void)
{
    myClass{};

}