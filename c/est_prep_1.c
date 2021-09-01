#include <stdio.h>
void main()
{
    int *a, i, j, tmp, n;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    printf("Enter elements in the array:\n");
    for (i = 0; i < n; i++)
    {
        printf("element - %d : ", i + 1);
        scanf("%d", a + i);
    }
    for (i = 0; i < n; i++)
    {
        for (j = i + 1; j < n; j++)
        {
            if (*(a + i) > *(a + j))
            {
                tmp = *(a + i);
                *(a + i) = *(a + j);
                *(a + j) = tmp;
            }
        }
    }
    printf("\nAfter sorting: \n");
    for (i = 0; i < n; i++)
    {
        printf("element - %d : %d \n", i + 1, *(a + i));
    }
    printf("\n");
}
