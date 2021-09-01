//HOLLOW TRIANGLE

#include <iostream>
using namespace std;

int main()
{
    cout << "RECTANGULAR PATTERN USING CPP" << endl;

    int a, b;
    cout << "Input size of rectangle: " << endl;
    cin >> a >> b;

    for (int i = 0; i < a; i++)
    {
        if (i == 0 || i == a - 1)
        {
            for (int i = 0; i < b; i++)
            {
                cout << "*";
            }
            cout << endl;
            continue;
        }

        else
        {
            for (int i = 0; i < b; i++)
            {
                if (i == 0 || i == b - 1)
                {
                    cout << "*";
                }
                else
                {
                    cout << " ";
                }
            }
            cout << endl;
        }
    }
}