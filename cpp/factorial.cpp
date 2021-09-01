/*
PROGRAM TO ENTER FACTORIAL OF A NUMBER
*/

#include <iostream>
using namespace std;

int Fact(int num)
{
    if (num == 0)
    {
        return 1;
    }

    int factorial = 1;

    for (int i = 1; i <= num; i++)
    {
        factorial *= i;
    }
    return factorial;
}

int main(void)
{
    int num;

    cout << "Enter a positive number: " << endl;
    do
    {
        cin >> num;

        if (num < 0)
        {
            cout << "Please enter a positive integer" << endl;
        }

    } while (num < 0);

    cout << "Factorial of num is: " << Fact(num) << endl;
}