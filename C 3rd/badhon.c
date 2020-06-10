#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <windows.h>
void introduction()
{
    printf("\n\t\t\t HOSPITAL MANAGEMENT SYSTEM.\n\n\n\n\n");
    system("pause");
    system("cls");
}
void main_menu()
{
    char n,ce;
    printf("\n\n\n\tMAIN MENU\n\t\t  \t\n");

    printf("\n\t  1.Patient module\n\n\t  2.Doctor module\n\n\t  3.room\n\n\t  4.EXIT");

    printf("\n\n\n\n\tEnter Your Choice: ");
    n=getche();
    if(n=='1')
    {
        loader();
        system("cls");
        printf("\n\n\t\t\t\tpatients page\n\t\t\t__________________________\t\n\n");
    }
    else if(n=='2')
    {
        loader();
        system("cls");
        printf("\n\n\t\t\t\tDoctors page\n\t\t\t__________________________\t\n\n");
    }
     else if(n=='3')
    {
        loader();
        system("cls");
        printf("\n\n\t\t\t\t\tROOMS\n\t________________________________________________________________\t\n\n");
    }
     else if(n=='4')
    {
        loader();
        system("cls");
        printf("\n\n\n\n\n\t\t\t\tConfirm Exit\n\n\n");
        printf("\n\n\t\t\tY.Yes\t\t\tN.No\n\n\n\n\n\n\n\n\n");
        ce=getche;
        system("pause");
        system("cls");
        loader();
        system("cls");
        if(ce=='Y')
        {
            printf("Exit");
        }
        else if(ce=='N');
        {
            main_menu();
        }
    }
}
loader_animation()
{
    loader();
    system("cls");
    printf("\n\tSuccessfully Loaded\n\n");
    getch();
}
void loader()
{
    int i;
    system("cls");
    printf("\n\n\n\n\t\t\tLoading...\n");
    printf("\t");
    for(i=0;i<50;i++)
    {
        Sleep(20);
        printf("%c",219);

    }
}
struct p
{
char SERIAL[20];
char name[20];
char age[3];
}s;
int main()
{
    system("color 5F");
    introduction();
    printf("\n\t\t\tWelcome To HOSPITAL MANAGEMENT SYSTEM .");
    main_menu();
    getch();
    printf("\t\t1.Patient's Registration\n\n\t\t2.Registered Patients\n\n\t\t3.search patient\n\n\n\n\t\t ");
    recursive();
}
int insert() {
   FILE*fp;
   char ser[20];
    fp=fopen("pol.txt","r");
    struct p s;
    printf("Enter serial: ");
    scanf("%s",&ser);
    while(fread(&s,sizeof(s),1,fp))
    {
        if(strcmp(s.SERIAL,ser)==0)
        {
            printf("\n\nSorry This Serial Exists\n");
            recursive();
            break;
        }
    }
    fclose(fp);
    fp=fopen("pol.txt","a");
    strcpy(s.SERIAL,ser);
    printf("\nEnter Name: ");
    scanf("%s",&s.name);
    printf("\nEnter Age: ");
    scanf("%s",&s.age);
    fwrite(&s,sizeof(s),1,fp);
    fclose(fp);
    recursive();
}
int view() {
    FILE*fp;
    fp=fopen("pol.txt","r");
    struct p s;
    printf("SERIAL\tName\tAge\n");
    while(fread(&s,sizeof(s),1,fp))
    {
        printf("%s\t %s\t %s\n",s.SERIAL,s.name,s.age);
    }
    fclose(fp);
    recursive();
}
int search() {
    char serial[20];
    FILE*fp;
    fp=fopen("pol.txt","r");
    struct p s;
    printf("search serial: ");
    scanf("%s",&serial);
    while(fread(&s,sizeof(s),1,fp))
    {
        if(strcmp(serial,s.SERIAL)==0)
        {
            printf("SERIAL\tname\tage\n");
        printf("%s\t %s\t %s\n",s.SERIAL,s.name,s.age);
        }
    }
    fclose(fp);
    recursive();
}

int recursive() {
    int choose;
    // printf("\t\t1.Patient's Registration\n\n\t\t2.Registered Patients\n\n\t\t3.search patient\n\n\n\n\t\t ");
    printf("Enter your choice: ");
    scanf("%d",&choose);
    switch(choose)
    {
    case 1:
        insert();
    case 2:
        view();
    case 3:
        search();
    }
}
