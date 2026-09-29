#include <stdio.h>
#include<string.h>
int main()
{
   char fname[30];
   printf("Enter fname: ");
   gets(fname);
   char lname[30];
   printf("Enter lname: ");
   gets(lname);
   strcat(fname,lname);
   printf("%s \n",fname);
   puts(lname);
   }
