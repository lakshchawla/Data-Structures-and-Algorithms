/*
Ques 2. Write a program for the concatenation of the strings.

Name: Lakshay Chawla
UID: 20BEC1002
Branch: ECE
*/

#include <stdio.h>
#include <string.h>
int main(void)
{
    char str_1[10], str_2[10];
    printf("Enter string 1 (max length 10): ");
    scanf("%s", str_1);

    printf("Enter string 2 (max length 10): ");
    scanf("%s", str_2);

    // String 2 concatenation for adding a space
    char string2[10] = " ";
    strcat(string2, str_2);

    // Final string concatenation
    strcat(str_1, string2);
    printf("Your concatenated string is %s", str_1);
    return 0;
}