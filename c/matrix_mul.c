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
    int matrix_b[r][c];
    printf("Enter matrix B:\n");
    for (i = 1; i <= r; i++)
    {
        for (j = 1; j <= c; j++)
        {
            scanf("%d", &matrix_b[i][j]);
        }
    }
//CODE STARTS
    int result[r][c];
    printf("RESULT: \n");

    for (int i = 1; i <= r; i++)
    {
        for (int j = 1; j <= c; j++)
        {
            result[i][j] = 0;
        }
    }

    for (int i = 1; i <= r; i++)
    {
        for (int j = 1; j <= c; j++)
        {
            for (int k = 1; k <= c; k++)
            {
                result[i][j] += matrix_a[i][k] * matrix_b[k][j];
            }
        }
    }
    printf("\nOutput Matrix:\n");
    for (int i = 1; i <= r; i++)
    {
        for (int j = 1; j <= c; j++)
        {
            printf("%d  ", result[i][j]);
        }

        printf("\n");
    }
    return 0;
}