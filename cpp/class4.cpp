// #include<iostream>
// using namespace std;

// int main(void)
// // {
//     int a = 0;
//     while (a <10)
//     {
//         cout<<"Hello world!"<<endl;
//         a++;
//     }

//     return 0;
// }

// {
//     int x, y;
//     cout<<"Enter the range of numbers you want to enter: ";
//     cin>>x>>y;
//     int a = x;
//     while (a <= y)
//     {
//         cout<<a<<endl;
//         a++;
//     }

//     return 0;
// }

// {
//     for (;;)
//     {
//         cout<<"Hello"<<endl;
//     }

// }

// #include <iostream>

// #include <ctime>

// #include <iomanip>

// using namespace std;

// int main(void)

// {
//     int i, j, entred_int;

//     cout << "Entera number: ";
//     cin >> entred_int;

//     for (i = 0; i < 5; i++)

//     {

//         for (j = 1; j <= 100; j++)

//         {

//             cout << setw(7) << (entred_int * (10 * i + j));
//         }

//         cout << endl;
//     }

//     return 0;
// }

#include<bits/stdc++.h>
using namespace std;

int main(void)
{
    int yrs;
    float InitialAmount, RateOfInterest;

    cout<<"Enter Initial amount: ";
    cin>>InitialAmount;

    cout<<"Enter Rate of Interest: ";
    cin>>RateOfInterest;

    cout<<"Enter number of years: ";
    cin>>yrs;

    for (int i = 0; i < yrs; i++)
    {
        InitialAmount += InitialAmount * RateOfInterest / 100;
    }

    cout<<"You have to pay "<<InitialAmount<<" after "<<yrs<<" Years."<<endl;    
    return 0;
}