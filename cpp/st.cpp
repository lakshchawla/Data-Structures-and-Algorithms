// #include<bits/stdc++.h>
// using namespace std;

// void AreaRectangle()
// {
//     float len, br;
//     cout<<"Enter the sides: ";
//     cin>>len>>br;
//     cout<<"The area of Rectangle is: "<<len*br<<endl;
//     return;
// }

// void AreaCircle()
// {
//     float radius;
//     cout<<"Enter the radius: ";
//     cin>>radius;
//     cout<<"The area of Circle is: "<<3.14*radius*radius<<endl;
//     return;
// }

// int main(void)
// {
//     int ans;
//     cout<<"1. Rectangle\n2. Circle"<<endl;
//     cout<<"Enter the shape: ";
//     cin>>ans;

//     switch (ans)
//     {
//     case 1:
//         AreaRectangle();
//         break;

//     case 2:
//         AreaCircle();
//         break;

//     default:
//         break;
//     }

//     return 0;
// }

#include <iostream>

using namespace std;

#define pi 3.14

class AREA
{
    int area1, area2;

public:
    void circle(int r);
    void rectangle(int l, int b);
};

void AREA::circle(int r)
{
    area1 = pi * r * r;
    cout << "AREA OF THE CIRCLE : " << area1;
}

void AREA::rectangle(int l, int b)
{
    area2 = l * b;
    cout << "AREA OF THE RECTANGLE : " << area2;
}

int main()
{
    int r, l, b;

    AREA JJ;

    cout << "\nEnter the radius of the circle : ";

    cin >> r;

    JJ.circle(r);

    cout << "\n\nEnter the length & breadth of the rectangle : ";

    cin >> l >> b;
    JJ.rectangle(l, b);
}
