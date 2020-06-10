#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<math.h>

#define Student struct Stud

void add(FILE * fp); //to add to list
FILE * del(FILE * fp);//to delete from list
void modify(FILE * fp);//to modify a record
void displayList(FILE * fp);//display whole list
void searchRecord(FILE *fp);//find a particular record
void printChar(char ch,int n);//printing a character ch n times
void printHead();//printing head line for each screen

struct Stud
{
    char name[100];
    char branch[50];
    int roll;
    float sgpa[8];
    float cgpa;
};


int main()
{
 FILE * fp;
 Student s;
int option;
char another;

if((fp=fopen("studentInfo.txt","rb+"))==NULL)
{
    if((fp=fopen("studentInfo.txt","wb+"))==NULL)
    {
        printf("can't open file");
        return 0;
    }
}

printHead();
printf("\n\n\t\tBappi saha");
printf("\n\t\tpress any key to continue");
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

    printf("\n\n\t\tEnter Your Option :--> ");
    scanf("%d",&option);

    switch(option)
    {
        case 0: return 1;
                break;
        case 1: add(fp);
                break;
        case 2: fp=del(fp);
                break;
        case 3: modify(fp);
                break;
        case 4: displayList(fp);
                break;
        case 5: searchRecord(fp);
                break;
        default: printf("\n\t\tYou Pressed wrong key");
                  printf("\n\t\tProgram terminated");
                  getch();
                  exit(0);

    }
}
return 1;

}

//----printing character ch at n times ------

void printChar(char ch,int n)
{
    while(n--)
    {
        putchar(ch);
    }
}

//-----Printing Head Line of the program -----

void printHead()
{ system("cls");

printf("\n\n\t");
printChar('=',16);
printf("[STUDENT] [INFORMATION] [SYSTEM]");
printChar('=',16);
printf("\n");
}


// ==========ADDING NEW RECORD==========================

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
    fgets(s.name,100,stdin); //fgets takes an extra \n character as input
    s.name[strlen(s.name)-1]='\0';

    printf("\n\n\t\tEnter Branch\t");
    fflush(stdin);
    fgets(s.branch,50,stdin);
    s.branch[strlen(s.branch)-1]='\0';

    printf("\n\n\t\tEnter Roll number \t");
    scanf("%d",&s.roll);

    printf("\n\n\tEnter SGPA for 8 semesters\n\t");
    for(i=0,cgpa=0;i<8;i++)
    {scanf("%f",&s.sgpa[i]);
    cgpa+=s.sgpa[i];

    }

    cgpa/=8.0;
    s.cgpa=cgpa;

    fwrite(&s,sizeof(s),1,fp);

    printf("\n\n\t\tWant to enter another student info (Y/N)\t");
    fflush(stdin);
    another=getchar();
}
}


//===================DELETING A RECORD FROM LIST ============
FILE * del(FILE * fp)
{
 printHead();

Student s;
int flag=0,tempRoll,siz=sizeof(s);
FILE *ft;

if((ft=fopen("temp.txt","wb+"))==NULL)
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
    { flag=1;
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

if((fp=fopen("studentInfo.txt","rb+"))==NULL)
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


//===========MODIFY A RECORD ===========================

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
        {flag=1;
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


    printf("\n\n\tEnter SGPA for 8 semesters\n\t");
    for(i=0,cgpa=0;i<8;i++)
    {scanf("%f",&s.sgpa[i]);
    cgpa+=s.sgpa[i];

    }
    cgpa=cgpa/8.0;


    fwrite(&s,sizeof(s),1,fp);
}

else printf("\n\n\t!!!! ERROR !!!! RECORD NOT FOUND");

printf("\n\n\t");
system("pause");

}

//====================DISPLAY THE LIST =================
void displayList(FILE * fp)
{   printHead();
    Student s;
    int i,siz=sizeof(s);

    rewind(fp);

    while((fread(&s,siz,1,fp))==1)
    {
        printf("\n\t\tNAME : %s",s.name);
        printf("\n\n\t\tBRANCH : %s",s.branch);
        printf("\n\n\t\tROLL : %d",s.roll);
        printf("\n\n\tSGPA: ");

        for(i=0;i<8;i++)
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
{printHead();

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
        {flag=1;
        break;
        }
}

if(flag==1)
    {
    printf("\n\t\tNAME : %s",s.name);
        printf("\n\n\t\tBRANCH : %s",s.branch);
        printf("\n\n\t\tROLL : %d",s.roll);
        printf("\n\n\tSGPA: ");

        for(i=0;i<8;i++)
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
