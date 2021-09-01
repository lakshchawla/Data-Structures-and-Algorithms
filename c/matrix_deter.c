#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int r, c;
    printf("INPUT SIZE OF MATRIX A : \n1. ROWS: ");
    scanf("%d", &r);
    printf("2. COLUMNS: ");
    scanf("%d", &c);

    //MATRIX INPUT
    int matrix_a[r][c];
    int i, j;
    printf("Enter matrix A:\n");
    for (i = 1; i <= r; i++)
    {
        for (j = 1; j <= c; j++)
        {
            scanf("%d", &matrix_a[i][j]);
        }
    }

    // CODE STARTS

    for (i = 1; i <= r - 2; i++)
    {
        for (j = 1; j <= c - 2; j++)
        {
            matrix_a[i][j];
        }
    }

    printf("%d", matrix_a[i][j]);
    return 0;
}