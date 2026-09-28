#include <stdio.h>
#include <string.h>

int main()
{
    char st[] = "Deepak";
    char a1[56] = "Deepak";
    char a2[56] = "Bhai";

    //printf("%d\n", strlen(st)); // strlen() is used to calculate the length of a string. It takes a string as an argument and returns the number of characters in the string, excluding the null terminator ('\0'). In this case, it calculates the length of the string stored in the character array st, which is 6 (the number of characters in "Deepak").
    char target[30];
    strcpy(target, st); // strcpy() is used to copy a string from one character array to another. It takes two arguments: the destination array (target) and the source array (st). It copies the contents of the source array into the destination array, including the null terminator ('\0'). In this case, it copies the string "Deepak" from st to target.
   // printf("%s %s", st, target); // This line prints the contents of the target array,
    
    strcat(a1, a2); // strcat() is used to concatenate (join) two strings. It takes two arguments: the destination array (a1) and the source array (a2). It appends the contents of the source array to the end of the destination array, overwriting the null terminator ('\0') of the destination array. In this case, it concatenates the string "Bhai" from a2 to the end of the string "Deepak" in a1, resulting in "DeepakBhai".
    //printf("%s", a1); // This line prints the contents of the a1 array, which now contains the concatenated string "DeepakBhai".
    
    int a = strcmp("deep", "joke"); //DJ is -ve
    printf("%d", a); // strcmp() is used to compare two strings. It takes two arguments: the first string ("far") and the second string ("1joke"). It compares the strings character by character based on their ASCII values. If the first string is lexicographically less than the second string, it returns a negative value. If they are equal, it returns 0. If the first string is greater, it returns a positive value. In this case, it compares "far" and "1joke" and prints the result of the comparison.
    return 0;
}