// #include<iostream>
// using namespace std;

// class Assignment
// {
//     int A;
//     int B;

// public:
//     Assignment(int B)
//     {
//         B = B;
//     }

//     friend int friendFunc(Assignment obj);
// };

// int friendFunc(Assignment obj)
// {
//     obj.A = (obj.B * 3);
//     return obj.A;
// }

// int main(void)
// {
//     Assignment mainObj(3);

//     cout<<friendFunc(mainObj);
// }

/*
Write A program to define three classes A, B, and C. 
Each class contains private data members. Derive 
class C from A and B by applying multiple inheritances.
Read and display the data using constructors and 
destructors.
*/

// #include <bits/stdc++.h>
// using namespace std;

// class Country
// {
//     string countryVar = "India";
// public:
//     Country()
//     {
//         cout<<countryVar<<endl;
//     }
// };

// class State : public Country
// {
//     string stateVar = "Punjab";
// public:
//     State()
//     {
//         cout<<stateVar<<endl;
//     }
// };

// class City : public State
// {
//     string cityVar = "Kharar";
// public:
//     City()
//     {
//         cout<<cityVar<<endl;
//     }
// };

// class Village : public City
// {
//     string villageVar = "Gharuan";
// public:
//     Village()
//     {
//         cout<<villageVar<<endl;
//     }
// };

// int main()
// {
//     Village obj;
//     return 0;
// }

// #include <bits/stdc++.h>
// using namespace std;

// class Distance
// {
//     int A;
//     int B;

// public:
//     Distance()
//     {
//         A = 0;
//     }

//     Distance(int a)
//     {
//         A = a;
//     }

//     void displayDistance()
//     {
//         cout << "M: " << A << "CM: " << B << endl;
//     }

//     int operator<(const Distance &d)
//     {
//         if (A < d.A)
//         {
//             cout << A << endl;
//             return true;
//         }

//         cout<<d.A<<endl;
//         return false;
//     }
// };

// int main(void)
// {
//     Distance D1(14), D2(12);

//     D1 < D2;
// }

// #include <bits/stdc++.h>
// using namespace std;

// void swap(int *x, int *y)
// {
//     int swap;
//     swap = *x;
//     *x = *y;
//     *y = swap;
// }

// int main()
// {
//     int x = 500, y = 100;
//     swap(&x, &y);
//     cout << "Value of x is: " << x << endl;
//     cout << "Value of y is: " << y << endl;
//     return 0;
// }

#include<bits/stdc++.h>
using namespace std;

class myClass
{
    const int a = 10;
    int b = 5;

public:
    int myFunc(myClass obj)
    {
        return (obj.a - obj.b);
    }
};

int main(void)
{
    myClass myObj;

    cout<<myObj.myFunc(myObj);
}