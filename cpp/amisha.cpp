#include<bits/stdc++.h>
using namespace std;

class Number
{
protected:
    int num;
public:
    
    void readVal()
    {
        cout<<"Enter num: ";
        cin>>num;
    }
};

class Square : public Number
{
public:
    void getSquare()
    {
        cout<<"The square of "<<num<<" is "<< (num * num)<<endl;
    }
};

class Cube : public Number
{
public:
    void getCube()
    {
        cout<<"The cube of "<<num<<" is "<< (num * num * num)<<endl;
    }
};

int main(void)
{
    Square sqObj;
    sqObj.readVal();
    sqObj.getSquare();

    Cube cuObj;
    cuObj.readVal();
    cuObj.getCube();
}