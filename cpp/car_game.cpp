#include <bits/stdc++.h>
using namespace std;

int main(void)
{
    cout << "w = move \na = left \nd = right \ns = stop \nx = exit " << endl;

    char cmd;

    do
    { // A:
        cout << "Enter the command: ";
        cin >> cmd;

        switch (cmd)
        {
        case 'w':
            cout << "Moving...increasing speed" << endl;
            // goto A;
            break;

        case 'a':
            cout << "Turned left" << endl;
            // goto A;
            break;

        case 'd':
            cout << "Turned right" << endl;
            // goto A;
            break;

        case 's':
            cout << "stopped" << endl;
            // goto A;
            break;

        case 'x':
            cout << "Game over" << endl;
            break;

        default:
            break;
        }
        break;
    } while (cmd != 'x');
}