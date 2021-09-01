#include <iostream>
using namespace std;



int gcd(int num1, int num2)
{
    int tmp = 1;

    while (tmp != 0)
    {
        tmp = num1 % num2;
        // mod(tmp);
        num1 = num2;
        num2 = tmp;
    }
    return num1;
}

int main(void)
{
    cout<<gcd(42,24);
}
