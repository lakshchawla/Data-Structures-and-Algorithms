#include<bits/stdc++.h>
using namespace std;

int main(void)
{
    string str = "Lakshay Chawla";

    // transform(str.begin(), str.end(), str.begin(), ::toupper);
    // cout<<str;

    transform(str.begin(), str.end(), str.begin(), ::tolower);
    cout<<str;

}