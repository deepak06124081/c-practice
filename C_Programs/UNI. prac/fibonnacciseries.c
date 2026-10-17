#include<stdio.h>
void main()
{
    int n,a=0,b=1,c,i;
    printf("  Enter The Number Of Terms:");
    scanf("%d",&n);//5
    printf("  The Fibonacci Series is:");
    for(i=1;i<=n;i++)//5
    {
    printf("%d ",a);
    c=a+b;
    a=b;
    b=c;
    }
}
