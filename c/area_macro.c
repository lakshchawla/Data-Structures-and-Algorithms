#include<stdio.h>
#include<math.h>
#define PI 3.14

int main(void)
{
    float rad;
    printf("Enter radius: ");
    scanf("%f",&rad);
    
    float area = PI * pow(rad,2);
    printf("Area of circle of radius %.2f is %.4f . ", rad, area);

    return 0;
}