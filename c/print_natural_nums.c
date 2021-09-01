#include <stdio.h>

int main(void)
{
    int num, sum = 0;
    do
    {
        printf("Enter number upto which you want to print the series: ");
        scanf("%d", &num);
    } while (num <= 0);

    for (int i = 1; i <= num; i++)
    {
        printf("%d, ", i);
        sum += i;
    }

    printf("The sum of all natural numbers is %d", sum);
    return 0;
}

struct name
{
    int ;
};
