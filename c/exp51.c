#include <stdio.h>
int main(void)

{
    int num_items;
    printf("Enter number of items to be sold: ");
    scanf("%d", &num_items);

    float price_items[num_items];

    for (int i = 1; i <= num_items; i++)
    {
        printf("Enter price of item %d : ", i);
        scanf("%f", &price_items[i]);
    }

    float total_price = 0;
    for (int i = 1; i <= num_items; i++)
    {
        total_price = total_price + price_items[i];
    }

    int num_items_profit;
    do
    {
        printf("Enter price of items sold in profit: ");
        scanf("%d", &num_items_profit);
    } while (num_items_profit > num_items);

    int profit_per;
    printf("Enter profit percentage: ");
    scanf("%d", &profit_per);

    int loss_per;
    printf("Enter loss percentage: ");
    scanf("%d", &loss_per);

    float profit = 0,loss = 0;
    for (int i = 1; i <= num_items; i++)
    {
        profit += (profit_per * price_items[i])/100;
    }

    for (int i = 1; i <= num_items; i++)
    {
        loss += (loss_per * price_items[i])/100;
    }

    float result = profit - loss;
    if (result > 0)
        printf("Salesman get %f Profit in his business.",profit);
    
    else if (result < 0)
        printf("Salesman get %f loss in his business.",loss);

    else
        printf("Salesman got neither profit nor loss.");
    
    return 0;
}