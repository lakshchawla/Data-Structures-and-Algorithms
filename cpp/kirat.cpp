// Create a program that calculates the cost of construction for building a house for this. Derive a class publicly
// from three base classes cement, steel and wood. The requirements for building a house will be 500 bags of cement where
// each bags costs rs150, three tons of steel costing rs 28000 per ton and so on cubic feet of wood costing rs 1500 per cubic foot.

// #include<bits/stdc++.h>
// using namespace std;

// class Building
// {
//     int cementBags;
//     float steel;
//     float wood;

// public:
//     Building()
//     {
//         cementBags = 500;
//         steel = 3;
//         wood = 1;
//     }

//     float CalculateCost()
//     {
//         float cost = (cementBags*150)+(steel*28000)+(wood*1500);
//         return cost;
//     }
// };

// int main(void)
// {
//     Building b1;
//     cout<<"The cost of building will be: Rs. "<<b1.CalculateCost();
//     return 0;
// }

#include <bits/stdc++.h>
using namespace std;

class parentClass
{
protected:
    int property;

public:
    parentClass()
    {
        property = 5;
    }
};

class ChildClass : parentClass
{
public:
    void propertyAdd()
    {
        property++;
    }

    void propertyLess()
    {
        property--;
    }

    int propertyDisplay()
    {
        return property;
    }
};

int
main(void)
{
    ChildClass rishu;

    rishu.propertyLess();
    cout<<rishu.propertyDisplay();

}