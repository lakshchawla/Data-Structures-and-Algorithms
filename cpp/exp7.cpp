/*
Create a class that imitates part of the functionality 
of the basic data type int.Call the class Int(note 
different spelling). The only data in this class is 
an int variable. Include member functions to initialize
an Int to 0, to initialize it to an int value, to 
display it (it looks just like an int), and use 
operator overloading to Int two Int values.

Write a program that exercises this class by creating
two initialized and one uninitialized Int values, 
adding these two initialized values and placing the 
response in the uninitialized value, and then displaying 
this result.
*/

// #include<bits/stdc++.h>
// using namespace std;

// class Int
// {
//     int classVar;

// public:
//     Int()
//     {
//         classVar = 0;
//     }

// };

// int main(void)
// {

// }

#include <iostream>
using namespace std;

class Int
{
private:
    int a, b;

public:
    Int(int x = 0)
    {
        a = x;
    }
    
    Int operator+(Int const &obj) 
    {                           
        Int sum;                
        sum.a = a + obj.a;        
        return sum;             
    }       
                        
    void print()
    {
        cout << "sum: " << a;
    }
};

int main()
{
    Int a1(5), a2(2); 
    Int a3 = a1 + a2;  
    a3.print();        
    return 0;
}