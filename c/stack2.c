#include<stdio.h>
#include<stdlib.h>
#define MAX 10
int count = 0;

typedef struct stack    
{
    int item[MAX];
    int top;
}st;

//PUSH ITEM
int push(st *s, int new_item)
{
    if (s->top == MAX-1)
    {
        printf("STACK FULL!");
    }
    else
    {
        s->top++;
        s->item[s->top] = new_item;
        count++;
    }
}

//POP ITEM
int pop(st *s)
{
    if (s->top == -1)
    {
        printf("STACK EMPTY!");
    }
    else
    {
        s->top--;
        count--;
    }
}

//PRINT STACK
int print_stack(st *s)
{
    printf("STACK:");
    for(int i = 0; i <count ; i++)
    {
        printf("%d \n", s-> item[i]);
    } 
}

int main(void)
{
    st *s = (st *)malloc(sizeof(st));
    int new_item;
    // create empty stack
    s->top = -1;

    push(s, 6);
    push(s, 10);

    print_stack(s);

}