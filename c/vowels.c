#include <stdio.h>

int main(void)
{
    char ch, cd, *str;

    printf("Enter string: \n");
    scanf("%s",str);
    int vow = 0, con = 0;

    for (int i = 0; str[i] != '\0'; i++)
    {

        cd = str[i];

        cd = str[i];

        if (cd == 'a' || cd == 'e' || cd == 'i' || cd == 'o' || cd == 'u' 
        || cd == 'A' || cd == 'E' || cd == 'I' || cd == 'O' || cd == 'U')
            printf("%c = Vowel\n",cd);

        else if(cd == ' ' || cd == '.')
            continue;

        else
            printf("%c = consonant \n",cd);
    }

    for (int i = 0; str[i] != '\0'; i++)
    {
        ch = str[i];

        if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u'
         || ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U')
            vow++;

        else if(ch == ' ' || ch == '.')
            continue;

        else
            con++;
    }

    printf("\nNumber of:\nVowels = %d\nConsonants = %d\n",vow, con);
    return 0;
}