// #include <bits/stdc++.h>
// using namespace std;

// class Node
// {
// public:
//     int data;
//     Node *next;
// };

// Node *head = NULL;

// void push(int new_data)
// {
//     Node *new_node = new Node;
//     new_node->data = new_data;
//     new_node->next = head;
//     head = new_node;
// }

// void Display(Node* &nhead)
// {
//     Node *ptr = nhead;
//     while (ptr != NULL)
//     {
//         cout << ptr->data << " -> ";
//         ptr = ptr->next;
//     }
//     cout << endl;
// }

// void reverse()
// {
//     Node *PrevPtr = NULL;
//     Node *CurrPtr = head;
//     Node *NextPtr;

//     while (CurrPtr != NULL)
//     {
//         NextPtr = CurrPtr->next;
//         CurrPtr->next = PrevPtr;

//         PrevPtr = CurrPtr;
//         CurrPtr = NextPtr;
//     }
//     head = PrevPtr;
// }

// int main(void)
// {
//     push(4);
//     push(3);
//     push(2);
//     push(1);

//     Display(head);
//     reverse();
//     Display(head);
//     return 0;
// }

#include <bits/stdc++.h>
using namespace std;

class Node
{
public:
    int data;
    Node *next;
};

Node *head = NULL;

void push(int val)
{
    Node *new_node = new Node;
    new_node->data = val;
    new_node->next = head;
    head = new_node;
}

void reverse()
{
    Node* prev_node = NULL;
    Node* curr_node = head;
    Node* next_node;

    while(curr_node != NULL)
    {
        next_node = curr_node->next;

        
    }
}

void display()
{
    Node* ptr = head;
    
    while(head!=NULL)
    {
        cout<<ptr->data<<endl;
        ptr = ptr->next;
    }
}

int main(void)
{
    push(4);
    push(3);
    push(2);

    display();
}