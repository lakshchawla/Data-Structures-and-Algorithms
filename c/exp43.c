#include <stdio.h>
#include <math.h>

int main()
{
    int amt, p, q, r;
    printf("ENTER AMOUNT\n");
    scanf("%d", &amt);
    printf("ENTER RATIO OF COINS AS 1R:50p:25p\n");
    scanf("%d%d%d", &p, &q, &r);

    // pk + qk + rk = amt
    // k = amt/(p+q+r)

    float k = amt / (p + q + r);

    //25 p coins = 0.25 R
    // round arg outputs floats

    float coin_50 = round(2 * q * k);
    float coin_25 = round(4 * r * k);
    float coin_1 = amt - (q * k) - (r * k);

    printf("Number of Rs 1 coins: %f\nNumber of 50 paise coins: %f\nNumber of 25 paise coins: %f", coin_1, coin_50, coin_25);

    return 0;
}