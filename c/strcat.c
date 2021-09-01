#include<stdio.h>
#include<string.h>
int main(void)
{
    char f_name[10],l_name[10];
    printf("Enter first name: ");
    scanf("%s", f_name);

    printf("Enter last name: ");
    scanf("%s", l_name);
    
    // strcat(f_name, l_name);

    printf("Your full name is %s",strcat(f_name,l_name));
    return 0;

}