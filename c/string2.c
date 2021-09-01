#include <stdio.h>
#include <string.h>

int main(void)
{
    printf("Welcome to social website....\nSign up: ");
    char user[10];
    char pass[20];

    printf("Enter your username:\n");
    scanf("%s", user);

    int len = strlen(pass);

    do
    {
        printf("Enter password: \n");
        scanf("%s", pass);
    } while (len < 6);

    int l, d, lc, uc, s, count;

    for (int i = 0; i <= len; i++)
    {
        if (!isdigit(pass[i]))
            d += 1;
        if (!islower(pass[i]))
            lc += 1;
        if (!isupper(pass[i]))
            uc += 1;
        if (!(pass[i] == '!' || pass[i] == '@' || pass[i] == '#' || pass[i] == '$' || pass[i] == '%' || pass[i] == '^' || pass[i] == '&' || pass[i] == '*' || pass[i] == '(' || pass[i] == ')' || pass[i] == '-' || pass[i] == '+'))
            s += 1;
    }
    if (d == l)
        count += 1;
    if (lc == l)
        count += 1;
    if (uc == l)
        count += 1;
    if (s == l)
        count += 1;
    if (count > 6 - l)
        ("Password is strong.");
    return 0;
}
