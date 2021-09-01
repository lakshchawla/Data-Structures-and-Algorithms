#include <stdio.h>

int main(void)
{
    int num;
    char con;

A:
    printf("Enter number: ");
    scanf("%d", &num);

    if (num > 0)
        printf("%d is a positive number.", num);

    else if (num < 0)
        printf("%d is a negative number.", num);

    else
        printf("It is zero neither positive nor negative.");

    printf("\nStart over?? {Y|N) ");
    scanf("%s",&con);

    if (con == 'y' || con == 'Y')
    {
        goto A;
    }
    else if (con == 'n' || con == 'N')
    {
        return 0;
    }
    else
    {
        printf("Invlid selection.");
    }
}
