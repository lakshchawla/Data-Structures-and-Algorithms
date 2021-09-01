#include<stdio.h>

typedef struct details
{
    char *name;
    int id;
    int date;
    int month;
    int year;

}details;

void input(details p1)
{
    gets(p1.name);
    gets(p1.id);
    gets(p1.date);
    gets(p1.month);
    gets(p1.year);
}

int main(void)
{
    char *uni_name;
    printf("Enter your unique name with name and UID: ");
    scanf("%c",uni_name);

    input(uni_name);
}
