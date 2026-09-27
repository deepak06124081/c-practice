#include <stdio.h>

int main(void)
{
    int n, r;
    int sum=0;
    printf("Enter the no.");
    scanf("%d",&n);
    int temp=n;
    while (n>0)
    {
      r=n%10;
      sum=sum*10+r;
      n=n/10;
    }
    n=temp;
    if(sum==temp)
   {
    printf("The no. is Palidrome %d");
}
else
{
    printf("The no. is not Palidrome %d");
}
    return 0;
}