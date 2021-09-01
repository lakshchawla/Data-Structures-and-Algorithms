#include <stdio.h>
#include <string.h>

int main(void)
{
    char *str;

    printf("Enter string: ");
    scanf("%[^\n]%*c", str);

    int len = strlen(str);

    printf("Substrings are: \n");
    for (int i = 1; i <= len; i++)
    {
        for (int j = 0, k = 0; k != len; j++)
        {
            for (k = j; k < (j + i); k++)
            {
                printf("%c", str[k]);
            }
            printf(",");
        }
    }

    return 0;
}
