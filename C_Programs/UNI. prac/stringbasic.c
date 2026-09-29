#include<stdio.h>
int main()
{
    char s[30];
    printf("enter the name");
    //scanf("%s",s);
    gets(s);
    printf("Hi %s,welcome",s);
}
