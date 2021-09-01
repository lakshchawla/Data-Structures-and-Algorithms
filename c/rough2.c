#include <stdio.h>
void main()
{
   int n, i, b;

   printf("how many elements you want in array\n");
   scanf("%d", &n);
   // int *loc = ;
   
   int a[n];
   
   printf("enter array elements\n");
   
   for (i = 0; i < n; i++)
      scanf("%d", &a[i]);
   
   
   printf("reverse array:\n");
   
   for (i = n-1; i >= 0; i--)
      printf("%d = %d  \n", a[i], &a[i]);
}