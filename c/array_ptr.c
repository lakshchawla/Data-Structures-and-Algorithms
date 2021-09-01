// Write array of an element and print in the reverse order along with their
// address using pointers

#include <stdio.h>  
void main()
{
    int n;
    
    printf("Enter number of elements: ");
    scanf("%d", &n);

    int arr[n];
    int *loc;
    loc = &arr[0]; 

    printf("Enter elements in the array : \n", n);
    for (int i = 0; i < n; i++)
    {
        scanf("%d", loc); 
        loc++;
    }
    
    loc = &arr[n - 1];

    printf("\nArray in reverse order :");
    for (int i = n; i > 0; i--)
    {
        printf("\nLocation of element %d : %d  ", *loc, loc);
        loc--;
    }
}