#include<bits/stdc++.h>
using namespace std;

class myclass
{
    int a;

public:
    myclass()
    {
        a = 10;
    }

    void print()
    {
        cout<<a;
    }
};

int main(void)
{
    myclass obj;
    obj.print();
}