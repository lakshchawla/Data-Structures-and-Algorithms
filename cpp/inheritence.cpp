#include <bits/stdc++.h>
using namespace std;

class A
{
public:
    void func()
    {
        cout << "inherited" << endl;
    }
};

class B : public A
{
};
// B is inheriting A

int main(void)
{
    B b;
    b.func();
}