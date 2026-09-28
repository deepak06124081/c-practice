#include <stdio.h>

int main()
{
    char st[30];
    gets(st); // gets() is used to read a string from the standard input (keyboard) and store it in the character array st. It reads characters until a newline character is encountered, and it automatically appends a null terminator ('\0') at the end of the string.
    printf("%s", st);
    //puts(St); // puts() is used to print a string to the standard output (console). It takes a string as an argument and prints it followed by a newline character. In this case, it prints the string stored in the character array st.
    printf("hey");
    
    return 0;
}