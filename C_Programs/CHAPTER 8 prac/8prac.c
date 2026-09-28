#include <stdio.h>


int strlen(char str[])
{
    int i = 0;
    char c = str[i];

    while (c != '\0')
    {
        c = str[i];
        i++;
    }
    return i - 1;
}
int main()
{
    char str[] = "Deepak";
    printf("%d", strlen(str));
    return 0;
}