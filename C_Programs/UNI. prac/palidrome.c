#include <stdio.h>

int main()
{
  int n,i,sum=0,r,temp;
  printf("enter the number");
  scanf("%d",&n);
  temp=n;
  while(n>0)
  {
      r=n%10;
      sum=sum*10+r;
      n=n/10;
  }
  n=temp;
  if(n==sum)
  {
      printf("palidrome number");
  }
      else
      {
          printf("not palindrome number");
      }
    return 0;
}
