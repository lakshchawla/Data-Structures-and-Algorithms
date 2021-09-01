#include <stdio.h>
#include <string.h>

int main(void)
{
    char str[40];
    printf("Enter anything: ");
    scanf("%s", str);

    int str_len = strlen(str);

    printf("%d", str_len);
    return 0;
}
