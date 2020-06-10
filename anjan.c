#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<math.h>
#define Student struct Stud
void add(FILE * fp);
void del(FILE * fp);
void modify(FILE * fp);
void displayList(FILE * fp);
void searchRecord(FILE *fp);
void printChar(char ch,int n);
void printHead();
struct Stud
{
    char name[100];
    char branch[50];
    int roll;
    float sgpa[12];
    float cgpa;
};
struct login
{
    char fname[20];
    char lname[20];
    char username[20];
    char password[20];
};
registe()
{
    FILE*log;
    log=fopen("logiin12.txt","w");
    struct login l;
    printf("enter first name:");
    scanf("%s",l.fname);
    printf("enter last name :");
    scanf("%s",l.lname);
    printf("enter username:");
    scanf("%s",l.username);
    printf("enter password:");
    scanf("%s",l.password);
    fwrite(&l,sizeof(l),1,log);
    fclose(log);
    printf("\n\n your user name is user id\n");
    printf("now log in with user id and password\n");
    printf("\npress any key to continue.......");
    getch();
    login();
}
login()
{
    char username[20], password[20];
    FILE*log;
    log=fopen("logiin12.txt","r");
    struct login l ;
    printf("user ID:");
    scanf("%s",&username);
    printf("password:");
    scanf("%s",&password);
    while(fread(&l,sizeof(l),1,log))
    {
        if(strcmp(username,l.username)==0&&strcmp(password,l.password)==0)
        {
            printf("succesful log in\n");
            printf("Press any key to continue..... ");
            system("CLS");
            admin();
        }
        else
        {
            printf("please enter correct user id and password");
        }
    }
    fclose (log);
}
main()
{
    int cho;
    printf("press '1' for register \npress '2' for log in\n\n");
    cho=getche();
    if (cho == '1')
    {
        system("CLS");
        registe();
    }
    else if(cho == '2')
    {
        system("CLS");
        login();
    }
}
admin()
{
    FILE * fp;
    Student s;
    int option;
    char another;
    printf("\n\t\tpress any key click to double");
    getch();
    if((fp=fopen("studentInfo.txt","w+"))==0)
        printf("\n\t\tpress any key click to double");
    getch();
    while(1)
    {
        printHead();
        printf("\n\t");
        printChar('-',64);
        printf("\n\n\t\t\t1. ADD Student");
        printf("\n\n\t\t\t2. DELETE Student");
        printf("\n\n\t\t\t3. MODIFY Student");
        printf("\n\n\t\t\t4. DISPLAY Student LIST");
        printf("\n\n\t\t\t5. Search Record");
        printf("\n\n\t\t\t0. EXIT");
        printf("\n\n\t\tEnte+r Your Option :--> ");
        scanf("%d",&option);

        switch(option)
        {
        case 0:
            return 1;
            break;
        case 1:
            add(fp);
            break;
        case 2:
            del(fp);
            break;
        case 3:
            modify(fp);
            break;
        case 4:
            displayList(fp);
            break;
        case 5:
            searchRecord(fp);
            break;
        default:
            printf("\n\t\tYou Pressed wrong key");
            printf("\n\t\tProgram terminated");
            getch();
            exit(0);

        }
    }
    return 1;
}
void printChar(char ch,int n)
{
    while(n--)
    {
        putchar(ch);
    }
}
void printHead()
{
    system("cls");
    printf("\n\n\t");
    printChar('=',16);
    printf("[STUDENT] [INFORMATION] [SYSTEM]");
    printChar('=',16);
    printf("\n");
}
void add(FILE * fp)
{
    printHead();
    char another='y';
    Student s;
    int i;
    float cgpa;
    fseek(fp,0,SEEK_END);
    while(another=='y'||another=='Y')
    {
        printf("\n\n\t\tEnter Full Name of Student\t");
        fflush(stdin);
        fgets(s.name,100,stdin);
        s.name[strlen(s.name)-1]='\0';
        printf("\n\n\t\tEnter Branch\t");
        fflush(stdin);
        fgets(s.branch,50,stdin);
        s.branch[strlen(s.branch)-1]='\0';
        printf("\n\n\t\tEnter Roll number \t");
        scanf("%d",&s.roll);
        printf("\n\n\tEnter SGPA for 4 semesters\n\t");
        for(i=0,cgpa=0; i<=4; i++)
        {
            scanf("%f",&s.sgpa[i]);
            cgpa+=s.sgpa[i];
        }
        cgpa/=4.0;
        s.cgpa=cgpa;
        fwrite(&s,sizeof(s),1,fp);
        printf("\n\n\t\tWant to enter another student info (Y/N)\t");
        fflush(stdin);
        another=getchar();
    }
}
void del (FILE * fp)
{
    printHead();
    Student s;
    int flag=0,tempRoll,siz=sizeof(s);
    FILE *ft;
    if((ft=fopen("temp.txt","w+"))==NULL)
    {
        printf("\n\n\t\t\t\\t!!! ERROR !!!\n\t\t");
        system("pause");
        return fp;
    }
    printf("\n\n\tEnter Roll number of Student to Delete the Record");
    printf("\n\n\t\t\tRoll No. : ");
    scanf("%d",&tempRoll);
    rewind(fp);
    while((fread(&s,siz,1,fp))==1)
    {
        if(s.roll==tempRoll)
        {
            flag=1;
            printf("\n\tRecord Deleted for");
            printf("\n\n\t\t%s\n\n\t\t%s\n\n\t\t%d\n\t",s.name,s.branch,s.roll);
            continue;
        }
        fwrite(&s,siz,1,ft);
    }
    fclose(fp);
    fclose(ft);
    remove("studentInfo.txt");
    rename("temp.txt","studentInfo.txt");
    if((fp=fopen("studentInfo.txt","w+"))==NULL)
    {
        printf("ERROR");
        return  NULL;
    }
    if(flag==0) printf("\n\n\t\t!!!! ERROR RECORD NOT FOUND \n\t");
    printChar('-',65);
    printf("\n\t");
    system("pause");
    return fp;
}
void modify(FILE * fp)
{
    printHead();
    Student s;
    int i,flag=0,tempRoll,siz=sizeof(s);
    float cgpa;
    printf("\n\n\tEnter Roll Number of Student to MODIFY the Record : ");
    scanf("%d",&tempRoll);
    rewind(fp);
    while((fread(&s,siz,1,fp))==1)
    {
        if(s.roll==tempRoll)
        {
            flag=1;
            break;
        }
    }
    if(flag==1)
    {
        fseek(fp,-siz,SEEK_CUR);
        printf("\n\n\t\tRECORD FOUND");
        printf("\n\n\t\tEnter New Data for the Record");
        printf("\n\n\t\tEnter Full Name of Student\t");
        fflush(stdin);
        fgets(s.name,100,stdin);
        s.name[strlen(s.name)-1]='\0';
        printf("\n\n\t\tEnter Branch\t");
        fflush(stdin);
        fgets(s.branch,50,stdin);
        s.branch[strlen(s.branch)-1]='\0';
        printf("\n\n\t\tEnter Roll number \t");
        scanf("%d",&s.roll);
        printf("\n\n\tEnter SGPA for 12 semesters\n\t");
        for(i=0,cgpa=0; i<=12; i++)
        {
            scanf("%f",&s.sgpa[i]);
            cgpa+=s.sgpa[i];
        }
        cgpa=cgpa/12.0;
        fwrite(&s,sizeof(s),1,fp);
    }
    else printf("\n\n\t!!!! ERROR !!!! RECORD NOT FOUND");
    printf("\n\n\t");
    system("pause");
}
void displayList(FILE * fp)
{
    printHead();
    Student s;
    int i,siz=sizeof(s);
    rewind(fp);
    while((fread(&s,siz,1,fp))==1)
    {
        printf("\n\t\tNAME : %s",s.name);
        printf("\n\n\t\tBRANCH : %s",s.branch);
        printf("\n\n\t\tROLL : %d",s.roll);
        printf("\n\n\tSGPA: ");
        for(i=0; i<8; i++)
            printf("| %.2f |",s.sgpa[i]);
        printf("\n\n\t\tCGPA : %.2f\n\t",s.cgpa);
        printChar('-',65);
    }
    printf("\n\n\n\t");
    printChar('*',65);
    printf("\n\n\t");
    system("pause");
}
void searchRecord(FILE *fp)
{
    printHead();
    int tempRoll,flag,siz,i;
    Student s;
    char another='y';
    siz=sizeof(s);
    while(another=='y'||another=='Y')
    {
        printf("\n\n\tEnter Roll Number of Student to search the record : ");
        scanf("%d",&tempRoll);
        rewind(fp);
        while((fread(&s,siz,1,fp))==1)
        {
            if(s.roll==tempRoll)
            {
                flag=1;
                break;
            }
        }
        if(flag==1)
        {
            printf("\n\t\tNAME : %s",s.name);
            printf("\n\n\t\tBRANCH : %s",s.branch);
            printf("\n\n\t\tROLL : %d",s.roll);
            printf("\n\n\tSGPA: ");
            for(i=0; i<8; i++)
                printf("| %.2f |",s.sgpa[i]);
            printf("\n\n\t\tCGPA : %.2f\n\t",s.cgpa);
            printChar('-',65);
        }
        else printf("\n\n\t\t!!!! ERROR RECORD NOT FOUND !!!!");
        printf("\n\n\t\tWant to enter another search (Y/N)");
        fflush(stdin);
        another=getchar();
    }
}
