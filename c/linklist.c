#include<stdio.h>
#include<stdlib.h>

typedef struct node
{
    int data;
    node* next;
}node;

void insertElement(node data, int val)
{
    node* A;
    A = NULL;

    node* temp = (node*)malloc(sizeof(node));

    (*temp).data = 2;
    (*temp).next = NULL;

    A = temp;

}

int main(void)
{

}