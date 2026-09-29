#include<stdio.h>
void main()
{
int a[3][3],b[3][3],s[3][3],i,j;
printf("enter the matrix \n");
for(i=0;i<3;i++)
{
    for(j=0;j<3;j++)
    {
        scanf("%d",&a[i][j]);
    }
}
    printf("enter the 2nd matrix \n");
for(i=0;i<3;i++)
{
    for(j=0;j<3;j++)
    {
        scanf("%d",&b[i][j]);
    }
}
    printf("enter the sum of two matrix \n");
for(i=0;i<3;i++)
{
    for(j=0;j<3;j++)
    {
        s[i][j]=a[i][j]+ b[i][j];
    printf("%d \t",s[i][j]);
    }
    printf("\n");
}}
