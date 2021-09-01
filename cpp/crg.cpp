#include <bits/stdc++.h>
using namespace std;

class A
{
    int var1;
public:
    A(int x)
    {
        cout<<"Int value passed to A"<<endl;
        cout<<"A constructor called"<<endl;
        cout<<"Value passed is "<<x<<endl<<endl<<endl;
    }
};

class B
{
    int var2;
public:
    B(float y)
    {
        cout<<"Float value passed to B"<<endl;
        cout<<"B constructor called"<<endl;
        cout<<"Value passed is "<<y<<endl<<endl<<endl;
    }
};

class C : public A, public B
{
public:
    C(int a, float b, int c, int d) : A(a), B(b)
    { 
        cout<<"Int value passed to C"<<endl;
        cout<<"C constructor called"<<endl;
        cout<<"Value passed is "<<c<<" and "<<d<<endl<<endl<<endl;
    }
};

int main(void)
{
    C obj1(5, 1.23, 8, 10);
}