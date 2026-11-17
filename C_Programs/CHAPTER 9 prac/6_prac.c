#include <stdio.h>

struct vector
{
    int x;
    int y;
};
int main()
{
    struct vector v = {3, 4};
    printf("The value of v.x is %dx + %dy \n", v.x, v.y);
    return 0;
}