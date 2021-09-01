#include <iostream>
#include <math.h>
using namespace std;

bool pyth_triplet(int x, int y, int z)
{
    int hypo = max(x, max(y, z));
    int p, b;

    if (hypo == x)
    {
        p = y;
        b = z;
    }
    else if (hypo == y)
    {
        p = x;
        b = z;
    }
    else
    {
        p = y;
        b = x;
    }

    int lhs = pow(hypo,2);

    if (lhs = pow(p,2) + pow(b,2))
    {
        return 1;
    }
    else
    {
        return 0;
    }
    
}

int main(void)
{
    int a, b, c;

    cout << "Enter the sides a, b, c: " << endl;
    cin >> a >> b >> c;

    if(pyth_triplet(a,b,c)){
        cout<<"Pythogorian Triplet";
    }

    else{
        cout<<"Not a Pythogorian Triplet";
    }
}