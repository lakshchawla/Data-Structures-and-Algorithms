/*Enter your code here. Read input from STDIN. Print your output to STDOUT*/
#include <iostream>
#include <string.h>
using namespace std;
int main()
{
    string virus;
    cin >> virus;

    // int n = virus.length();
    // char V_array[n+1];

    // strcpy(V_array, virus.c_str());

    // cout<<V_array[1];

    int noSample;
    cin >> noSample;
    string Samples[noSample];
    for (int i = 0; i < noSample; i++)
    {
        cin >> Samples[i];
    }

    for (int j = 0; j < noSample; j++)
    {
        string test = Samples[j];

        int k = 0;
        while (k < test.length())
        {
            for (int l = k; l < virus.length(); l++)
            {
                if (test[k] == virus[l])
                {
                    k++;
                    cout << "Matched";
                }

                else
                {
                    cout<<"Not matched";
                    break;
                }
            }
        }
    }
}