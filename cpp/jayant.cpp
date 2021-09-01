#include <iostream>
using namespace std;

class Demo
{

};

int main()
{
    try
    {
        // int age = 15;
        // if (age >= 18)
        // {
        //     cout << "Access granted - you are old enough.";
        // }
        // else
        // {
        //     throw(age);
        // }

        Demo o1;
        throw(o1);
    }
    catch (...)
    {
        cout << "Access denied - You must be at least 18 years old.\n";
    }
    return 0;
}
