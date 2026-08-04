#include <stdio.h>

int main(void)
{
    int n, i = 1;
    scanf("%d\n", &n);
    do
    {
        printf("The value of i is %d\n",i);
        i++;
    } while (i<=n);

    return 0;
}