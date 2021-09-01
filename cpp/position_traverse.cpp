#include <bits/stdc++.h>
using namespace std;

class Node
{
public:
    int data;
    Node* next;
};

Node* head = NULL;

void InsertAtHead(int new_data)
{
    Node *new_node = new Node;
    new_node->data = new_data;
    new_node->next = head;
    head = new_node;
}

Node* positionRef(int index)
{
    int i = 0;
    Node* ptr;

    while (ptr != NULL)
    {
        if (i == index-1)
        {
            break;
        }       

        ptr = ptr->next;
        i++;
    }
    return ptr->next;
}

void DeleteItem(int val)
{
    Node* ptr = head;
    int i = 0;
    while (ptr != NULL)
    {
        if (i == val -1)
        {
            ptr->next = ptr->next->next;
        }

        i++;
        ptr = ptr->next;
    }    
}

void Display()
{
    Node *ptr;
    ptr = head;
    while (ptr != NULL)
    {
        cout<<ptr->data<<endl;
        ptr = ptr->next;
    }
}

int main(void)
{
    InsertAtHead(8);
    InsertAtHead(7);
    InsertAtHead(6);
    InsertAtHead(5);

    DeleteItem(2);

    Display();
    return 0;
}