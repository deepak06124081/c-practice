#include <stdio.h>

struct Date{

    int dd;
    int mm;
    int yyyy;
};

int CompareDate(struct Date d1, struct Date d2)
{
    if (d1.yyyy > d2.yyyy)
    {
        return 1;
    }
    else if (d1.yyyy < d2.yyyy)
    {
        return -1;
    }
    else
    {
        if (d1.mm > d2.mm)
        {
            return 1;
        }
        else if (d1.mm < d2.mm)
        {
            return -1;
        }
        else
        {
            if (d1.dd > d2.dd)
            {
                return 1;
            }
            else if (d1.dd < d2.dd)
            {
                return -1;
            }
            else
            {
                return 0;
            }
        }
    }
}
int main()
{
    struct Date d1 = {12, 5, 2023};
    struct Date d2 = {15, 6, 2023};
    printf("The result of comparing the two dates is: %d \n", CompareDate(d1, d2));
        return 0;
}