#include<stdio.h>
void main()
{
int a[6],i,loc,element,n=6;
printf("enter the 6 elements");
for(i=0;i<=5;i++)
{
scanf("%d",&a[i]);
}
printf("display 6 elements");
{
for(i=0;i<=5;i++)
{
printf("%d\t",a[i]);
}}
printf("\n enter element to insert in array");
scanf("%d",&element);
printf("\n enter the location to store new element");
scanf("%d",&loc);
for(i=n-1;i>=loc;i--)
{
    a[i+1]=a[i];
}
a[loc]=element;
for (i=0;i<n+1;i++)
{
    printf("%d",a[i]);
    printf("\n");
}
}
