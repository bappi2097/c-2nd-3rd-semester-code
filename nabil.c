#include<stdio.h>
#include<conio.h>
#include<string.h>
#include<windows.h>
#include<stdlib.h>

struct patient
{

    char name[20];
    char nid[20];
    char sex[20];
    char phone[20];
    char blood[20];
    char pass[20];
} p;

struct donor
{

    char name2[20];
    char nid2[20];
    char sex2[20];
    char phone2[20];
    char blood2[20];
    char pass2[20];
} d;


void logo();
void loader();
void start();
void reg();
void dreg();
void patient();
void logInPatient();
void logInDonor();
void donor();
void admin();
void blood();
void insert();
void disp();
void search();
void update();
void deleting();


main()
{

    logo();
    loader();
    start();
    reg();

    admin();
    logInDonor();
    logInPatient();
    blood();
    insert();
    disp();
    search();
    update();
    deleting();
}

void loader()
{
    int i;
    system("cls");
    printf("please wait loading...");
    for(i=0; i<50; i++)
    {
        Sleep(30);
        printf("%c",219);
    }
    system("cls");

}
void logo()
{

    system("color 3A");
    printf("\n\n\n\n\n\t\t\t\t\t\t\t###################################");
    printf("\n\n\n\n\t\t\t\t\t\t\t\tMd Nafish Sadik Islam\n\t\t\t\t\t\t\t\tID:172-35-2137\n\t\t\t\t\t\t\t\tProject Blood Bank\n\t\t\t\t\t\t\t\tDepartment of Software Engineering\n\t\t\t\t\t\t\t\tDaffodil International univeraity\n\n\n\n");
    printf("\n\t\t\t\t\t\t\t###################################");
    //printf("\n\n\n\t\t\t\tpress any key to continue......\n\n\n");
    system("pause");
    getch();

}


void start()
{
    int n;
    int m;
    system("color 2E");
    printf("\n\t\t\t\t\tBLOOD BANK SYSTEM\n\n");
    printf("\t\t\tpress '1' for registration\n\t\t\tpress '2' for log in\n\t\t\tpress '3' for Admin\n");
    printf("\t\t\tchoice:");
    scanf("%d",&n);
    printf("\n");
    system("cls");
    if(n==1)
    {
        printf("press '1' for donor reg\npress '2' for preg\n");
        printf("choice:");
        scanf("%d",&m);
        system("cls");
        if(m==1)
        {
            dreg();
        }
        else if(m==2)
        {
            reg();
        }
        else
        {
            printf("invalid number..");
        }



    }
    if(n==2)
    {

        int c;
        printf("1.Login for Patient.\n2.Login for Donor.");
        scanf("%d", &c);
        switch(c)
        {
        case 1:
        {
            logInPatient();
            break;
        }
        case 2:
        {
            logInDonor();
            break;
        }
        }

    }
    if(n==3)
    {
        admin();
    }

    system("CLS");
}

void reg()
{


    FILE*patient;
    patient=fopen("patient.txt","a");
    struct patient p;


    printf("\tpatient reg info:\n\n");
    printf("\nEnter your name:");
    fflush(stdin);
    gets(p.name);
    printf("\nnid:");
    gets(p.nid);
    printf("\nsex:");
    gets(p.sex);
    printf("\nphone number:");
    gets(p.phone);
    printf("\nblood group:");
    gets(p.blood);
    printf("\npassword:");
    gets(p.pass);
    fwrite(&p,sizeof(p),1,patient);
    fclose(patient);

    system("CLS");
}
void logInPatient()
{
    char id[20];
    char pass[20];

    FILE*patient;
    patient=fopen("patient.txt","r");
    struct patient p;
    printf("user id:");
    scanf("%s",&id);
    printf("password:");
    scanf("%s",&pass);
    while(fread(&p,sizeof(p),1,patient))
    {
        if(strcmp(id,p.name)==0)
        {
            if(strcmp(pass,p.pass)==0)
            {
                printf("successful login...\n\n");
            }
        }
        else
        {
            printf("invalid password\n\n");
        }
    }

    fclose(patient);
}

void logInDonor()
{
    char id2[20];
    char pass3[20];

    FILE*donor;
    donor=fopen("donor.txt","r");
    struct donor d;
    printf("user id:");
    scanf("%s",&id2);
    printf("password:");
    scanf("%s",&pass3);
    while(fread(&d,sizeof(d),1,donor))
    {
        if(strcmp(id2,d.name2)==0)
        {
            if(strcmp(pass3,d.pass2)==0)
            {
                printf("successful login...\n\n");
            }
        }
        else
        {
            printf("invalid password\n\n");
        }
    }

    fclose(donor);
}
void dreg()
{

    FILE*donor;
    donor=fopen("donor.txt","a");
    struct donor d;


    printf("\tDonor registration info:");

    printf("\nEnter your name:");
    fflush(stdin);
    gets(d.name2);
    printf("\nnid:");
    gets(d.nid2);
    printf("\nsex:");
    gets(d.sex2);
    printf("\nphone number:");
    gets(d.phone2);
    printf("\nblood group:");
    gets(d.blood2);
    printf("\npassword:");
    gets(d.pass2);
    fwrite(&d,sizeof(d),1,donor);
    fclose(donor);
    system("CLS");
}
void admin()
{
    char id[20];
    char pass[20];

    printf("\nAdmin Login\n\n");
    printf("\nuser name: \n");
    scanf("%s",&id);
    printf("\npassword: \n");
    scanf("%s", &pass);

    if(strcmp(id,"nabil")==0)
    {
        if(strcmp(pass,"1234")==0)
        {
            printf("successful login\n");
            system("pause");
            system("cls");
        }
    }
    else
    {
        printf("invalid password\n");
        system("cls");
        admin();
    }
    blood();
}


