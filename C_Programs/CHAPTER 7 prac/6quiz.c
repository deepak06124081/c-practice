#include <stdio.h>

int main(void)
{
    int a[5],n=4,i,loc,element;
    printf("enter the marks");
    for ( i = 0; i < n; i++)
    {
           scanf("%d",&a[i]); 
    } 
    printf("\n enter the location to store the new element");
    scanf("%d",&loc);
    printf("\n enter the element to be inserted");
    scanf("%d",&element);
     for(i=n-1;i>=loc;i--)
{
    a[i+1] = a[i];
}
  a[loc]=element;
  for(i=0;i<n+1;i++)
  {
    printf("%d \n",a[i]);
  }
return 0;
}