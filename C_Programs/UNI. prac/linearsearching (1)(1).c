#include<stdio.h>
void main()
{
int a[5],i,element,found=0;
printf("enter the elements:");
for(i=0;i<5;i++)
{
    scanf("%d",&a[i]);
}
printf("enter the element for searching");
scanf("%d",&element);
for(i=0;i<5;i++)
{
    if(a[i]==element)
    {
    printf("element found loc %d",i);
    found =1;
    break;
    }
}
{ if(!found)
    printf("element not found");
}}
