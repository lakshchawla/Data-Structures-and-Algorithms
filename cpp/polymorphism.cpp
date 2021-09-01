#include<bits/stdc++.h>
using namespace std;

class shape
{
protected:
    int width;
    int height;

public:
    shape(int l = 0, int b = 0)
    {
        height = l;
        width = b;
    }

    int getArea()
    {
        return 0;
    }
};

class Rectange: public shape
{
public:
    Rectangle(int l = 0, int b = 0):shape(l,b){ }

    int getArea()
    {
        return (width * height);
    }
};

