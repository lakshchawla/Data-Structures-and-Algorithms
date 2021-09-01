#include <iostream>
using namespace std;

int main(void)
{
    int speed;
    do{
        cout << "Enter your speed: ";
        cin >> speed;
    }while(speed < 0);

    if (speed > 65)
    {
        cout << "Over speed Limit" << endl;
    }

    else
    {
        cout << "Within speed limit" << endl;
    }

    return 0;
}