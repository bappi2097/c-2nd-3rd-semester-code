#include <stdio.h>

struct Registration
{
    char name[100],occu[1000];
    int age,amount;
};

int main()
{
    int choice;

    printf("Enter Your Choice :");
    scanf("%d",&choice);
    switch(choice)
    {
    case 1:
        insert();
        break;
    case 2:
        view();
        break;
    case 3:
        search();
        break;
    default :
        printf("wrong input");
        break;
    }
    return 0;
}
insert()
{
    int size,i;
    struct Registration s;
    FILE *fp;
    fp=fopen("student.txt","a");
    printf("\nEnter Your Name:");
    scanf("%s",&s.name);
    printf("\nEnter Your Age:");
    scanf("%d",&s.age);
    printf("\nEnter Your Amount:");
    scanf("%d",&s.amount);
    printf("\nEnter Your Occupation:");
    scanf("%s",&s.occu);
    fwrite(&s,sizeof(s),1,fp);
    fclose(fp);
    return 0;
}
view()
{
    FILE *fp;
    fp=fopen("student.txt","r");
    struct Registration s;
    while(fread(&s,sizeof(s),1,fp))
    {
        printf("Name:%s\nAge:%d\nAmount:%d\nOccupation:%s\n",s.name,s.age,s.amount,s.occu);
    }
    fclose(fp);
    return 0;
}
search()
{
    char search_name[100],search_occu[100];
    FILE *fp;
    fp=fopen("student.txt","r");
    struct Registration s;
    printf("\nSearch By Occupation:");
    scanf("%s",&search_occu);
    while(fread(&s,sizeof(s),1,fp))
    {
        if(strcmp(search_occu,s.occu)==0)
        {
            printf("Name:%s\nAge:%d\nAmount:%d\nOccupation:%s\n",s.name,s.age,s.amount,s.occu);
        }
    }
    printf("\nSearch By Name:");
    scanf("%s",&search_name);
    while(fread(&s,sizeof(s),1,fp))
    {
        if(strcmp(search_name,s.name)==0)
        {
            printf("Name:%s\nAge:%d\nAmount:%d\nOccupation:%s\n",s.name,s.age,s.amount,s.occu);
        }
    }
    return 0;
}
