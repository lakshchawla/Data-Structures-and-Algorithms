#include<stdio.h>
#include<string.h>
int main(void)
{
    char name[10];
    printf("Enter name: ");
    scanf("%s", name);

    char copy_str[10];
    
    strcpy(copy_str,name);

    printf("Your name is %s",copy_str);
    return 0;

}