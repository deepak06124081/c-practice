#include <stdio.h>

int main(void)
{
    int i,n, count=0;
    scanf("%d",&n);
    for (i = 1; i <=n; i++)
    {
        if (n%i==0)
        {
        printf("%d\n",i); 
           count++;     
        }}
        if (count==2)
        {
            printf("The no. is prime no.");
        }
        else
        {
            printf("Not prime no.");
        }
        
  
    return 0;
}   