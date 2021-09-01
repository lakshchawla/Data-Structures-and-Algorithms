// #include <iostream>
// using namespace std;

// class microcontrollers
// {
// private:
//     int clockspeed;
//     int digitalpins;

// public:
//     int analogpins;

//     void setdata(int a, int b);

//     void getdata()
//     {
//         cout << "clockspeed of the board is " << clockspeed << "\n";
//         cout << "number of digital pins in the board are " << digitalpins << "\n";
//         cout << "number of analog pin in the board are " << analogpins << "\n";
//     }
// };

// // setdata is declared using resolution operator ::, 
// // which helps one declaring member functions outside 
// // the class.
// void microcontrollers::setdata(int a, int b) 
// {
//     // There was a problem in mentioning input parameters
//     // of the member function
//     // choose a unique name for input parameters
//     // then initialize their value to member variables of class
//     clockspeed = a;
//     digitalpins = b;

//     //Try not to initalize variables using member functions,
//     // else go for constructors
// }

// int main()
// {
//     microcontrollers low;
//     low.analogpins = 20; // analogpins were not defined
//     // it is inside public access specifier so can be modified under main.
//     low.setdata(16, 14);
//     low.getdata();

//     return 0;
// }



// #include<iostream>
// using namespace std;

// class ClassA {
// public:
// 	ClassA(int x) { cout << "ClassA::ClassA(int ) called" << endl; }
// };

// class ClassB : public ClassA {
// public:
// 	ClassB(int x):ClassA(x) {
// 	cout<<"ClassB::ClassB(int ) called"<< endl;
// 	}
// };

// class ClassC : public ClassA {
// public:
// 	ClassC(int x):ClassA(x) {
// 		cout<<"ClassC::ClassC(int ) called"<< endl;
// 	}
// };

// class tmp : public ClassB, public ClassC {
// public:
// 	tmp(int x):ClassC(x), ClassB(x) {
// 		cout<<"tmp::tmp(int ) called"<< endl;
// 	}
// };

// int main() {
// 	tmp ta1(30);
// }


#include <iostream>
using namespace std;

double division(int a, int b) {
   if( b == 0 ) {
      throw "Exception condition";
   }
   return (a/b);
}

int main () {
   int x = 50;
   int y = 0;
   double z = 0;
 
   try {
      z = division(x, y);
      cout << z << endl;
   } catch (const char* msg) {
     cerr << msg << endl;
   }

   return 0;
}