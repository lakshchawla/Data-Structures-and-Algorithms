#include <bits/stdc++.h>
using namespace std;

class Node
{
public:
    int data;
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

void delete_item(int val)
{

    Node *ptr = head;

    if (head == NULL)
    {
        cout << val << " is not in the linked list" << endl;
    }

    while (ptr->next != NULL)
    {
        if (ptr->next->data == val)
        {
            Node* DelNode = ptr->next;
            ptr->next = ptr->next->next;
            delete DelNode;
            break;
        }

        ptr = ptr->next;
    }
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
    InsertAtHead(3);
    InsertAtHead(4);
    InsertAtHead(2);
    InsertAtHead(1);

    delete_item(4);

    Display();
    return 0;
}