#include <stdio.h>
#include <stdlib.h>
void main()
{
    char str[100];
    int len= 0;
       printf("Input the string : ");
       fgets(str, sizeof str, stdin);
    while(str[len]!='\0')
    {
        len++;
    }
    printf("Length of the string is : %d\n\n", len-1);
}
