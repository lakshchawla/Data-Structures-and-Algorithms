/*
Create a program that calculates the cost of construction 
for building a house for this. Derive a class publicly 
from three base classes cement, steel and wood. The 
requirements for building a house will be 500 bags of 
cement where each bags costs rs150, three tons of steel 
costing rs 28000 per ton and so on cubic feet of wood 
costing rs 1500 per cubic foot.
*/

#include<bits/stdc++.h>
using namespace std;

class Building
{
    int cementBags;
    float steel;
    float wood;

public:
    Building()
    {
        cout<<"Enter cement bags required: ";
        cin>>cementBags;
        cout<<"Enter steel required: ";
        cin>>steel;
        cout<<"Enter wood required: ";
        cin>>wood;
    }

    float CalculateCost()
    {
        float cost = (cementBags*150)+(steel*28000)+(wood*1500); 
        return cost;
    }
};

int main(void)
{
    Building b1;
    cout<<"The cost of building will be: Rs. "<<b1.CalculateCost();
    return 0;
}