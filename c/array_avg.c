#include<stdio.h>

int main(void)
{
    int n;
    printf("Enter number of elements: ");
    scanf("%d",&n);

    int num[n];
    printf("Enter array elements:\n");
    
    for(int i = 0; i < n; i++)
    {
        scanf("%d",&num[i]);
    }

    float sum_arr = 0;
    for(int i = 0; i < n; i++)
    {
        sum_arr += num[i];
    }

    float avg = sum_arr/n ;

    printf("The average of all the numbers is %f",avg);
    return 0;
}