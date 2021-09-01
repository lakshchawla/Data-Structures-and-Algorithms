#include<stdio.h>

void array_elements(int size, int st, int arr[size])
{
    printf("Elements in the array are: \n");
    printf("%d,",arr[st]);

    array_elements(size, st++, arr[size]);
}

int main(void)
{
    int size;
    printf("Enter size of array");
    scanf("%d",&size);

    int arr[size];
    printf("Enter elements of array: \n");
    for(int i = 0; i < size; i++)
    {
        scanf("%d",&arr[i]);
    }

    array_elements(size, 0, arr[size]);

    return 0;
}