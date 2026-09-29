#include <stdio.h>

int main(void)
{
    int a[4], i, n = 4;
    int element = 100;
    for (i = 0; i < 4; i++)
    {
        a[i] = element;
    }
    for (int i = 0; i < 4; i++)
    {
        scanf("%d", &a[i]);
        printf("%d\n", a[i]);
    }

    return 0;
}