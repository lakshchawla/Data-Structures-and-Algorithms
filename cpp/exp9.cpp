#include <iostream>
using namespace std;

struct student
{
    char name[50];
    int roll;
    float marks;

} st[10];

int main()
{
    cout << "Information of all the students " << endl;

    for (int i = 0; i < 3; ++i)
    {
        st[i].roll = i + 1;
        cout << "Enter the roll number of the student:";
        cin >> st[i].roll;
        cout << "Enter the name of student name: ";
        cin >> st[i].name;

        cout << "Enter the marks of the student: ";
        cin >> st[i].marks;
        cout << endl;
    }

    cout << "Displaying the Information of the students: " << endl;

    for (int i = 0; i < 3; ++i)
    {
        cout << "\nRoll number of the student: " << i + 1 << endl;
        cout << "Name of the student: " << st[i].name << endl;
        cout << "Marks of the student: " << st[i].marks << endl;
    }
    return 0;
}