void blood()
{

    int n;
    printf("Admin option\n\n");
    printf("\n'1'.Insert\n");
    printf("\n'2'.Search\n");
    printf("\n'3'.Update\n");
    printf("\n'4'.deleting\n");
    printf("\n'5'.Display\n");
    printf("choice:");
    scanf("%d",&n);
    if(n==1)
    {
        insert();
    }
    else if(n==2)
    {
        search();
    }
    else if(n==3)
    {
        update();
    }
    else if(n==4)
    {
        deleting();
    }
    else if(n==5)
    {
        disp();
    }
}
void insert()
{

    FILE *donor;
    donor=fopen("donor.txt","a");
    struct donor d;
    printf("Insert record: \n\n");
    fflush(stdin);
    printf("\nEnter your name:");
    gets(d.name2);

    printf("\nnid:");
    gets(d.nid2);

    printf("\nsex:");
    gets(d.sex2);

    printf("\nphone number:");
    gets(d.phone2);

    printf("\nblood group:");
    gets(d.blood2);


    fwrite(&d,sizeof(d),1,donor);
    fclose(donor);
}
void disp()
{
    printf("Display menu\n");
    int k;
    printf("1.Donor\n2. Patient");
    scanf("%d", &k);
    switch(k)
    {
    case 1:
    {

        FILE *donor;
        donor= fopen("donor.txt","r");
        struct donor d;
        printf("\nname\tnid\tsex\tphone\tblood\n\n");
        while (fread(&d,sizeof(d),1,donor))
        {
            printf("\n%s\t%s\t%s\t%s\t%s\n\n",d.name2,d.nid2,d.sex2,d.phone2,d.blood2);
        }
        fclose(donor);
        break;
    }

    case 2:
    {
        FILE *patient;
        patient=fopen("patient.txt","r");
        struct patient p;
        printf("\nname\tnid\tsex\tphone\tblood\n\n");
        while (fread(&p,sizeof(p),1,patient))
        {
            printf("\n%s\t%s\t%s\t%s\t%s\n\n",p.name,p.nid,p.sex,p.phone,p.blood);
        }
        fclose(patient);
        break;
    }

    }

}
void search()
{
    printf("Search menu\n");
    int x;
    printf("1.Donor\n2. Patient");
    scanf("%d", &x);
    switch(x)
    {
    case 1:
    {
        char nm[30];
        FILE *donor;
        donor =fopen("donor.txt","r");
        struct donor d;
        printf("Search by name: ");
        scanf("%s",&nm);
        printf("\nname\tnid\tsex\tphone\tblood\n\n:");
        while (fread(&d,sizeof(d),1,donor))
        {
            if(strcmp(nm,d.name2)==0)
            {
                printf("\n%s\t%s\t%s\t%s\t%s\n\n",d.name2,d.nid2,d.sex2,d.phone2,d.blood2);
                fclose(donor);
            }
            else
            {
                printf("not found");
                fclose(donor);
                system("pause");
                search();
            }
        }
        break;
    }

    case 2:
    {
        char nm2[30];
        FILE *patient;
        patient =fopen("patient.txt","r");
        struct patient p;
        printf("Search by name: ");
        scanf("%s",&nm2);
        printf("\nname\tnid\tsex\tphone\tblood\n\n:");
        while (fread(&p,sizeof(p),1,patient))
        {
            if(strcmp(nm2,p.name)==0)
            {
                printf("\n%s\t%s\t%s\t%s\t%s\n\n",p.name,p.nid,p.sex,p.phone,p.blood);
                fclose(patient);
            }
            else
            {
                printf("not found");
                fclose(patient);
                system("pause");
                search();
            }
        }
        break;
    }
    }
}
void update()
{
    char another;
    char nm[30];
    FILE*donor;
    donor=fopen("donor.txt","r+");
    struct donor d;
    another='y';
    while(another=='y')
    {
        printf("enter the student name to  modyfy: ");
        scanf("%s",&nm);
        rewind(donor);
        while(fread(&d,sizeof(d),1,donor)==1)
        {
            if(strcmp(d.name2,nm)==0)
            {
                printf("\nEnter new name,nid,sex,phone,blood: ");
                scanf("%s%s%s%s%s",&d.name2,&d.nid2,&d.sex2,&d.phone2,&d.blood2);
                fseek(donor,-sizeof(d),SEEK_CUR);
                fwrite(&d,sizeof(d),1,donor);
                break;
            }
        }
        printf("\nModify another record(y/n)");
        fflush(stdin);
        another=getche();
    }
    fclose(donor);
}
void deleting()
{
    char na[7];

    printf("PLEASE ENTER THE NAME YOU WANT TO DELETE:");
    scanf("%s", &na);
    FILE *donor;
    int i;
    donor=fopen("donor.txt","r+");
    struct donor d;
    while(fread(&d,sizeof(d),1,donor))

    {
        if (strcmp(na, d.name2)==0)
        {
            for(i=0; i<20; i++)
            {
                d.name2[i]='\0';
            }
            for(i=0; i<20; i++)
            {
                d.nid2[i]='\0';
            }
            for(i=0; i<20; i++)
            {
                d.sex2[i]='\0';
            }
            for(i=0; i<20; i++)
            {
                d.phone2[i]='\0';
            }
            for(i=0; i<20; i++)
            {
                d.blood2[i]='\0';
            }
            for(i=0; i<20; i++)
            {
                d.pass2[i]='\0';
            }
            fseek(donor,-sizeof(d),SEEK_CUR);
            fwrite(&d,sizeof(d),1,donor);
            fclose(donor);

        }
        else
        {
            printf("not found");
            fclose(donor);
            system("pause");
            deleting();
        }
    }
}
