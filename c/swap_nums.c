#include<stdio.h>

void swap_nums(int *n1,int *n2)
{
    int temp;
    temp = *n1;
    *n1 = *n2;
    *n2 = temp;
}

int main(void)
{
    int n1, n2;
    
    printf("Enter number 1: ");
    scanf("%d",&n1);
    printf("Enter number 2: ");
    scanf("%d",&n2);

    printf("Numbers before swapping: \nNumber 1: %d \nNumber 2: %d\n", n1, n2);

    swap_nums(&n1, &n2);

    printf("Numbers after swapping : \nNumber 1: %d \nNumber 2: %d\n", n1, n2);

    return 0;
}