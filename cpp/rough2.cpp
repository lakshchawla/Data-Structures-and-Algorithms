// #include <bits/stdc++.h>
// using namespace std;

// class Node
// {
// public:
//     int data;
//     Node *next;
// };

// Node *head = NULL;

// void insertHead(int new_data)
// {

//     Node *new_node = new Node;
//     new_node->data = new_data;
//     new_node->next = head;
//     head = new_node;
// }

// void insertAfter(Node *pre_node, int new_data)
// {
//     Node *new_node = new Node;
//     new_node->data = new_data;
//     new_node->next = pre_node->next;
//     pre_node->next = new_node;
// }

// // void append(    )

// void display()
// {
//     Node *ptr;
//     ptr = head;
//     while (ptr != NULL)
//     {
//         // cout << ptr->data << " ";
//         cout << "This is " << ptr->data << endl;
//         ptr = ptr->next;

//     }
// }

// int main(void)
// {
//     insertHead(1);
//     insertHead(2);
//     insertHead(3);
//     insertHead(4);
//     insertHead(5);

//     // insertAfter(,10);

//     cout << "The linked list is: "<<endl;
//     display();
//     cout << endl;
//     return 0;
// }

// #include<iostream>
// using namespace std;

// namespace MyNamespace
// {
//     float num = 10.5;
// }

// int main(void)
// {
//     int num = 55;

//     cout<<"In local scope: "<<num<<endl<<"In namespcace: "<<MyNamespace::num<<endl;
//     return 0;
// }

// #include<iostream>
// using namespace std;

// int main(void)
// {
//     int num_1, num_2;
//     cout<<"Enter both num: ";
//     cin>>num_1>>num_2;

//     cout<<"You entered "<<num_1<<" and "<<num_2<<endl;
//     return 0;
// }


//WAP to add two numbers

// #include<iostream>
// using namespace std;

// int sum(int a,int b)
// {
//     return a+b;
// }

// int main(void)
// {
//     int num1, num2;

//     cout<<"Enter two nums for addition"<<endl;
//     cin>>num1>>num2;

//     cout<<"Sum of "<<num1<<" and "<<num2 <<" is "<<sum(num1, num2)<<endl;
// }

//Assuming there are 7.481 gallons ina cubic foot, write a program that asks 
//the user to enter a number of gallons, and then displays the equivalent in cubic feet.

// #include<iostream>
// using namespace std;

// int main(void)
// {
//     float gallons;
//     cout<<"Enter value in gallons: ";
//     cin>>gallons;

//     cout<<"There are "<< gallons/7.481 <<" cubic-foot in "<<gallons<<" Gallons."<<endl;
//     return 0;
// }

// #include<iostream>
// using namespace std;

// int main(void)
// {
//     int num;
//     cin>>num;

//     if (num%2 == 0)
//     {
//         cout<<num<<" is even"<<endl;
//     }

//     else
//     {
//         cout<<num<<"is odd"<<endl;
//     }
// }