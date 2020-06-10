#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>
#include <math.h>
#include <windows.h>
void login();
void createacc();
void viewacc();

struct account_holder
{
    char name[50];
    char father_name[50];
    char mother_name[50];
    char phone_number[50];
    char gender[20];
    char age[20];
    char pin[50];
    char acc_num[7];
}a;
int auto_acc[];
char auto_acc1[7];
char phn_num[50];
char log_name[50],log_pin[50];
int count=0;
void main()

{
    system("color 3f");
    printf("\n\n\n\n\t\t$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$\n\n\n\t\t\t\t\tMD. ASHIQUR RAHMAN DIPTA\n\n\n\t\t\t\t\tID:172-35-2149\n\n\n\t\t\t\t\tPROJECT NAME: BANKING MANAGEMENT SYSTEM.\n\t\t\t\t\t \n\n\n\t\t$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$\n\n\n\n\t\t");
    system("pause");
    system("cls");
    home();
}
void home()
{
    printf("\n\n");
    printf("\t\t\t\t\t\t\t\t$$$$$$$$$$                  $$$$$$$$$$\n");
    printf("\t\t\t\t\t\t\t\t$$$$$$$$                      $$$$$$$$\n");
    printf("\t\t\t\t\t\t\t\t$$$$$$  BANK MANAGEMENT SYSTEM  $$$$$$\n");
    printf("\t\t\t\t\t\t\t\t$$$$$$$$                      $$$$$$$$\n");
    printf("\t\t\t\t\t\t\t\t$$$$$$$$$$                  $$$$$$$$$$\n");


    int select;
    printf("\n 1. LOG IN. \n 2. CREATE NEW ACCOUNT.\n 3. VIEW ACCOUNT.\n 4. SEARCH ACCOUNT:\n 5. Exit:\n");
    printf("\nSELECT AN OPTION:\n");
    scanf("%d", &select);


    switch(select)

    {
        case 1:
            system("cls");
            login();
            break;
        case 2:
            system("cls");
            createacc();
            break;
        case 3:
            system("cls");
            viewacc();
            break;
        case 4:
            system("cls");
            ser_account();
            break;
        case 5:
            exit(0);
            break;
    }

}
void login()
{
    char username[50];
    char pin[50];
    FILE *fp;
    fp=fopen("account.txt", "r");
    printf("\nENTER YOUR USERNAME:\n");
    scanf("%s", username);

    printf("\nENTER YOUR PIN:\n");
    scanf("%s", pin);

    while(fread(&a, sizeof(a), 1, fp))
    {
        if(strcmp(username, a.name)==0)
        {
           if(strcmp(pin, a.pin)==0)
            {
                printf("\nWELCOME, YOU HAVE SUCCESSFULLY LOG IN YOUR ACCOUNT.\n");
                fclose(fp);
                user_home();
                break;
            }
        }
    }
    fclose(fp);
    printf("\n\n\t\t\tWrong Input\n\n\n\n");
    system("pause");
    system("cls");
    login();
}
void user_home()
{
    exit(0);
}
void createacc()
{
    account_number();
    FILE *fp;
    fp=fopen("account.txt", "a");
    struct account_holder a;
    printf("\n ENTER USERNAME:\n");
    scanf("%s", a.name);
    strcpy(log_name,a.name);
    printf("\nENTER FATHER NAME:\n");
    scanf("%s", a.father_name);
    printf("\nENTER MOTHER NAME:\n");
    scanf("%s", a.mother_name);
    phone_num();
    strcpy(a.phone_number, phn_num);
    printf("\nGENDER:\n");
    scanf("%s", a.gender);
    printf("\nAGE:\n");
    scanf("%s", a.age);
    printf("\nCHOOSE A PIN:\n");
    scanf("%s", a.pin);
    strcpy(a.acc_num,auto_acc1);
    fwrite(&a, sizeof(a), 1, fp);
    fclose(fp);
    account_number();
    char choice='\0';
    printf("\n\n\n\t\tYour Account Number Is %s",a.acc_num);
    printf(",\n....Continue as %s?\n\n\n\t\t\tY.Yes\t\tN.No",log_name);
    printf("\n\n\t\t\tEnter Your Choice:");
    choice=getche();
    switch(choice)
    {
    case 'Y':
    case 'y':
        system("cls");
        con_log();
        break;
    case 'N':
    case 'n':
        system("cls");
        home();
        break;
    }

}
void con_log()
{
    printf("\nWELCOME, YOU HAVE SUCCESSFULLY LOG IN YOUR ACCOUNT.\n");
}
void phone_num()
{

    printf("\nENTER PHONE NUMBER:\n");
    scanf("%s", phn_num);
    if(strlen(phn_num)!=11)
    {
        printf("\nPlease input 11 digit phone number\n");
        getch();
        phone_num();
    }
    system("cls");
}

void viewacc()
{
    int i;
    FILE *fp;
    fp=fopen("account.txt", "r");
    struct account_holder a;
    while(fread(&a, sizeof(a),1,fp))
    {
        printf("NAME: %s\nPhone Number: %s\nGender: %s\nAge: %s\n", a.name, a.phone_number, a.gender, a.age);
        printf("Account Number:");
        printf("%s\n",a.acc_num);
    }
    fclose(fp);
    printf("\n\n\t\t\t");
    system("pause");
    char choice='\0';
    printf("\n\n\n\t\t\t\t1.Home\t\t2.Exit");
    printf("\n\n\t\t\tEnter Your Choice:");
    choice=getche();
    switch(choice)
    {
    case '1':
        system("cls");
        home();
        break;
    case '2':
        exit(0);
        break;
    default:
        printf("\n\n\t\t\twrong input");
        getch();
        system("cls");
        viewacc();
        break;
    }
}
void account_number()
{
    count=1;
    FILE *fp;
    fp=fopen("account.txt", "r");
    struct account_holder a;
    while(fread(&a,sizeof(a),1,fp))
    {
        count++;
    }
    fclose(fp);
    int i,j,k,c;
    for(j=0;j<count+1;j++)
    {
        for(i=0;i<6;i++)
        {
            auto_acc[i]=(rand()%5)+1;
            switch(auto_acc[i])
            {
            case 1:
                auto_acc1[i]='1';
                break;
            case 2:
                auto_acc1[i]='2';
                break;
            case 3:
                auto_acc1[i]='3';
                break;
            case 4:
                auto_acc1[i]='4';
                break;
            case 5:
                auto_acc1[i]='5';
                break;
            case 6:
                auto_acc1[i]='6';
                break;
            case 7:
                auto_acc1[i]='7';
                break;
            case 8:
                auto_acc1[i]='8';
                break;
            case 9:
                auto_acc1[i]='9';
                break;
            case 0:
                auto_acc1[i]='0';
                break;
            }
        }
    }
}
void ser_account()
{
    char ser_acc[7];
    printf("\n\n\t\tEnter Account Number:");
    scanf("%s",ser_acc);
    FILE *fp;
    fp=fopen("account.txt","r");
    while(fread(&a,sizeof(a),1,fp))
    {
        if(strcmp(a.acc_num,ser_acc)==0)
        {
            printf("NAME: %s\nPhone Number: %s\nGender: %s\nAge: %s\n", a.name, a.phone_number, a.gender, a.age);
            fclose(fp);
            getch();
            system("cls");
            home();
        }
    }
    fclose(fp);
    printf("\n\n\t\tThis Account Doesn't Exist");
    getch();
    system("cls");
    home();
}
