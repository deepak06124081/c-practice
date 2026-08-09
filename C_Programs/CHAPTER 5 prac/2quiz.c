#include <stdio.h>
void Good_morning();
void Good_afternoon();
void Good_evening();

void Good_morning()
{
    printf("Good morning\n");
}
void Good_afternoon()
{
    printf("Good afternoon\n");
}
void Good_evening()
{
    printf("Good evening\n");
}
int main(void)
{
    Good_morning();
    Good_afternoon();
    Good_evening(); 
    
    return 0;
}