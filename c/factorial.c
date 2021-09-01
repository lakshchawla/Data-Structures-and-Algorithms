#include <stdio.h>

int factorial(int num)
{
    int fact;
    if (num >= 1)
    {
        return num * factorial(num-1);
    }
    else
        return 1;
}

int main(void)
{
    int num;
    printf("Enter number: ");
    scanf("%d", &num);

    int ans = factorial(num);

    printf("%d",ans);
    return 0;
}

// #include <stdio.h>

// int fact(int n)
// {
//     if (n >= 1)
//         return n * fact(n - 1);
//     else
//         return 1;
// }

// int main(void)
// {
//     int num;
//     printf("Enter num: ");
//     scanf("%d",&num);

//     int factorial_num = fact(num);
//     printf("%d",factorial_num);
//     return 0;
// }