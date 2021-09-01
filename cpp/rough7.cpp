#include <iostream>
using namespace std;

class techgig
{
    int p, q;

public:
    techgig()
    {
        cin >> p >> q;
    }

    bool isPrime(int num)
    {
        for (int i = 2; i < num; i++)
        {
            if (num % i == 0)
            {
                return false;
            }
        }
        return true;
    }

    void result()
    {
        int a, b;
        int x, y;
        if (isPrime(q) && isPrime(p))
        {
            cout << q - p << endl;
            return;
        }

        for (int i = p; i <= q; i++)
        {
            if (isPrime(p))
            {
                a = p;
                x++;
                break;

            }

            if (isPrime(i))
            {
                a = i;
                x++;
                break;
            }
        }

        for (int j = q; j >= p; j--)
        {
            if (isPrime(q))
            {
                b = q;
                y++;
                break;
            }

            if (isPrime(j))
            {
                b = j;
                y++;
                break;

            }
        }

        if (b-a < 0)
        {
            cout<<-1<<endl;
            return;
        }
        

        cout << b-a << endl;
    }
};

int main(void)
{
    int n;
    cin>>n;
    techgig obj[n];

    for (int i = 0; i < n; i++)
    {
        obj[i].result();
    }
    
}