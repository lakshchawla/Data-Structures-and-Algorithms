#include<stdio.h>
#include<math.h>

int sq_func(int num)
{
    return pow(num, 2);
}

int main(void)
{
    int num;
    printf("Enter number: ");
    scanf("%d",&num);
    
    printf("The square of %d is %d", num,sq_func(num));
    return 0;
}