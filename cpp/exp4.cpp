#include <bits/stdc++.h>
using namespace std;

class Employee
{
    string emp_name;
    long emp_num;

public:
    void getdata()
    {
        cout << "NAME   : ";
        cin >> emp_name;
        cout << "NUMBER : ";
        cin >> emp_num;
    }

    void putdata()
    {
        cout << endl<< endl<< "EMPLOYEE DETAILS: ";
        cout << endl<< "NAME   : " << emp_name;
        cout << endl<< "NUMBER : " << emp_num;
    }
};

int main(void)
{
    Employee emp[100];
    int n = 0;
    char ans;

    do
    {
        cout << endl<< "Enter details of Employee " << n + 1 << ": " << endl;
        emp[n].getdata();

        cout<<"Enter more [y/n]: ";
        cin>>ans;

        n++;
    } while (ans == 'y');

    for (int i = 0; i < n; i++)
    {
        emp[i].putdata();
    }

    return 0;
}