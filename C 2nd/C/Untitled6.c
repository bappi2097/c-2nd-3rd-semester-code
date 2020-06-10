#include<stdio.h>
#include <string.h> // for using gets() & puts() functions
int main()
{
char name[50];
printf("Enter your name: ");
gets(name); //reads string from user
printf("Your name is: ");
puts(name); //displays string
return 0;
}
