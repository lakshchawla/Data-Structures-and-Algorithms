#include <iostream>
#include <string.h>
using namespace std;

class employee
{
private:
    int emp_number;
    char emp_name[20];

public:

    void get_emp_details()
    {

        cout << "\nEnter employee number: ";
        cin >> emp_number;
        cout << "\nEnter employee name: ";
        cin >> emp_name;
    }

    void show_emp_details()
    {
        cout << "\n\n** Details of  Employee **";
        cout << "\nEmployee Name      :  " << emp_name;
        cout << "\nEmployee number    :  " << emp_number;
    }
};

int main()
{
    employee emp;

    emp.get_emp_details();
    emp.show_emp_details();

    return 0;
}