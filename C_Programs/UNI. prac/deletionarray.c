#include<stdio.h>
void main()
{
int a[5],i,loc,n=5;
printf("enter the elements :");
for(i=0;i<5;i++)
{
    scanf("%d",&a[i]);
}
printf("enter the location from where you want to element delete");
scanf("%d",&loc);
if(loc>n+1)
    printf("Deletion not possible\n");
else
    for(i=loc;i<n-1;i++)
{
    a[i]=a[i+1];
}
printf("Updated Array: \n");
for(i=0;i<n-1;i++)
{
    printf("%d",a[i]);
}
}
