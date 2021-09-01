/*
Imagine a publishing company that markets both book and audiocassette versions of its works. 
Create a class publication that stores the title (a string) and price (type float) of a publication. 
From this class derive two classes: book, which adds a page count (type int), and tape, which adds a 
playing time in minutes (type float). Each of these three classes should have a getdata() function to
get its data from the user at the keyboard, and a putdata() function to display its data.

Write a main() program to test the book and tape classes by creating instances of them, asking the 
user to fill in data with getdata(), and then displaying the data with putdata().
*/
#include <bits/stdc++.h>
using namespace std;

class Publication
{
    string Title;
    float Price;

public:
    void getData()
    {
        cout << "Enter the title: ";
        cin >> Title;

        cout << "Enter the price: ";
        cin >> Price;
    }

    void putData()
    {
        cout << "\nTitle: " << Title << "\nPrice: " << Price<<endl;
    }
};

class book : public Publication
{
    int pageCount;

public:
    void getData()
    {
        Publication::getData();
        cout << "Enter pages in the book: ";
        cin >> pageCount;
    }

    void putData()
    {
        Publication::putData();
        cout << "Total pages: " << pageCount << endl;
    }
};

class tape : public Publication
{
    float playTime;

public:
    void getData()
    {
        Publication::getData();
        cout << "Enter time in minutes: ";
        cin >> playTime;
    }

    void putData()
    {
        Publication::putData();
        cout << "Total time: " << playTime << " mins" << endl;
    }
};

int main(void)
{
    book TheAlchemist;
    TheAlchemist.getData();
    TheAlchemist.putData();

    tape TheVampireDiaries;
    TheVampireDiaries.getData();
    TheVampireDiaries.putData();  

    return 0;
}