// #include <bits/stdc++.h>
// using namespace std;
// // class B; // declare

// // class A
// // {
// //     int a; // variable a
// //     friend void sum(A, B);

// // public:
// //     void get() { a = 10; }
// // };

// // class B
// // {
// //     int b; // variable b
// //     friend void sum(A, B);

// // public:
// //     void get() { b = 10; }
// // };

// // void sum(A oba, B obb) // formal paramger
// // {
// //     cout << oba.a + obb.b;
// // }

// // int main()
// // {
// //     A ff;
// //     ff.get();
// //     B ss;
// //     ss.get();

// //     sum(ff, ss); // function call
// //     return 0;
// // }

// // #include <bits/stdc++.h>

// // using namespace std;

// struct candyMachine

// {

//     int sr;

//     string name;

//     float price;
// };

// int main(void)

// {

//     struct candyMachine p[8];

//     p[0] = {1, "Kitkat", 0.8};

//     p[1] = {2, "Milky bar", 0.7};

//     p[2] = {3, "Ferrero Rocher", 2};

//     p[3] = {4, "Dairy Milk", 1.8};

//     p[4] = {5, "Mars", 2};

//     p[5] = {6, "Toblerone", 5};

//     p[6] = {7, "Lindt", 6};

//     p[7] = {8, "Raffelo", 4};

//     cout << "\t\tProducts" << endl;

//     cout << "1.Kitkat: 0.8$ \n2.Milky bar: 0.7$\n3.Ferrero Rocher: 2$\n4.Dairy Milk: 1.8$" << endl;

//     cout << "5.Mars: 2$ \n6.Toblerone: 5$ \n7.Lindt: 6$ \n8.Raffaelo: 4$" << endl;

//     char ans;

//     int item;

//     do

//     {

//         do

//         {

//             cout << "Enter the candy number: " << endl;

//             cin >> item;

//         } while (item > 8 || item < 0);

//         item--;

//         cout << "You selected \n"
//              << p[item].sr << "." << p[item].name << ".......  $" << p[item].price << endl;

//         cout << "Do you want to go ahead (y/n): ";

//         cin >> ans;

//     } while (ans == 'n');

//     cout << "Please Pay $" << p[item].price << endl
//          << endl
//          << endl
//          << endl
//          << endl
//          << endl;

//     cout << "Payment Completed\nThank you for shopping" << endl;

//     cout << "Please collect your " << p[item].sr << "." << p[item].name << ".......  $" << p[item].price << endl;
// }

#include <iostream>
using namespace std;

class myClass
{
public:
    char ch;
    int a,b;

    myClass()
    {
        a = 0;
        b = 0;
        ch = 'a';
    }

    myClass(char c)
    {
        ch = c;
    }

    myClass(int x, int y)
    {
        a = x;
        b = y;
    }

    void getValue()
    {
        cout<<a<<" "<<b<<" "<<ch<<endl;
        return;
    }
};
