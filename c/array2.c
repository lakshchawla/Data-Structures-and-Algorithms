#include<stdio.h>

int main(void)
{
    int size, arr[size];

    printf("Enter size of array: ");    scanf("%d",&size);
    printf("Enter array:\n");
    
    for (int i = 0; i < size; i++)
    {
        scanf("%d",&arr[i]);
    }

    int num = arr[0];

    for (int i = 0; i < size; i++)
    {
        if(num <= arr[i])
            num = arr[i];
        
        else 
            continue;
    }

    printf("The largest number in the array is %d",num);
    return 0;
}