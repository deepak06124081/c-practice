#include <stdio.h>

struct vector 
{
    int x;
    int y;
};

struct vector Sumvector(struct vector v1, struct vector v2)
{
    struct vector v3 = {v1.x + v2.x, v1.y + v2.y};
    return v3;
}
int main()
{
    struct vector v1 = {3, 4};
    struct vector v2 = {5, 6};
    struct vector v3 = Sumvector(v1, v2);
    printf("The sum of the vectors is %dx + %dy \n", v3.x, v3.y);
    return 0;
}