#include <stdio.h>
#include <string.h>
int main()
{
    char father_name[100],mother_name[100],my_name[100];
    int i=0,count=0;
    printf("Enter Your Father Name:");
    gets(father_name);
    printf("Enter Your Mother Name:");
    gets(mother_name);
    printf("Enter Your Name:");
    gets(my_name);
    strcat(father_name,mother_name);
    strcat(father_name,my_name);
    puts(father_name);
    for(i=0;i<strlen(father_name);i++)
    {
        if(father_name[i]!=' ')
        {
            count++;
        }
    }
    printf("Total String Length:%d",count);

    return 0;
}
