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
    struct address{
    char par_add[100],cur_add[100];
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
        printf("\nEnter Your permanent address:");
        scanf("%s",&add[i].par_add);
        printf("\nEnter Your Current address:");
        scanf("%s",&add[i].cur_add);
    }
   /* for(i=0;i<size;i++)
    {
        printf("\nName:%s\nGender:%s\nPermanent Address:%s",add[i].s[i].name,add[i].s[i].gender,add[i].par_add);
    }*/
    char id1[100];
    printf("\nSearch ID:");
    scanf("%s",id1);
    for(i=0;i<size;i++)
    {
        if(strcmp(id1,add[i].s[i].id)==0)
        {
            printf("\nName:%s\nGender:%s\nPermanent Address:%s",add[i].s[i].name,add[i].s[i].gender,add[i].par_add);

        }
    }
    return 0;
}
