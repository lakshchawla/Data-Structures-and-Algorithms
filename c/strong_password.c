#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main(void)
{
    char *pass = "LLakshshduag@#769";

    int digit_count = 0, lower_char_count = 0, upper_char_count = 0,
        spec_char_count = 0;

    for (int i = 0; pass[i] != '\0'; i++)
    {
        char ch = pass[i];

        if (isupper(ch) != 0)
            upper_char_count++;

        else if (isdigit(ch) != 0)
            digit_count++;

        else if (ch == '!' || ch == '@' || ch == '#' || ch == '$' || ch == '%' || ch == '^' || ch == '&' || ch == '*' || ch == '(' || ch == ')' || ch == '-' || ch == '+')
            spec_char_count++;

        else
            continue;
    }

    if (strlen(pass) < 8)
    {
        printf("Uh oh! Your password falled short of length");
    }

    else
    {
        int strength = upper_char_count + (digit_count * 2) + (spec_char_count * 3);
        printf("||||");
        for (int i = 0; i < strength; i++)
        {
            printf("|");
            if (i == 22)
            {
                break;
            }
        }
        printf("\nWeak  Moderate  Strong\n");
    }

    return 0;
}