#include <stdio.h>

int main(void)
{
    int i, first, last;
    printf("Enter the no: ");
    scanf("%d", &i);
    
    last = i % 10; 
    while(i>=10)
   {
    i = i/10;
   }
   first =i ;
   printf("%d\n",first);
   printf("%d\n",last);
    return 0;
}