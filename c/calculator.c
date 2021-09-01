#include<stdio.h>

int main (void){
    int num1, num2, res;
    char oper;

    printf(" Enter Operation: ");
    scanf("%d %c %d", &num1, &oper, &num2);

    
    switch (oper)
    {
    case '+':
        res = (num1 + num2);
        break;
    
    case '-':
        res = (num1 - num2);
        break;
        
    case '*':
        res = (num1 * num2);
        break;
        
    case '/':
        res = (num1 / num2);
        break;

    default:
        printf("Wrong operation entered!");
    }
    
    printf(" The result is: %d", res);
    return 0;

}