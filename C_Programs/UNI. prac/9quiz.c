#include <stdio.h>

int main(void)
{
    int i, j, k;
    printf("The range of no. is :");
    scanf("%d %d", &j, &k);
    printf("Even no's are\n");

    for(i = j; i<=k; i++)
    {
        if(i%2==0)
        {
            printf("%d\n",i);
        }
    }
    printf("\n");
    printf("Odd no.'s\n");
    for(i=j; i<=k; i++)
    {
        if(i%2!= 0)
        {
            printf("%d\n",i);
        }
    }
    return 0;
}