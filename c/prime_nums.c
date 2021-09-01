// #include<stdio.h>

// int main(void)
// {
//     int n = 10;
//     printf("Enter n: ");
//     scanf("%d",&n);

//     for(int i = 1; i <= n; i++)
//     {
//         for(int j = n; j <= 2; j--)
//         {
//             if (i%j != 0)
//             {
//                 printf("%d",&i);
//             }
//             else
//             {
//                 continue;
//             }

//         }
//     }
// }

#include <stdio.h>

void main()
{
    int n;

    printf("Enter n: ");
    scanf("%d", &n);

    printf("Prime numbers:\n");
    for (int i = 2; i <= n; i++)
    {
        int count = 0;
        for (int j = 1; j <= i; j++)
        {
            if (i % j == 0)
            {
                count++;
            }
        }

        if (count == 2)
        {
            printf("%d \n", i);
        }
    }
}