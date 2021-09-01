#include<stdio.h>

int main(void)
{
    int size;
    printf("Enter size of array: ");    scanf("%d",&size);

    int arr[size];
    printf("Enter array elements: \n");

    for(int i = 0; i < size; i++)
    {
        scanf("%d", &arr[i]);
    }

    int ele;
    printf("Enter element to find: ");
    scanf("%d",&ele);

    for(int j = 0; j < size; j++)
    {
        if (arr[j] == ele)
        {
            printf("%d lies at %d",ele, j);
            break;
        }

        else
            continue;
    }

    return 0;
}