#include <bits/stdc++.h>
using namespace std;

class Time
{
    int Hours, Mins, Sec;

public:
    Time()
    {
        Hours = 0;
        Mins = 0;
        Sec = 0;
    }

    Time(int h, int m, int s)
    {
        Hours = h;
        Mins = m;
        Sec = s;

        cout << "The time entered is " << Hours << " : " << Mins << " : " << Sec <<endl;
    }

    void add(Time Time1, Time Time2)
    {
        int tmp;
        tmp = ((Time1.Hours * 3600) + (Time1.Mins * 60) + Time1.Sec) + ((Time2.Hours * 3600) + (Time2.Mins * 60) + Time2.Sec);

        Sec = tmp % 60;
        Mins = ((tmp - Sec) % 3600) / 60;
        Hours = tmp / 3600;

        if (Sec > 59)
        {
            Sec -= 59;
            Mins++;
        }

        if (Mins > 59)
        {
            Mins -= 59;
            Hours++;
        }
    }

    void Display()
    {
        cout << "The added time is " << Hours << " : " << Mins << " : " << Sec<<endl;
    }
};

int main(void)
{

    Time t1(5, 35, 21), t2(8, 54, 45);
    Time t3;

    t3.add(t1, t2);
    t3.Display();

    return 0;
}