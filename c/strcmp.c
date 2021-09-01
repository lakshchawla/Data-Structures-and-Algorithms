#include <stdio.h>
#include<string.h>

int main()
{   char str_1[20];
    char str_2[20];

    printf("Enter string 1: ");
    scanf("%s",str_1);
    printf("Enter string 2: ");
    scanf("%s",str_2);

    int cmp = strcmp(str_1,str_2);

    if (cmp == 0)
      printf("Length of both strings are same.");
    else
      printf("Length of both strings are different.");

    return 0;
}