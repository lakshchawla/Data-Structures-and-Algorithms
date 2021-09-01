#include <stdio.h>
int main(void)
{
    int nums[3];
    int i,largest_num = 0;

    for (i = 0; i <= 3; i++)
    {
        printf("Enter number %d: ",i);
        scanf("%d", &nums[i]);
    }

    for (i = 0; i <= 3; i++)
    {
        if (largest_num < nums[i])
            largest_num = nums[i];
        else
            continue;
    }

    printf("Largest number among the 3 numbers is %d",largest_num);

    return 0;
}