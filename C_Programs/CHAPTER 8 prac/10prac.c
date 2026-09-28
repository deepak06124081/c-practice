#include <stdio.h>

int mystrlen(char str[])
{
    int i = 0, count;
    char c = str[i];
    while (c != '\0')
    {
        c = str[i];
        i++;
    }
    count = i - 1;
    return count;
}
void mystrcpy(char target[], char source[])
{
   for( int i = 0; i < mystrlen(source); i++)
   {
    target[i] = source[i];
   }
   target[mystrlen(source)] = '\0';
}
int main()
{
    char source [] = "Deepak";
    char target[30];    
    mystrcpy(target, source); // target now contains "Deepak"
printf("%s %s\n", source, target); // This line prints the contents of the source and target arrays, which are both "Deepak".   


    return 0;
}