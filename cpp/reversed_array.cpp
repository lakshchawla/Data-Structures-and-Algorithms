#include <iostream>
using namespace std;

int main()
{
    float a, b;
    cout << "Enter the 1st number:";
    cin >> a;
    cout << "Enter the 2nd number:";
    cin >> b;

    try
    {
        if (a != 0)

        {
            if (b != 0)
            {
                cout << "Result is:" << (b / a);
            }
            else
            {
                try
                {
                    throw(b);
                }

                catch (float b)
                {
                    cout << "Result is:" << 0 << " as value of b is:" << 0;
                }
            }
        }

        else

        {
            throw(a);
        }
    }
    catch (float a)

    {
        cout << "Answer is infinite because value of a is:" << 0;
    }

    return 0;
}
