#include<stdio.h>
void main()
{
    int n,f,f1=-1,f2=1;
    printf("  Enter The Number Of Terms:");
    scanf("%d",&n);
    printf("  The Fibonacci Series is:");
    do
    {
        f=f1+f2;
        f1=f2;
        f2=f;
        printf("  \n %d",f);
        n--;
    }while(n>=0);
    }
