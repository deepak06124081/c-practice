#include<stdio.h>
void main()
{
int i=0,j=0;
while(++i<=5)
{
while(++j<=5)
{
printf("j=%d \t",j);
}
printf("j:%d \n",j);
}
}
