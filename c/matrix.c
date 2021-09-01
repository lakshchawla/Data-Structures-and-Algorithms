#include <stdio.h>

int main(void)
{
    int r, c;
    printf("INPUT SIZE OF MATRIX A : \n1. ROWS: ");
    scanf("%d", &r);
    printf("2. COLUMNS: ");
    scanf("%d", &c);

    int matrix_a[r][c];
    int i, j;
    printf("Enter matrix A (enter in matrix form only followed with a space):\n");
    for (i = 1; i <= r; i++)
    {
        for (j = 1; j <= c; j++)
        {
            scanf("%d", &matrix_a[i][j]);
        }
    }

    printf("OPERATIONS:\n");
    printf("1.ADDITION \n");
    printf("2.SUBSTRACTION\n");
    printf("3.MULTIPLICATION\n");
    printf("4.DETERMINANT \n");
    printf("5.TRANSPOSE \n");

    int oper;
    printf("ENTER OPERATION: ");
    scanf("%d", &oper);

    if (oper <= 3)
    {
        //INPUT ANOTHER MATRIX
        int matrix_b[r][c];
        printf("Enter matrix B (enter in matrix form only followed with a space):\n");
        for (i = 1; i <= r; i++)
        {
            for (j = 1; j <= c; j++)
            {
                scanf("%d", &matrix_b[i][j]);
            }
        }

        if (oper == 1)
        {
            //ADDITION ON MATRIX
            printf("RESULT:\n");
            for (i = 1; i <= r; i++)
            {
                for (j = 1; j <= c; j++)
                {
                    printf("%d ", matrix_a[i][j] + matrix_b[i][j]);
                }
                printf("\n");
            }
        }
        else if (oper == 2)
        {
            //SUBTRACTION ON MATRIX
            for (i = 1; i <= r; i++)
            {
                for (j = 1; j <= c; j++)
                {
                    printf("%d ", matrix_a[i][j] - matrix_b[i][j]);
                }
                printf("\n");
            }
        }
        else if (oper == 3)
        {
            //MULTIPLICATION ON MATRIX
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

            for (int i = 1; i <= r; i++)
            {
                for (int j = 1; j <= c; j++)
                {
                    printf("%d  ", result[i][j]);
                }

                printf("\n");
            }
        }
        else
        {
            printf("WRONG INPUT!");
        }
    }

    else if (oper == 4)
    {
        // printf("Determinant not avilable. Sorry for the inconvenience.");

        if (r == c)
        {
        }
        else
            printf("DETERMINANT NOT POSSIBLE");
    }

    else if (oper == 5)
        {
            for (int i = 1; i <= r; i++)
            {
                for (int j = 1; j <= c; j++)
                {
                    printf("%d  ", matrix_a[j][i]);
                }

                printf("\n");
            }
        }

    else
    {
        printf("WRONG INPUT!");
    }

    return 0;
}