// #include <iostream>

// class Test

// {

// public:
//     int i;

//     void get();
// };

// void Test::get()

// {

//     std::cout << "Enter the value of i: ";

//     std::cin >> i;
// }

// Test t; // Global object

// int main()

// {

//     Test t; // local object

//     t.get();

//     std::cout << "value of i in local t: " << t.i << 'n';

//     ::t.get();

//     std::cout << "value of i in global t: " << ::t.i << 'n';

//     return 0;
// }

#include <iostream>
using namespace std;

class demo
{
    int a;

public:
    friend  void fun();
};

void demo::fun()
{
    cout<<"Hello World";
}

int main(void)
{
    demo d1;
    d1.fun();
}