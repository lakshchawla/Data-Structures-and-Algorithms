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

        cout << "The time entered is " << Hours << " : " << Mins << " : " << Sec << endl;
    }

    void Display()
    {
        cout << endl
             << endl
             << "The added time is " << Hours << " : " << Mins << " : " << Sec;
    }

    void add(Time Time1, Time Time2)
    {
        // int tmp;
        // tmp = ((Time1.Hours * 3600) + (Time1.Mins * 60) + Time1.Sec) +
        //  ((Time2.Hours * 3600) + (Time2.Mins * 60) + Time2.Sec);

        // Sec = tmp % 60;
        // Mins = ((tmp - Sec) % 3600) / 60;
        // Hours = tmp / 3600;

        // if (Sec >= 60)
        // {
        //     Sec -= 60;
        //     Mins++;
        // }

        // if (Mins >= 60)
        // {
        //     Mins -= 60;
        //     Hours++;
        // }

        Time tmp;
        tmp.Hours = Time1.Hours + Time2.Hours;
        tmp.Mins = Time1.Mins + Time2.Mins;
        tmp.Sec = Time1.Sec + Time2.Sec;

        if (tmp.Sec >= 60)
        {
            tmp.Sec -= 60;
            tmp.Mins++;
        }

        if (tmp.Mins >= 60)
        {
            tmp.Mins -= 60;
            tmp.Hours++;
        }

        Hours = tmp.Hours;
        Mins = tmp.Mins;
        Sec = tmp.Sec;
    }
};

int main(void)
{

    Time Time1(15, 54, 54), Time2(19, 8, 6);
    Time Time3;

    Time3.add(Time1, Time2);
    Time3.Display();

    return 0;
}

/*
#include <iostream>

using namespace std;

class time1

{

  int h,m,s;

  public: 

  time1(){ h=0;m=0;s=0;}

  time1(int a,int b, int c) { h=a; m=b; s=c;}

  void display() { cout<<h<<":"<<m<<":"<<s;}

  void add(time1 o1, time1 o2)

  {

   this->s=o1.s+o2.s; 

   this->m=o1.m+o2.m+this->s/60;;

   this->h=o1.h+o2.h+this->m/60;;

   this->s%=60;

   this->m%=60; // 1 to 59 

  }

};

int main()

{

  time1 o1(12,60,60), o2(5,40,10);

  time1 o3;

  o3.add(o1,o2);

  o3.display();

}
*/