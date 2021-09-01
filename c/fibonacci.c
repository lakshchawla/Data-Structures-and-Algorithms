// #include <stdio.h>
// int main()
// {
//     int i, n, t1 = 0, t2 = 1, nextTerm;
//     printf("Enter the number of terms: ");
//     scanf("%d", &n);
//     printf("fibonacci Series: ");

//     for (i = 1; i <= n; ++i)
//     {
//         printf("%d, ", t1);
//         nextTerm = t1 + t2;
//         t1 = t2;
//         t2 = nextTerm;
//     }

//     return 0;
// }

#include <stdio.h>

int fibo(int n)
{
    if (n == 0)
        return 0;

    else if (n == 1)
        return 1;

    else
        return fibo(n - 1) + fibo(n - 2);
}

int main()
{
    int n;
    printf("Enter the number of terms: ");
    scanf("%d", &n);
    printf("Series: ");

    for (int i = 0; i < n; i++)
    {
        printf("%d", fibo(i));

        if (i== n-1)
        {
            break;
        }
        printf(", ");
    }
}