#include <stdio.h>

int main()
{
     char str[6];
    //scanf("%s", str);
   for (int i = 0; i < 6; i++)
    {
        scanf("%c", &str[i]);
        fflush(stdin); // Clear the input buffer to avoid reading the newline character
    }
    str[5] = '\0'; // Add null terminator to the end of the string

    printf("%s", str);
    return 0;
}