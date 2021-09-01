//Assuming there are 7.481 gallons ina cubic foot, write a program that asks 
//the user to enter a number of gallons, and then displays the equivalent in cubic feet.

#include<iostream>
using namespace std;

int main(void)
{
    float gallons;
    cout<<"Enter value in gallons: ";
    cin>>gallons;

    cout<<"There are "<< gallons/7.481 <<" cubic-foot in "<<gallons<<" Gallons."<<endl;
    return 0;
}   