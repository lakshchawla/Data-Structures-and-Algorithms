#include <bits/stdc++.h>
using namespace std;

class Distance
{
  int meter;
  int centimeter;

public:
  Distance()
  {
    meter = 0;
    centimeter = 0;
  }

  Distance(int m, int cm)
  {
    meter = m;
    centimeter = cm;
  }

  void displayDistance()
  {
    cout << "M: " << meter << "CM: " << centimeter << endl;
  }

  bool operator<(const Distance &d)
  {
    if (meter < d.meter)
      return true;

    if (meter == d.meter && centimeter < d.centimeter)
      return true;

    return false;
  }
};

int main(void)
{
  Distance D1(11, 10);
}