#include <stdio.h>
#include <string.h>
#include <conio.h>
int main()
{
    int size=0,i=0;
    printf("Student No:");
    scanf("%d",&size);
    struct student{
    char name[100],id[100],gender[100];
    };
    struct gend{
    char m[100],f[100];
    };
    struct address{
    char par_add[100],cur_add[100];
    struct gend show[size];
    struct student s[size];
    };
    struct address add[size];
    for(i=0;i<size;i++)
    {
        printf("\nEnter Your name:");
        scanf("%s",&add[i].s[i].name);
        printf("\nEnter Your ID:");
        scanf("%s",&add[i].s[i].id);
        printf("\nEnter Your Gender:");
        scanf("%s",&add[i].s[i].gender);
    }
    int countm=0,countf=0,j=0;
    for(i=0;i<size;i++)
    {
        if(strcmp("m",add[i].s[i].gender)==0)
        {
            countm++;
        }
        else
        {
            countf++;
        }
    }
    printf("\nMale:%d\nFemale:%d",countm,countf);
    printf("\nMale Name:");
    for(i=0;i<size;i++)
    {
        if(strcmp("m",add[i].s[i].gender)==0)
        {
            printf("\nName:%s\tId:%s",add[i].s[i].name,add[i].s[i].id);
        }
    }
    printf("\nFemale Name:");
    for(i=0;i<size;i++)
    {
        if(strcmp("f",add[i].s[i].gender)==0)
        {
            printf("\nName:%s\tId:%s",add[i].s[i].name,add[i].s[i].id);
        }
    }
    return 0;
}
