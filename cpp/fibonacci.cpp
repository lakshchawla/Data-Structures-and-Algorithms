#include<iostream>
using namespace std;

int main(void)
{
    int n = 20;

    int t1 = 0, t2 = 1, next_term;
    for (int i = 0; i <= n; i++)
    {
        cout<<t1<<"  ";
        next_term = t1 + t2;
        t1 = t2;
        t2 = next_term;
    }
    
}