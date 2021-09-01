#include<iostream>
using namespace std;

int add(int n)
{
    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        sum += i;
    }
    
    return sum;
}

int main(void)
{
    int n;
    cout<<"Enter n: ";   cin>>n;

    cout<<"The sum of 0 to     "<<n<<" natural numbers is "<<add(n);
}