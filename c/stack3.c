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

/*/INPUT ITEMS
int input_items(st *s)
{
    int n;
    do
    {
        printf("ENTER NUMBER OF ITEMS: ");
        scanf("%d",&n);
    } while (n > 10);

    int arr[n];

    for(int i = 1; i <= n; i++)
    {
        printf("ENTER ITEM %d FOR STACK: ",i);
        scanf("%d",&arr);
    }
    return 0;
}
//INPUT ITEMS*/

int main(void)
{
    st *s = (st *)malloc(sizeof(st));
    int new_item;
    // create empty stack
    s->top = -1;

    int n;
    do
    {
        printf("ENTER NUMBER OF ITEMS: ");
        scanf("%d",&n);
    } while (n > 10);

    int arr[n];

    for(int i = 0; i < n; i++)
    {
        printf("ENTER ITEM %d FOR STACK: ",i+1);
        scanf("%d",&arr[i]);
    }

    for (int i = 0; i < n; i++)
    {
        push(s, arr[i]);
    }


    printf("Stack: ");
    for (int i = 0; i < count; i++)
    {
        printf("%d\t", s->item[i]);
    }

    printf("\nREVERSED STACK: ");
    for(int i = count-1; i >= 0 ; i--)
    {
        printf("%d\t", s-> item[i]);
    }
    return 0;
}