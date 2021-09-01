#include <iostream>
using namespace std;

int main(void)
{
    int mm, marks;
    cout << "Enter total marks: ";
    cin >> mm;

    do
    {
        cout << "Enter marks obtained by student: ";
        cin >> marks;
    } while (marks > mm);

    int per = (marks / mm) * 100;

    cout << "You scored ";
    if (per >= 90)
        cout << "A";

    else if (per >= 80 && per < 90)
        cout << "B";

    else if (per >= 70 && per < 80)
        cout << "C";

    else if (per >= 60 && per < 70)
        cout << "D";

    else
        cout << "Passing marks";

    cout<<" in your exams"<<endl;
}