#include<stdio.h>
#include<string.h>
void main()
{
    int l1,l2,i;
    char s1[30]="Kanika";
    char s2[30]="sharma";
    l1=strlen(s1);
    l2=strlen(s2);
    for(i=0;i<l2;i++)
    {
        s1[l1+i]=s2[i];
    }
    printf("string concatenate is %s \n",s1);
}
