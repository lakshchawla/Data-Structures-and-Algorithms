#include <bits/stdc++.h>
using namespace std;

class encap
{
public:
    int a;
    void funcA()
    {
        cout << "func A" << endl;
    }

private:
    int b;

    void funcB()
    {
        cout << "func b" << endl;
    }
};

int main(void)
{
    encap obj;
    obj.funcA();
    // obj.funcB(); // INACCESSIBLE FUNCTION

    return 0;
}