#include<iostream>
using namespace std;

int factorial(int num)
{
    int fact = 1;

    for (int i = 1; i <= num; i++)
    {
        fact *= i;
    }
    return fact;
}

float cal_ncr(int n, int r)
{
    float ncr = factorial(n)/(factorial(n-r) * factorial(r));

    return ncr;
}

int main(void)
{
    int n, r;
    cout<<"Enter n and r: ";
    cin>>n>>r;

    cout<<"nCr = "<<cal_ncr(n,r)<<endl;

    return 0;
}