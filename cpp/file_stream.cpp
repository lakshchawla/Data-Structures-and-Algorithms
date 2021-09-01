/*
Classes for file handling:
1. fstreambase
2. ifstream
3. ofstream
*/
#include<iostream>
#include<fstream>
#include<iomanip> 
using namespace std;

int main(void)
{ 
    string st;
    string st2 = "Lakshay";
    ofstream in_file("sample.txt", ios::out`);

    in_file<<st2<<endl;
    // cout<<st2;
    // ofstream out("sample2.txt");

    // fstream in_file("sample.txt",std::ios::in);

    // cout<<(in_file.is_open());
    
    return 0;
}