#include <iostream>
using namespace std;

void checkInt(float a)
{
    if(a - (int)a != 0)
    {
        throw("Warning! Entered value is not an integer.");
    }
}

int main()
{
    float days;

    cout<<"Enter days:";
    cin>>days;

    checkInt(days);

    try
    {
        cout<<"The entered number of days are: "<<days<<endl;
    }
    catch (const char *errMsg)
    {
        cerr<<errMsg<<endl;
    }

    return 0;
}