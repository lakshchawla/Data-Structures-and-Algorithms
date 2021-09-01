#include<bits/stdc++.h>
using namespace std;

class myClass
{
    int A;
    int B;

public:
    myClass(int a, int b)
    {
        A = a;
        B = b;
    }

    int addFunc()const
    {
        return (A+B);
    }
}obj(10,15);

int main(void)
{
    cout<<"The output of performed function is: "<<obj.addFunc();

    return 0;
}