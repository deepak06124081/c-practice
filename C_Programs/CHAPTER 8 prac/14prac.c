#include <stdio.h>
#include <string.h>
int main()
{
    char c = 'e';
    int contains = 0;

    char str[] = "Deepak";
    for (int i = 0; i < strlen(str); i++)
    {
        if(str[i] == c)
        {
            contains = 1;
            break;
        }
    }
    if(contains){
        printf("Yes it contains \n");
        
    }

    else{
    printf("It does not contains \n");
    }
    return 0;
}