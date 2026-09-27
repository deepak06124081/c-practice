#include <stdio.h>

int main(void)
{
    int a[5],i;
   printf("Enter the number");
   for ( i = 0; i < 5; i++)
   {
    scanf("%d", &a[i]);
   }
   printf("Display the no.");
   for ( i = 0; i < 5; i++)
   {
printf("%d\n",a[i]);
   }

    return 0;
}