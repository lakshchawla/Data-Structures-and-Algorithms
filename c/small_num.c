#include <stdio.h>

int small_num(int arr[], int size_of_array, int min)
{
    if (size_of_array >= 0)
    {
        if(arr[size_of_array] < min)
            min = arr[size_of_array];
        
        size_of_array--;
        small_num(arr,size_of_array, min);
    }

    else
        return min;
        
}

int main(void)
{
    int size;

    printf("Enter size of array: ");
    scanf("%d", &size);

    int nums[size];
    printf("Enter array elements: \n");
    for (int i = 0; i < size; i++)
    {
        scanf("%d", &nums[i]);
    }
    int min = small_num(nums, size - 1, nums[0]);
    printf("The smallest number is %d\n", min);
}