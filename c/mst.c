/*
Ques 1. Write a program to perform various operations (any two)
        using switch statement only.

Name: Lakshay Chawla
UID: 20BEC1002
Branch: ECE
*/

#include <stdio.h>

int main(void)
{
    int num1, num2;
    char oper;

    printf("Enter the operation [Eg 2+2]: ");
    scanf("%d%c%d", &num1, &oper, &num2);

    switch (oper)
    {
    case ('+'):
    {
        printf("The result is %d", num1 + num2);
        break;
    }

    case ('-'):
    {
        printf("The result is %d", num1 - num2);
        break;
    }

    case ('*'):
    {
        printf("The result is %d", num1 * num2);
        break;
    }

    case ('/'):
    {
        printf("The result is %d", num1 / num2);
        break;
    };

    default:
    {
        printf("Invalid operation!");
        break;
    }
    }

    return 0;
}