#include<iostream>
using namespace std;

class calculate
{
    int val;

public:
    calculate():val(5)
    {

    }
    void operator ++ ()
    {
        ++val;
    }

    void display()
    {
        cout<<val;
    }
};

int main(void)
{
    calculate ca;
    ++ca;
    ca.display();x` 
}