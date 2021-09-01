#include <stdio.h>

int main(void)
{
    int d,y,n;

    scanf("%d",&d);
    scanf("%d",&y);
    scanf("%d",&n);

    int a[n], z[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d",&a[i]);
        scanf("%d",&z[i]);
    }

    int d_exp;
    for (int i = 0; i < n; i++)
    {
        d_exp += a[i];
    }

    int t_exp;
    for (int i = 0; i < n; i++)
    {
        t_exp += z[i];
    }

    int t_total = y + t_exp;

    printf("%d", (d/t_total) + d_exp);    
    return 0;
}