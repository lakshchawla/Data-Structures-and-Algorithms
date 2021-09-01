#include <stdio.h>
 
int min_num(int num[], int size)
{
    int min;

    if (size == 1)
    {
        return num[0];
    }

    else
    {
        min = min_num(num, size-1);

        if (min > num[size - 1])
        {
            return num[size - 1];
            
        }

        else
        {
            return min;
        }
    }
}

int main(void)
{
    int size, num[size];
    
    printf("Size?? ");
    scanf("%d",&size);

    printf("Enter array elements: ");
    for (int i = 0; i < size; i++)
    {
        scanf("%d",&num[i]);
    }

    printf("The smallest number is %d", min_num(num, size));

    return 0;
}