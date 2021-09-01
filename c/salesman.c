#include <stdio.h>
int main()

{
    int n, profit_items;
    printf("Enter no of items : ");
    scanf("%d", &n);

    float price[n];

    printf("Enter price:\n");
    for (int i = 0; i < n; i++)
    {
        printf("Item-%d: ", i + 1);
        scanf("%f", &price[i]);
    }

    float m, x;
    printf("No of items sold in profit : ");
    scanf("%d", &profit_items);

    printf("Enter profit percentage: ");
    scanf("%f", &m);

    printf("Enter losspercentage: ");
    scanf("%f", &x);

    float profit = 0, loss = 0;
    for (int i = 0; i < profit_items; i++)
    {
        profit += (m * price[i]) / 100; 
    }

    
    for (int i = profit_items; i < n; i++)
    {
        loss += (x * price[i]) / 100; 
    }

    float total = profit - loss;


    if (total > 0)
        printf("Salesman got Rs. %.2f profit", total);

    else if (total < 0)
        printf("Salesman got Rs. %.2f loss", total * -1);

    else
        printf("Salesman got neither profit nor loss");

    return 0;
}