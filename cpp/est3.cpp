#include <bits/stdc++.h>
using namespace std;

class myClass
{
private:
    int var{};

public:
    myClass(int num)
    {
        var = num;
    }

    int memFunc() const
    {
        return var;
    }
};

void print(const myClass &num)
{
    cout << "The passed value is: " << num.memFunc();
}

int main()
{
    print(myClass{10});

    return 0;
}