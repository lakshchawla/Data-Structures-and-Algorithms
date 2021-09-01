#include <iostream>
using namespace std;

class Complex
{
private:
    int num1;
    int num2;

public:
    Complex(int r, int i)
    {
        num1 = r;
        num2 = i;
    }

    friend Complex operator<(Complex const &, Complex const &);
};

Complex operator<(Complex const &c1, Complex const &c2)
{
    return c1.num1;
}

int main()
{
    Complex c1(10, 5), c2(2, 4);
    Complex c3 = c1 < c2;
    return 0;
}
