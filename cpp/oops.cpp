#include <bits/stdc++.h>
using namespace std;

class student
{
public:
    string name;
    int age;
    bool gender;

    void printInfo()
    {
        cout<<"Name: ";
        cout<<name<<endl;

        cout<<"Age: ";
        cout<<age<<endl;

        cout<<"Gender: ";
        cout<<gender<<endl;
    }
};

int main(void)
{
    student arr[3];
    for (int i = 0; i < 3; i++)
    {
        cout<<"Enter details for student "<< i<<": "<<endl;
        cin>>arr[i].name;
        cin>>arr[i].age;
        cin>>arr[i].gender;
    }

    for (int i = 0; i < 3; i++)
    {
        arr[i].printInfo();
    }
    
    return 0;    
}