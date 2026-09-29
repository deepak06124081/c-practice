#include<stdio.h>
#include<string.h>
void main()
{
char a[100],b[100];
printf("enter the first string");
gets(a);
printf("enter the second string");
gets(b);
if(strcmp(a,b)==0)
printf("enter strings are equal...\n");
else
printf("enter strings are not equal...");

}
