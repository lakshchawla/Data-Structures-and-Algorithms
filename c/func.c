#include <stdio.h>

int fact(int n)
{
    if (n == 1 || n == 0)
    {
        return 1;
    }
    else
    {
        return (n + fact(n--));
        return n;
    }
}

int main(void)
{
    int a = 5;
    // printf("ENTER THE VALUE: ");
    // scanf("%d", &a);

    int res = fact(a);

    printf("%d",res);
    
}