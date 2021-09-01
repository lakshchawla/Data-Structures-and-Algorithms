#include <iostream>
using namespace std;

class fry
{
    int ele = 1;

public:
    friend void display(fry ele1);
};

class bake
{
    int ele = 2;

public:
    friend void display(bake ele2);
};

class roast
{
    int ele = 3;

public:
    friend void display(roast ele3);
};

void display(fry ele1)
{
    cout<<ele1.ele<<endl;
}

void display(bake ele2)
{
    cout<<ele2.ele<<endl;
}

void display(roast ele3)
{
    cout<<ele3.ele<<endl;
}

int main(void)
{
    fry ele1;
    bake ele2;
    roast ele3;

    display(ele1);
    display(ele2);
    display(ele3);
}