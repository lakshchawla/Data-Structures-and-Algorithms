#include <cstring>
#include <iostream>
using namespace std;
 

bool checkReport(string str1, string str2, int m, int n)
{
    int j = 0;
 
    for (int i = 0; i < n && j < m; i++)
        if (str1[j] == str2[i])
            j++;
 
    return (j == m);
}
 
int main()
{
    string MainString;
    cin>>MainString;

    int n;
    cin>>n;
    string Sample[n];

    for (int i = 0; i < n; i++)
    {
        cin>>Sample[i];
    }

    for (int i = 0; i < n; i++)
    {
        checkReport(Sample[i], MainString, Sample[i].length(), MainString.length()) ? cout << "POSITIVE"<<endl: cout << "NEGATIVE"<<endl;
    }

    return 0;
}