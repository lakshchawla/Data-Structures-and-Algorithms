/*
#include <bits/stdc++.h>
using namespace std;

struct candyMachine
{
    int sr;
    string name;
    float price;
};

int main(void)
{
    struct candyMachine p[8];
    p[0] = {1, "Kitkat", 0.8};
    p[1] = {2, "Milky bar", 0.7};
    p[2] = {3, "Ferrero Rocher", 2};
    p[3] = {4, "Dairy Milk", 1.8};
    p[4] = {5, "Mars", 2};
    p[5] = {6, "Toblerone", 5};
    p[6] = {7, "Lindt", 6};
    p[7] = {8, "Raffelo", 4};

    cout << "\t\tProducts" << endl;
    cout << "1.Kitkat: 0.8$ \n2.Milky bar: 0.7$\n3.Ferrero Rocher: 2$\n4.Dairy Milk: 1.8$" << endl;
    cout << "5.Mars: 2$ \n6.Toblerone: 5$ \n7.Lindt: 6$ \n8.Raffaelo: 4$" << endl;

    char ans;
        int item;
    do
    {
        do
        {
            cout << "Enter the candy number: " << endl;
            cin >> item;
        } while (item > 8 || item < 0);

        item--;
        cout << "You selected \n"<< p[item].sr << "." << p[item].name << ".......  $" << p[item].price << endl;

        cout << "Do you want to go ahead (y/n): ";
        cin >> ans;
    } while (ans == 'n');

    cout<<"Please Pay $"<<p[item].price<<endl<<endl<<endl<<endl<<endl<<endl;

    cout<<"Payment Completed\nThank you for shopping"<<endl;
    cout<<"Please collect your "<< p[item].sr << "." << p[item].name << ".......  $" << p[item].price << endl;
}
*/

/*
class bank

{

    string name;

    int accNum;

    string accTyp;

    int totalAmt;

 

public:

    bank()

    {

        name = "Lakshay";

        accNum = 523598549457;

        accTyp = "Savings";

        totalAmt = 556213;

    }

 

    void cashDeposit()

    {

        cout << "Enter the amount you want to deposit: ";

        cin >> amt;

 

        totalAmt += amt;

 

        cout << "TRANSICTION SUCCESSFUL" << endl << amt << " were creditted into your account." << endl;

    }

 

    void cashWithdraw()

    {

        cout << "Enter the amount you want to withdraw: ";

        cin >> amt;

 

        if (totalAmt - amt >= 0)

        {

            totalAmt -= amt;

            cout << "TRANSICTION SUCCESSFUL" << endl << amt << " were debitted into your account." << endl;

        }

 

        else

            cout << "Sorry not enough money into your account" << endl;

    }

 

    void getDetails()

    {

        cout<<"Account Holder's Name: "<<name<<endl;

        cout<<"Account Holder's Account type: "<<accTyp<<endl;

        cout<<"Account Holder's Account Number: "<<accNum<<endl;

        cout<<"Total amount presently: "<<totalAmt<<endl;

    }

};
*/

/*
#include <bits/stdc++.h>

using namespace std;



class ElectricityBoard

{

    string name;

    int units;



public:

    void getData()

    {

        cout << "Enter name: ";

        cin >> name;

        cout << "Units consumed: ";

        cin >> units;

    }



    void Amount()

    {

        int amt;

        for (int i = 0; i < units; i++)

        {

            if (units <= 100)

            {

                amt = units * 0.40;

                amt = amt + 150;

            }

            else if (units <= 200 || units > 100)

            {

                amt = units * 0.50;

                amt = amt + 150;

            }

            else if (units <= 300 || units > 200)

            {

                amt = units * 0.60;

                amt = amt + 150;

            }

        }



        if (amt > 250)

            amt += amt * (15 / 100);



        cout << "**********ELECTRICITY BILL**********\nMr/Mrs. " << name << "\nAmount: " << amt << " INR " << endl;

    }

};



int main(void)

{

    int users;

    cout << "Enter number of users: ";

    cin >> users;



    ElectricityBoard u[users];

    for (int i = 0; i < users; i++)

    {

        u[i].getData();

    }



    for (int i = 0; i < users; i++)

    {

        u[i].Amount();

    }



    return 0;

}
*/

/*
#include <bits/stdc++.h>

using namespace std;

 

class BOX

{

    float length;

    float breadth;

    float height;

 

public:

    void Input()

    {

        cout<<"Enter the length of box: "<<endl;

        cin>>length;

        cout<<"Enter the breadth of box: "<<endl;

        cin>>breadth;

        cout<<"Enter the height of box: "<<endl;

        cin>>height;

        return;

    }

 

    float calcVol()

    {

        float vol = length*breadth*height;

        return vol;

    }

};

 

int main(void)

{

    BOX objB;

 

    objB.Input();

    cout<<"The volume of the box is "<<objB.calcVol()<<endl;

 

    return 0;

}
*/

// #include<bits/stdc++.h>
// using namespace std;

// class swapNums
// {
//     int objA;
//     int objB;

// public:
//     void setValueForA(int val)
//     {
//         objA = val;
//         return;
//     }

//     void setValueForB(int val)
//     {
//         objB = val;
//         return;
//     }

//     void SwapValues()
//     {
//         int tmp;
//         tmp = objA;
//         objA = objB;
//         objB = tmp;

//         cout<<"Swapped values: \na = "<<objA<<"\nb = "<<objB<<endl;
//         return;
//     }
// };

// int main(void)
// {
//     swapNums num;
//     num.setValueForA(5);
//     num.setValueForB(6);

//     num.SwapValues();
//     return 0;
// }

// #include<bits/stdc++.h>
// using namespace std;

// int main(void)
// {
//     int i;
//     for (i = 0; i < 10; i++)
//     {
//         cout<<i<<endl;
//         if(i == 6)
//             break;
//     }
//     cout<<"The loop broke at "<<i<<endl;

// }

#include <bits/stdc++.h>
using namespace std;

class Class
{
public:
    static int staticVar;

    Class()
    {
        cout << "Enter the value which you want to store in static variable";
        cin >> staticVar;
    }
};



int main(void)
{
    Class obj;

    cout<<Class::staticVar;

    return 0;
}