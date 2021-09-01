#include<stdio.h>

int natural(int num)
{
    if (num <= 50)
    {
        printf("%d  ",num);
        natural(num+1);
    }

}
int main(void)
{
    natural(1);
    return 0; 
}
