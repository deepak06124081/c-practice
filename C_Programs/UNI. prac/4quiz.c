#include <stdio.h>

int main(void)
{
    char ch ;
    printf("Enter character: ");
    scanf("%c",&ch);
    
    if (ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U' ||
        ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u')
    {
        printf("The character is vowel\n");
    }
    else if (ch >= '0' && ch <= '9')
    {
        printf("Its a digit: %c\n", ch);
    }
    else
    {
        printf("Its a not a vowel\n");
    }

    return 0;
}