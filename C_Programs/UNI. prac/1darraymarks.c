#include <stdio.h>
int main()
{
  int a[5],i,sum=0,avg;
  for(i=0;i<=4;i++)
  {
  printf("enter the marks");
  scanf("%d",&a[i]);
  }
  printf("display marks");
  for(i=0;i<=4;i++)
  {
      printf("%d \n",a[i]);
      sum=sum+a[i];
}
avg=sum/5;
  printf("avg marks %d\n",avg);
    return 0;
}
