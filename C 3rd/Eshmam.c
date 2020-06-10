#include<stdlib.h>
#include<stdio.h>
#include <string.h>

void manager();
void customer();
void ticket();
void animation();
struct info
{
    char location[20], name[20], place[20], nos[20],password[10];
}s;



void ticket()
{
    int number,mpass,musern,clogin,cpass,c,man2;
    char n1,n2,n3,c1,c2,nmname,nmpass,rplogin,rppass,npname,npaddress,npemail,nppass,nppass2,student;

    struct info s;
    FILE *fp;
    fp=fopen("record.txt", "a");
    printf("\n");
    printf("Enter your location: ");
    scanf("%s", &s.location);
    printf("Enter your name: ");
    scanf("%s", &s.name);

    printf("Enter travel to: ");
    scanf("%s", &s.place);

    printf("Enter your NOE: ");
    scanf("%s", &s.nos);

    printf("You Register Successfully...");

    fwrite(&s, sizeof(s),1,fp);

    fclose(fp);
}


int main()
{
    system("color 9f");
    puts("\n\n\n\n\t\t\t\t\t\t\t\t\t\t\n\n\t\t\t\t\t\t\t\t\tW E L C O M E\tTO\n\t\t\t\t\t\t\t\t\tB I S M I L L A H\n\t\t\t\t\t\t\t\t\tT R A V E L S");
    puts("\n\n\n\n\n\n\n\n\t\t\t\t\t\n\t\t\t\t\t\t\t\tM U H T A S I M\t\tE S H M A M \n\n\t\t\t\t\n\t\t\t\t\t\t\t\tDEPARTMENT OF SWE\n\n\t\t\t\t\n\t\t\t\t\t\t\t\tDAFFODIL INTERNATIONAL UNIVERSITY\n\n\n");
    system("pause");
    system("cls");
    choice_home();
    return 0;
}
choice_home()
{
    char choice;
    printf("1.Manager\n\n2.Customer's login\n\n3.Ticket\n\nEnter choice :");
    scanf("%c",&choice);
    switch(choice)
    {
    case '1' :
        manager();
        break;
    case '2' :
        customer();
        break;
    case '3' :
        ticket();
        break;
    default:
        printf("\n\nWrong Choice\n\n");
        choice_home();
        break;
    }
    return 0;
}
void manager() //manager
{
   int number,mpass,musern,clogin,cpass,c,man2;
   char n1,n2,n3,c1,c2,nmname,nmpass,rplogin,rppass,npname,npaddress,npemail,nppass,nppass2;
   printf("1.Manager\n\n");
   switch(number)
   {
    case 1:
        printf("1..Registered manager ? :\n");
        printf("2..new manager register first :\n");
        printf("\n\nEnter choice");
        scanf("%d",&c1);
        if( c1==2)
        {
            printf("enter name :");
            scanf("%s",&nmname);
            printf("enter password :");
            scanf("%s",&nmpass);
            if (nmpass==1996)
            {
                printf("REGISTERED !!");
            }
            else
            {
                printf("RETRY\n");
                manager();
            }
            break;
        }
        else
        {
            printf("Enter manager code : \n");
            scanf("%d",&musern);
            system("cls");
            if(musern==1234)
            {
                printf("\t\t\t\tWelcome eshmam  ");
                printf("select one\n\t1.Change\n\t\n\t2.Add\n\n\t3.Update\nenter choice :\t");
                scanf("%d",&man2);
                if (man2==1)
                {
                    printf("change");
                }
                else if (man2==2)
                {
                    printf("Add");
                }
                else
                {
                    printf("update");
                }
            }
            else
            {
                printf("Wrong input");
            }
            break;
        }
    }
}
customer()
{
    int c;
    printf("press 1 \tAlready registered?\t\t\tLogin \n ");
    printf ("press 2 \tNew customer\t\t\tplease sign up \n");
    printf ("press 3 \tCheck flight schedule \n");
    printf("please enter choice :");
    scanf("%d",&c);
    switch(c)
    {
    case 1:
        customer_login();
        break;
    case 2:
        customer_new();
        break;
    }
/*    else
    {
        printf("check flight schedule");                     //problem
        FILE *fp;
        int n;
        fscanf(fp,"%d",&n);
        printf("%d\n",n);
        fclose(fp);
    }*/
}
customer_login()
{
    char rplogin[20],rppass[10];
    FILE *fp;
    fp = fopen("Newfile.txt","r");
    printf("\tLogin :\n ");
    printf("\t\t\\\\\\\\\\\\ Enter details\t//////\n");
    printf("Name :");
    scanf("%s",&rplogin);
    printf("Password :");
    scanf("%s",&rppass);
    while(fread(&s,sizeof(s),1,fp))
    {
        if(strcmp(s.name,rplogin)==0)
        {
            if(strcmp(s.password,rppass)==0)
            {
                printf("\n==================Welcome====================\n");
            }
            else
            {
                printf("\nWrong Password");
            }
        }
        else
        {
            printf("\nWrong Name");
        }
    }
    fclose(fp);
    return 0;
}
customer_new()
{
    FILE *fp;
    fp = fopen("Newfile.txt","a");
    printf("New customer\t\n>>please sign up \n");
    printf("enter name :");
    scanf("%s",&s.name);
    printf("enter address :");
    scanf("%s",&s.location);
    printf("Set password :");
    scanf("%s",&s.password);
    printf("registered");
    fwrite(&s,sizeof(s),1,fp);
    fclose(fp);
}
