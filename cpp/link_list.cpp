#include <bits/stdc++.h>
using namespace std;

class Node
{
public: int data;
Node *next;
};

Node *head = NULL;

void InsertAtHead(int new_data)
{
    Node *new_node = new Node;
    new_node->data = new_data;
    new_node->next = head;
    head = new_node;
}

void InsertAtTail(int new_data)
{
    Node *new_node = new Node;
    Node *pre = head;

    new_node->data = new_data;
    new_node->next = NULL;

    if (head == NULL)
    {
        head = new_node;
        return;
    }

    while (pre->next != NULL)
        pre = pre->next;

    pre->next = new_node;
    return;
}

void DeleteElement(int element)
{
    Node *ptr = head;
    Node *tmp;

    while (ptr->next->data != element)
    {
        tmp = ptr->next;

        ptr->next = ptr->next->next;
        ptr = ptr->next;
    }

    delete tmp;
}

void Display()
{
    Node *ptr;
    ptr = head;
    while (ptr != NULL)
    {
        cout << ptr->data << endl;
        ptr = ptr->next;
    }
}

int main(void)
{
    InsertAtHead(8);
    InsertAtHead(7);
    InsertAtHead(6);
    InsertAtHead(5);

    InsertAtTail(9);
    InsertAtTail(10);
    InsertAtTail(11);

    DeleteElement();
    Display();
    return 0;
}