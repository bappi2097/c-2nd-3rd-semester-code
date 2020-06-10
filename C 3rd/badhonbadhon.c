#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <windows.h>
#include<conio.h>
#include<time.h>
struct p
{
char SERIAL[20];
char name[25];
char age[10],gender[7],date[20];
char d_doc[150];
char d_doa[150];
char seril[10];
char serila[10];
char type[25];
char nam[20];
char namo[20];
char d_dol[150];
//char bio[100];

//char d_bio[100];

}s;
char seri[20];
char sero[20];
char no_typ[25];
char dol_cho,dol[150],no_nam[25],na_nam[25];//,bol[100];

char ser[20];
char doc_ch,doc[150],no_name[25],doa_ch,choa,ca,cb,cd,ce,cf,doa[150];
/*struct f
{
  char seril[10];
char serila[10];
char type[25];
char nam[20];
char namo[20];
char d_dol[150];
}z;
char seri[20];
char sero[20];
char no_typ[25];
char dol_cho,dol[150],no_nam[25],na_nam[25];//,bol[100];*/

//char no_bio[100];

struct a
{
  char bio[100];
  char d_bio[100];
}ss;
char bol[100];char no_bio[100];
void intro()
{

    printf("\n\t\tProject Title: HOSPITAL MANAGEMENT SYSTEM.\n\n\n\n\n\t\tCompleted By: BADHON KUMAR SARKAR.\n\n\t\tID: 172-35-2092.\n\n\t\tSection: B.\n\n\t\tBatch: 23.\n\n\t\tDepartment Of Software Engineering(SWE).");
    printf("\n\n\t\tDaffodil International University\n\n\n\t\t ");
    system("pause");
     loader();
    system("cls");
    Time();

}
void introduction()
{
    printf("\n\t\t\t HOSPITAL MANAGEMENT SYSTEM.\n\n\n\n\n");
    system("pause");
    system("cls");
    Time();

}
int Time()
{
     time_t currentTime;
    time(&currentTime);
    printf("%s\n",ctime(&currentTime));
}
void main_menu()
{
    char n;
    printf("\n\n\n\tMAIN MENU\n\t\t  \t\n");

    printf("\n\t  1.Patient module\n\n\t  2.Doctor module\n\n\t  3.Room Detail's\n\n\t  4.Admin\n\n\t  5.EXIT\n");

    printf("\n\n\n\n\tEnter Your Choice: ");
    n=getche();
    switch(n)
    {
    case '1':

        patient_module();

        break;
    case '2':

    getch();

       doctor_module();

        break;
    case '3':

       room_module();


        break;
    case '4':

        admin_module();

        break;
    case '5':
        loader();
        system("cls");
        recur_exit();
        break;
    default:
        main_menu();
        break;

    }
}
recur_exit()
{
    char ce;
    printf("\n\n\n\n\n\t\t\t\tConfirm Exit\n\n\n");
    printf("\n\n\t\t\tY.Yes\t\t\tN.No\n\n\n\n\n\n\n\n\n");
    fflush(stdin);
    ce='\0';
    printf("\nEnter Your Choice:");
    ce=getche();
    system("cls");
    system("cls");
    switch(ce)
    {
    case 'y':
    case 'Y':
        exit(0);
        return 0;
        break;
    case 'n':
    case 'N':
        main_menu();
        break;
    default:
        recur_exit();
        break;
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
int main()
{
    system("color 3e");
    intro();
  //  introduction();
    printf("\n\t\t\tWelcome To HOSPITAL MANAGEMENT SYSTEM .");
    main_menu();
    getch();
}
room_module()
{

    char ce;
    ce='\0';
       loader();
       system("cls");
       Time();



    printf("\n\n\t\t\t\tRoom page\n\t\t\t__________________________\t\n\n\n\n\t\t1.Doctor's room location\n\n\t\t2.BACK\n\n\n\n\t\t");

    printf("\nEnter Your Choice:");

    ce=getche();

    switch(ce)
    {
    case '1':
        slect_doc();
        break;
    case '2':
        main_menu();
        break;
    default:
        printf("\n\n\t\t\t===========WRONG INPUT==============");
        patient_module();
        break;


    }
}
slect_doc()
{
    system("cls");
    Time();
    printf("\t\t\t\tDOCTOR'S LOCATION\n");
    printf("\n\n\n\n\t\t\t\tNAME\t\tSpecialist Type\n");
    printf("\n\t\t\t1. Dr. Bappi Saha\tCardiologists");
    printf("\n\t\t\t2. Dr. Badhon Sarkar\tGastroenterologists");
    printf("\n\t\t\t3. Dr. Ashiqur Rahman\tDermatologists");
    printf("\n\t\t\t4. Dr. Mehedi Hasan\tEndocrinologists ");
    printf("\n\t\t\t5. Dr. Hadaitu Islam\tMedicine Specialists");

    printf("\n\n\n\t\tEnter Your Choice:");
    doa_ch='\0';
    doa_ch=getche();
    int i=0;
    for(i=0;i<150;i++)
    {
        doa[i]='\0';
    }
    switch(doa_ch)
    {
    case '1':
        strcpy(doa," Dr.Bappi Saha Cardiologist ");
        bad1();
        break;
    case '2':
        strcpy(doa," Dr.Badhon Sarkar  Gastroenterologists ");
       bad2();
        break;
    case '3':
        strcpy(doa," Dr.Ashiqur Rahman  Dermatologists ");
        bad3();
        break;
    case '4':
        strcpy(doa," Dr.Mehedi Hasan  Endocrinologists ");
        bad4();
        break;
    case '5':
        strcpy(doa,"Dr.Hadaitu Islam  Medicine Specialists");
        bad5();
        break;


    default:
        slect_doc();
        break;
    }
}
bad1()
{
    char b;
    printf("\n\n\t\tDear Patient,Dr.Bappi's room no is : 22A , 1st floor.\n\n\n\t\t\tTHANK YOU");
     b=getche();
    switch(choa)
    {
    case 1:
        main_menu();
        break;
    default:
       main_menu();
       break;
    }

}
bad2()
{
    char c;
    printf("\n\n\t\tDear Patient,Dr.Badhon's room no is : 32A , 2nd floor.\n\n\n\t\t\tTHANK YOU");
     c=getche();
    switch(choa)
    {
    case 1:
        main_menu();
        break;
    default:
       main_menu();
       break;

    }
}
bad3()
{
   char d;
    printf("\n\n\t\tDear Patient,Dr.Ashiqur's room no is : 23A , 1st floor.\n\n\n\t\t\tTHANK YOU");
     d=getche();
    switch(choa)
    {
    case 1:
        main_menu();
        break;
    default:
       main_menu();
       break;

}
}
bad4()
{
    char e;
    printf("\n\n\t\tDear Patient,Dr.Mehedi's room no is : 42A , 3rd floor.\n\n\n\t\t\tTHANK YOU");
     e=getche();
    switch(choa)
    {
    case 1:
        main_menu();
        break;
    default:
       main_menu();
       break;

    }
}
bad5()
{
    char g;
    printf("\n\n\t\tDear Patient,Dr.Hadaitu's room no is : 22A , 1st floor.\n\n\n\t\t\tTHANK YOU");
     g=getche();
    switch(choa)
    {
    case 1:
        main_menu();
        break;
    default:
       main_menu();
       break;

    }
}

patient_module()
{
char ce;
    ce='\0';
       loader();
    system("cls");
    Time();


    printf("\n\n\t\t\t\tpatients page\n\t\t\t__________________________\t\n\n\n\n\t\t1.Select Doctor\n\n\t\t2.Check for new Doctor\n\n\t\t3.BACK\n\n\n\n\t\t");
    printf("\nEnter Your Choice:");
    ce=getche();
    switch(ce)
    {
    case '1':
        select_doc();
        break;
    case '2':
        new_doc();
        break;
    case '3':
        main_menu();
        break;
    default:
        printf("\n\n\t\t\t===========WRONG INPUT==============");
        patient_module();
        break;

    }
}
new_doc()
{
        char ce;
    ce='\0';
       loader();
    system("cls");
    Time();
    via();
    printf("\n\n\n\t\tSorry!! They haven't joined yet.\n\n\t\t\tTHANK YOU.");
    getch();
    patient_module();


}

select_doc()
{
    system("cls");
    Time();
  //   printf("\t\t\t\tSELECT DOCTOR\n");
  //  via();
    printf("\t\t\t\tSELECT DOCTOR\n");
    printf("\n\n\n\n\t\t\t\tNAME\t\tSpecialist Type\n");
    printf("\n\t\t\t1. Dr. Bappi Saha\tCardiologists");
    printf("\n\t\t\t2. Dr. Badhon Sarkar\tGastroenterologists");
    printf("\n\t\t\t3. Dr. Ashiqur Rahman\tDermatologists");
    printf("\n\t\t\t4. Dr. Mehedi Hasan\tEndocrinologists ");
    printf("\n\t\t\t5. Dr. Hadaitu Islam\tMedicine Specialists");

    printf("\n\n\n\t\tEnter Your Choice:");
    doc_ch='\0';
    doc_ch=getche();
    int i=0;
    for(i=0;i<150;i++)
    {
        doc[i]='\0';
    }
    switch(doc_ch)
    {
    case '1':
        strcpy(doc," Dr.Bappi Saha Cardiologist ");
        recursive();
        break;
    case '2':
        strcpy(doc," Dr.Badhon Sarkar  Gastroenterologists ");
        recursive();
        break;
    case '3':
        strcpy(doc," Dr.Ashiqur Rahman  Dermatologists ");
        recursive();
        break;
    case '4':
        strcpy(doc," Dr.Mehedi Hasan  Endocrinologists ");
        recursive();
        break;
    case '5':
        strcpy(doc,"Dr.Hadaitu Islam  Medicine Specialists");
        recursive();
        break;




    default:
        select_doc();
        break;
    }
}
int recursive()
{
      //loader();
    system("cls");
    printf("\n\n\t\t\t\tpatients page\n\t\t\t__________________________\t\n\n\n\n\t\t1.Patient's Registration\n\n\t\t2.Registered Patients\n\n\t\t3.search patient\n\n\t\t4.BACK\n\n\n\n\t\t");
    char choose;
    printf("\n\n\t\tEnter your choice: ");
    choose=getche();
    switch(choose)
    {
    case '1':
        insert();
        break;
    case '2':
        view();
        break;
    case '3':
        search();
        break;
    case '4':
        system("cls");
        main_menu();
        break;
    default:
        printf("\nWrong Input");
        recursive();
        break;
    }
}
int insert()
{
    FILE*fp;
    struct p s;
    fp=fopen("pol.txt","r");
    printf("\nEnter serial: ");
    scanf("%s",&ser);
    while(fread(&s,sizeof(s),1,fp))
    {
        if(strcmp(s.d_doc,doc)==0)
        {
            if(strcmp(s.SERIAL,ser)==0)
            {
                printf("\n\nSorry This Serial Exists\n");
                system("pause");
                recursive();
                break;
            }
        }
    }
    fclose(fp);
    fp=fopen("pol.txt","a");
    strcpy(s.SERIAL,ser);
    printf("\nEnter Name: ");
    scanf("%s",&s.name);
    strcpy(no_name,s.name);
    printf("\nEnter Age: ");
    scanf("%s",&s.age);
    int i=0;
    for(i=0;i<150;i++)
    {
        s.d_doc[i]='\0';
    }
    strcpy(s.d_doc,doc);
    strcpy(doc,s.d_doc);
    printf("\nEnter Date(DD/MM/YYYY):");
    scanf("%s",&s.date);
    fwrite(&s,sizeof(s),1,fp);
    fclose(fp);
    //recursive();
    notify();
}
notify()
{
    FILE*fp;
    fp=fopen("pol.txt","r");
    struct p s;
    while(fread(&s,sizeof(s),1,fp))
    {
        if(strcmp(s.d_doc,doc)==0)
        {
            if(strcmp(s.SERIAL,ser)==0)
            {
                printf("\n\tDear %s,\n\tYour Doctor Is %s , Meeting Date %s .\n\tPlease Attend In the day At 7.00am . Serial No. %s",s.name,s.d_doc,s.date,s.SERIAL);

            }
        }
    }
    getch();
    fclose(fp);
    recursive();
}
int view()
{
    FILE*fp;
    fp=fopen("pol.txt","r");
    struct p s;
    printf("\nSERIAL\t  Name\t  Age\t  Date\t\n");
    while(fread(&s,sizeof(s),1,fp))
    {
        if(strcmp(doc,s.d_doc)==0)
        {
            printf("%s\t  %s\t  %s \t %s\n",s.SERIAL,s.name,s.age,s.date);
        }
    }
    getch();
    fclose(fp);
    recursive();
}
int search()
{
    char serial[20];
    FILE*fp;
    fp=fopen("pol.txt","r");
    struct p s;
    printf("\nsearch serial: ");
    scanf("%s",&serial);
    while(fread(&s,sizeof(s),1,fp))
    {
        if(strcmp(s.d_doc,doc)==0)
        {
            if(strcmp(serial,s.SERIAL)==0)
            {
                printf("SERIAL\tName\tAge\tDate\n");
                printf("%s\t %s\t %s\t %s\t %s\n",s.SERIAL,s.name,s.age,s.d_doc,s.date);
                getch();
            }
        }
    }
    fclose(fp);
    recursive();
}
doctor_module()
{
    char ce;
    ce='\0';
       loader();
    system("cls");
    Time();
    printf("\n\n\t\t\t\tDoctors page\n\t\t\t__________________________\t\n\n\n\n\t\t1.LIST OF ALL DOCTORS\n\n\t\t2.SEE UPDATES\n\n\t\t3.BACK\n\n\n\n\t\t");
    printf("\nEnter Your Choice:");
    ce=getche();
    switch(ce)
    {
    case '1':
        list_doc();
        break;
    case '2':
        see_updates();
        break;
    case '3':
        main_menu();
        break;
    default:
        printf("\n\n\t\t\t===========WRONG INPUT==============");
        doctor_module();
        break;
    }
}
see_updates()
{
    system("cls");
    Time();
    via();
        printf("\n\n\n\n\t\tSorry!! You are not yet employed. We will let you know.\n\t\t\t\tThank You. ");
//printf("Sorry!! They haven't joined yet.");
    getch();
    doctor_module();
}
list_doc()
{
    system("cls");
    Time();
    printf("\t\t\t\tLIST OF ALL DOCTORS\n");
    printf("\n\n\n\n\t\t\t\tDOCTORS NAME\t\t\n");
    printf("\n\n\t\t\t1. Dr. Bappi Saha");
    printf("\n\n\t\t\t2. Dr. Badhhon Sarkar");
    printf("\n\n\t\t\t3. Dr. Ashiqur Rahman");
    printf("\n\n\t\t\t4. Dr. Mehedi Hasan");
    printf("\n\n\t\t\t5. Dr. Hadaitu Islam");

    printf("\n\n\n\t\tEnter Your Choice:");
    doc_ch='\0';
    doc_ch=getche();
    int i=0;
    for(i=0;i<150;i++)
    {
        doc[i]='\0';
    }
    switch(doc_ch)
    {
    case '1':
        strcpy(doc," Dr.Bappi Saha Cardiologist ");
        bappi();
        break;
    case '2':
        strcpy(doc," Dr.Badhhon Sarkar  Gastroenterologists ");
        badhon();
        break;
    case '3':
        strcpy(doc," Dr.Ashiqur Rahman  Dermatologists ");
        ashiq();
        break;
    case '4':
        strcpy(doc," Dr.Mehedi Hasan  Endocrinologists ");
        mehedi();
        break;
    case '5':
        strcpy(doc,"Dr.Hadaitu Islam  Medicine Specialists");
        hadaitu();
        break;


    default:
        list_doc();
        break;
    }
}
bappi()
{
lob();
}
    lob()
{
  int choice;
  printf("\n\n\t\tyou need to Login First");
  printf("\n\npress 1 for login:");
  scanf("%d",&choice);
 switch(choice)
  {
      case 1:
          login1();
          break;

      default :

        printf("\n\n\n\n\t\t Wrong Input\n");

        printf("\n\t\t\t\t\t\tPlease Input Correct Key");
        getch();
       login1();

  }

}
login1(){
      system("cls");
    printf("\n\n\t\t\t\tDoctor page\n\t\t\t__________________________\t\n\n\n\n\t\t");
    printf("\n\n\n\t\tEnter User Name : ");
    char admin_email[25],admin_password[10];
    scanf("%s",admin_email);
    char c=' ',ab[10];
    int i=0;
    if(strcmp(admin_email,"bappi")==0)
    {
        printf("\n\n\t\tEnter Your Password:");
        while (i<=7)
        {
            admin_password[i]=getch();
            c=admin_password[i];
            if(c==13)
            {
                break;
            }
            else
            {
                printf("*");
            }
            i++;
        }
        admin_password[i]='\0';
        if(strcmp(admin_password,"112233")==0)
        {
            printf("\n\n\n\t\tWelcome Dr.Bappi Islam.\t   \n\n\t\t\tYou Have Successfully logged In.");
        }
        else
        {
            system("cls");
            printf("\n\n\n\n\n\n\n\n\n\n\n\n\t\t\t\tWRONG PASSWORD\n\t\t\t");
             printf("\n\n\t\t\t\tplease try again\n\t\t\t");
            getch();
            login1();
        }
    }
    else
    {
        system("cls");
        printf("\n\n\n\n\n\n\n\n\n\n\n\n\t\t\t\tWRONG USER NAME\n\t\t\t");
        printf("\n\n\t\t\t\tplease try again\n\t\t\t");
        getch();
        login1();
    }
printf("\n\n\t\t\t1.Add your bio.\n");
printf("\t\t\t2.See your bio.\n");

            int chooze;
 printf("\n\nEnter your choise: ");
    scanf("%d",&chooze);
    switch(chooze)
    {
    case 1:
        bappi_insert();
        break;
    case 2:
        bappi_view();
        break;

    default:
        system("cls");
        main_menu();
        break;


    }
}
bappi_insert()
{
    FILE*fc;
    struct a ss;
    fc=fopen("bappi.txt","a");

    printf("Enter your bio: ");
    scanf("%s",&ss.bio);

    fc=fopen("bappi.txt","a");
    strcpy(ss.bio,no_bio);

    fwrite(&s,sizeof(ss),1,fc);
    fclose(fc);
    noti();
   // list_doc();
}
bappi_view()
{
    FILE*fc;
    fc=fopen("bappi.txt","r");
    struct a ss;
    printf("\n\nAbout Cardiology:\n",ss.bio);
    printf("A cardiologist is a physician who is certified to treat problems of the cardiovascular system—the heart, arteries, and veins. Cardiology is classified as an internal medicine subspecialty.");
    printf("A cardiologist has  3 or more years in other special training, specifically in cardiology ");
    printf("\n\nDr.Bappi's Bio:\n",ss.bio);
    while(fread(&s,sizeof(s),1,fc))
    {
        if(strcmp(bol,ss.d_bio)==0)
        {
             printf("%s\n",ss.bio);
        }
    }


    getch();
    fclose(fc);
    doctor_module();


}
noti()
{
    FILE*fc;
    fc=fopen("bappi.txt","r");
    struct a ss;
    while(fread(&s,sizeof(ss),1,fc))
    {



                printf("\n\tDr. Bappi,\n\n\tYour bio successfully added.");



    }
    getch();
    fclose(fc);
    doctor_module();
}
badhon()
{
loc();
}
    loc()
{
  int choice;
  printf("\n\n\t\tyou need to Login First");
  printf("\n\npress 1 for login:");
  scanf("%d",&choice);
 switch(choice)
  {
      case 1:
          login2();
          break;

      default :

        printf("\n\n\n\n\t\t Wrong Input\n");

        printf("\n\t\t\t\t\t\tPlease Input Correct Key");
        getch();
        login2();
  }

}
login2(){
      system("cls");
    printf("\n\n\t\t\t\tDoctor page\n\t\t\t__________________________\t\n\n\n\n\t\t");
    printf("\n\n\n\t\tEnter User Name : ");
    char admin_email[25],admin_password[10];
    scanf("%s",admin_email);
    char c=' ',ab[10];
    int i=0;
    if(strcmp(admin_email,"badhon")==0)
    {
        printf("\n\n\t\tEnter Your Password:");
        while (i<=7)
        {
            admin_password[i]=getch();
            c=admin_password[i];
            if(c==13)
            {
                break;
            }
            else
            {
                printf("*");
            }
            i++;
        }
        admin_password[i]='\0';
        if(strcmp(admin_password,"112233")==0)
        {
            printf("\n\n\n\t\tWelcome Dr.Badhon Islam.\t   \n\n\t\t\tYou Have Successfully logged In.");
        }
        else
        {
            system("cls");
            printf("\n\n\n\n\n\n\n\n\n\n\n\n\t\t\t\tWRONG PASSWORD\n\t\t\t");
             printf("\n\n\t\t\t\tplease try again\n\t\t\t");
            getch();
            login2();
        }
    }
    else
    {
        system("cls");
        printf("\n\n\n\n\n\n\n\n\n\n\n\n\t\t\t\tWRONG USER NAME\n\t\t\t");
        printf("\n\n\t\t\t\tplease try again\n\t\t\t");
        getch();
        login2();
    }
printf("\n\n\t\t\t1.Add your bio.\n");
printf("\t\t\t2.See your bio.\n");

            int chooe;
 printf("\n\nEnter your choise: ");
    scanf("%d",&chooe);
    switch(chooe)
    {
    case 1:
        badhon_insert();
        break;
    case 2:
        badhon_view();
        break;

    default:
        system("cls");
        main_menu();
        break;


    }
}
badhon_insert()
{
   FILE*fc;
    struct a ss;
    fc=fopen("badhon.txt","a");

    printf("Enter your bio: ");
    scanf("%s",&ss.bio);

    fc=fopen("badhon.txt","a");
    strcpy(ss.bio,no_bio);

    fwrite(&s,sizeof(ss),1,fc);
    fclose(fc);


    badhon_notif();
}
badhon_notif()
{
  FILE*fc;
    fc=fopen("badhon.txt","r");
    struct a ss;
    while(fread(&s,sizeof(ss),1,fc))
    {



                printf("\n\tDr. Badhon,\n\n\tYour bio successfully added.");



    }
    getch();
    fclose(fc);
    doctor_module();
}
badhon_view()
{
     FILE*fc;
    fc=fopen("badhon.txt","r");
    struct a ss;
    printf("\n\nAbout Gastroenterology:\n",ss.bio);
    printf("Gastroenterology (MeSH heading) is the branch of medicine focused on the digestive system and its disorders. Diseases affecting the gastrointestinal tract.");
    printf("\n\nDr.Badhon's Bio:\n",ss.bio);
    while(fread(&s,sizeof(s),1,fc))
    {
        if(strcmp(bol,ss.d_bio)==0)
        {
             printf("%s\n",ss.bio);
        }
    }


    getch();
    fclose(fc);
    doctor_module();
}


ashiq()
{
loe();
}
    loe()
{
  int choice;
  printf("\n\n\t\tyou need to Login First");
  printf("\n\npress 1 for login:");
  scanf("%d",&choice);
 switch(choice)
  {
      case 1:
          login3();
          break;

      default :

        printf("\n\n\n\n\t\t Wrong Input\n");

        printf("\n\t\t\t\t\t\tPlease Input Correct Key");
        getch();
        login3();
  }

}
login3(){
      system("cls");
    printf("\n\n\t\t\t\tDoctor page\n\t\t\t__________________________\t\n\n\n\n\t\t");
    printf("\n\n\n\t\tEnter User Name : ");
    char admin_email[25],admin_password[10];
    scanf("%s",admin_email);
    char c=' ',ab[10];
    int i=0;
    if(strcmp(admin_email,"ashiq")==0)
    {
        printf("\n\n\t\tEnter Your Password:");
        while (i<=7)
        {
            admin_password[i]=getch();
            c=admin_password[i];
            if(c==13)
            {
                break;
            }
            else
            {
                printf("*");
            }
            i++;
        }
        admin_password[i]='\0';
        if(strcmp(admin_password,"112233")==0)
        {
            printf("\n\n\n\t\tWelcome Dr.Ashiq Islam.\t   \n\n\t\t\tYou Have Successfully logged In.");
        }
        else
        {
            system("cls");
            printf("\n\n\n\n\n\n\n\n\n\n\n\n\t\t\t\tWRONG PASSWORD\n\t\t\t");
             printf("\n\n\t\t\t\tplease try again\n\t\t\t");
            getch();
            login3();
        }
    }
    else
    {
        system("cls");
        printf("\n\n\n\n\n\n\n\n\n\n\n\n\t\t\t\tWRONG USER NAME\n\t\t\t");
        printf("\n\n\t\t\t\tplease try again\n\t\t\t");
        getch();
        login3();


    }
    printf("\n\n\t\t\t1.Add your bio.\n");
printf("\t\t\t2.See your bio.\n");

            int chooe;
 printf("\n\nEnter your choise: ");
    scanf("%d",&chooe);
    switch(chooe)
    {
    case 1:
        ashiq_insert();
        break;
    case 2:
        ashiq_view();
        break;

    default:
        system("cls");
        main_menu();
        break;


    }
}
ashiq_insert()
{
   FILE*fc;
    struct a ss;
    fc=fopen("ashiq.txt","a");

    printf("Enter your bio: ");
    scanf("%s",&ss.bio);

    fc=fopen("ashiq.txt","a");
    strcpy(ss.bio,no_bio);

    fwrite(&s,sizeof(ss),1,fc);
    fclose(fc);


    ashiq_notif();
}
ashiq_notif()
{
  FILE*fc;
    fc=fopen("ashiq.txt","r");
    struct a ss;
    while(fread(&s,sizeof(ss),1,fc))
    {



                printf("\n\tDr. Ashiq,\n\n\tYour bio successfully added.");



    }
    getch();
    fclose(fc);
    doctor_module();
}
ashiq_view()
{
     FILE*fc;
    fc=fopen("ashiq.txt","r");
    struct a ss;
    printf("\n\nAbout Dermatology:\n",ss.bio);
    printf("Dermatology is the branch of medicine dealing with the skin, nails, hair and its diseases. It is a specialty with both medical and surgical aspects.");
    printf("\n\nDr.Ashiq's Bio:\n",ss.bio);
    while(fread(&s,sizeof(s),1,fc))
    {
        if(strcmp(bol,ss.d_bio)==0)
        {
             printf("%s\n",ss.bio);
        }
    }


    getch();
    fclose(fc);
    doctor_module();
}
mehedi()
{
lof();
}
    lof()
{
  int choice;
  printf("\n\n\t\tyou need to Login First");
  printf("\n\npress 1 for login:");
  scanf("%d",&choice);
 switch(choice)
  {
      case 1:
          login4();
          break;

      default :

        printf("\n\n\n\n\t\t Wrong Input\n");

        printf("\n\t\t\t\t\t\tPlease Input Correct Key");
        getch();
        login4();
  }

}
login4(){
      system("cls");
    printf("\n\n\t\t\t\tDoctor page\n\t\t\t__________________________\t\n\n\n\n\t\t");
    printf("\n\n\n\t\tEnter User Name : ");
    char admin_email[25],admin_password[10];
    scanf("%s",admin_email);
    char c=' ',ab[10];
    int i=0;
    if(strcmp(admin_email,"mehedi")==0)
    {
        printf("\n\n\t\tEnter Your Password:");
        while (i<=7)
        {
            admin_password[i]=getch();
            c=admin_password[i];
            if(c==13)
            {
                break;
            }
            else
            {
                printf("*");
            }
            i++;
        }
        admin_password[i]='\0';
        if(strcmp(admin_password,"112233")==0)
        {
            printf("\n\n\n\t\tWelcome Dr.Mehedi Islam.\t   \n\n\t\t\tYou Have Successfully logged In.");
        }
        else
        {
            system("cls");
            printf("\n\n\n\n\n\n\n\n\n\n\n\n\t\t\t\tWRONG PASSWORD\n\t\t\t");
             printf("\n\n\t\t\t\tplease try again\n\t\t\t");
            getch();
            login4();
        }
    }
    else
    {
        system("cls");
        printf("\n\n\n\n\n\n\n\n\n\n\n\n\t\t\t\tWRONG USER NAME\n\t\t\t");
        printf("\n\n\t\t\t\tplease try again\n\t\t\t");
        getch();
        login4();
    }
printf("\n\n\t\t\t1.Add your bio.\n");
printf("\t\t\t2.See your bio.\n");

            int chooe;
 printf("\n\nEnter your choise: ");
    scanf("%d",&chooe);
    switch(chooe)
    {
    case 1:
        mehedi_insert();
        break;
    case 2:
        mehedi_view();
        break;

    default:
        system("cls");
        main_menu();
        break;


    }
}
mehedi_insert()
{
   FILE*fc;
    struct a ss;
    fc=fopen("mehedi.txt","a");

    printf("Enter your bio: ");
    scanf("%s",&ss.bio);

    fc=fopen("mehedi.txt","a");
    strcpy(ss.bio,no_bio);

    fwrite(&s,sizeof(ss),1,fc);
    fclose(fc);


    mehedi_notif();
}
mehedi_notif()
{
  FILE*fc;
    fc=fopen("mehedi.txt","r");
    struct a ss;
    while(fread(&s,sizeof(ss),1,fc))
    {



                printf("\n\tDr. Mehedi,\n\n\tYour bio successfully added.");



    }
    getch();
    fclose(fc);
    doctor_module();
}
mehedi_view()
{
     FILE*fc;
    fc=fopen("mehedi.txt","r");
    struct a ss;
    printf("\n\nAbout Endocrinology:\n",ss.bio);
    printf("Endocrinology is a branch of biology and medicine dealing with the endocrine system, its diseases, and its specific secretions known as hormones. ");
    printf("\n\nDr.Mehedi's Bio: i am a doctor.\n",ss.bio);
    while(fread(&s,sizeof(s),1,fc))
    {
        if(strcmp(bol,ss.d_bio)==0)
        {
             printf("%s\n",ss.bio);
        }
    }


    getch();
    fclose(fc);
    doctor_module();
}
hadaitu()
{
loq();
}
    loq()
{
  int choice;
  printf("\n\n\t\tyou need to Login First");
  printf("\n\npress 1 for login:");
  scanf("%d",&choice);
 switch(choice)
  {
      case 1:
          login5();
          break;

      default :

        printf("\n\n\n\n\t\t Wrong Input\n");

        printf("\n\t\t\t\t\t\tPlease Input Correct Key");
        getch();
        login5();
  }

}
login5(){
      system("cls");
    printf("\n\n\t\t\t\tDoctor page\n\t\t\t__________________________\t\n\n\n\n\t\t");
    printf("\n\n\n\t\tEnter User Name : ");
    char admin_email[25],admin_password[10];
    scanf("%s",admin_email);
    char c=' ',ab[10];
    int i=0;
    if(strcmp(admin_email,"hadaitu")==0)
    {
        printf("\n\n\t\tEnter Your Password:");
        while (i<=7)
        {
            admin_password[i]=getch();
            c=admin_password[i];
            if(c==13)
            {
                break;
            }
            else
            {
                printf("*");
            }
            i++;
        }
        admin_password[i]='\0';
        if(strcmp(admin_password,"112233")==0)
        {
            printf("\n\n\n\t\tWelcome Dr.Hadaitu Islam.\t   \n\n\t\t\tYou Have Successfully logged In.");
        }
        else
        {
            system("cls");
            printf("\n\n\n\n\n\n\n\n\n\n\n\n\t\t\t\tWRONG PASSWORD\n\t\t\t");
             printf("\n\n\t\t\t\tplease try again\n\t\t\t");
            getch();
            login5();
        }
    }
    else
    {
        system("cls");
        printf("\n\n\n\n\n\n\n\n\n\n\n\n\t\t\t\tWRONG USER NAME\n\t\t\t");
        printf("\n\n\t\t\t\tplease try again\n\t\t\t");
        getch();
        login5();
    }
printf("\n\n\t\t\t1.Add your bio.\n");
printf("\t\t\t2.See your bio.\n");

            int chooe;
 printf("\n\nEnter your choise: ");
    scanf("%d",&chooe);
    switch(chooe)
    {
    case 1:
        hadaitu_insert();
        break;
    case 2:
        hadaitu_view();
        break;

    default:
        system("cls");
        main_menu();
        break;


    }
}
hadaitu_insert()
{
   FILE*fc;
    struct a ss;
    fc=fopen("hadaitu.txt","a");

    printf("Enter your bio: ");
    scanf("%s",&ss.bio);

    fc=fopen("hadaitu.txt","a");
    strcpy(ss.bio,no_bio);

    fwrite(&s,sizeof(ss),1,fc);
    fclose(fc);


    hadaitu_notif();
}
hadaitu_notif()
{
  FILE*fc;
    fc=fopen("hadaitu.txt","r");
    struct a ss;
    while(fread(&s,sizeof(ss),1,fc))
    {



                printf("\n\tDr. Hadaitu,\n\n\tYour bio successfully added.");



    }
    getch();
    fclose(fc);
    doctor_module();
}
hadaitu_view()
{
     FILE*fc;
    fc=fopen("hadaitu.txt","r");
    struct a ss;
    printf("\n\nAbout Specialty (medicine):\n",ss.bio);
    printf("Specialty (medicine) A specialty, or speciality, in medicine is a branch of medical practice. After completing medical school");
    printf("\n\nDr.Hadaitu's Bio: i am a doctor.\n",ss.bio);
    while(fread(&s,sizeof(s),1,fc))
    {
        if(strcmp(bol,ss.d_bio)==0)
        {
             printf("%s\n",ss.bio);
        }
    }


    getch();
    fclose(fc);
    doctor_module();
}
/*
struct f
{
  char seril[10];
char serila[10];
char type[25];
char nam[20];
char namo[20];
char d_dol[150];
}z;
char seri[20];
char sero[20];
char no_typ[25];
char dol_cho,dol[150],no_nam[25],na_nam[25];//,bol[100];

*/





admin_module()
{
    char ce;
    ce='\0';
       loader();
    system("cls");
    Time();
    printf("\n\n\t\t\t\tAdmin page\n\t\t\t__________________________\t\n\n\n\n\t\t1.See Doctor's list\n\n\t\t2.BACK\n\n\n\n\t\t");
    printf("\nEnter Your Choice:");
    ce=getche();







    switch(ce)
    {
    case '1':
        lst_doc();
        break;
    case '2':
        main_menu();
        break;
    default:
        printf("\n\n\t\t\t===========WRONG INPUT==============");
        admin_module();
        break;
    }
}
lst_doc()
{
    system("cls");
    Time();
    printf("\t\t\t\tLIST OF ALL DOCTORS\n");
    printf("\n\n\n\n\t\t\t\tDOCTORS NAME\t\t\n");
    printf("\n\n\t\t\t1. Dr. Bappi Saha");
    printf("\n\n\t\t\t2. Dr. Badhhon Sarkar");
    printf("\n\n\t\t\t3. Dr. Ashiqur Rahman");
    printf("\n\n\t\t\t4. Dr. Mehedi Hasan");
    printf("\n\n\t\t\t5. Dr. Hadaitu Islam");
    lod();
}
lod()
{
  int choice;
  printf("\n\n\t\tPlease Login First");
  printf("\n\nEnter 1 for login:");
  scanf("%d",&choice);
 switch(choice)
  {
      case 1:
          login();
          break;

      default :

        printf("\n\n\n\n\t\t Wrong Input\n");

        printf("\n\t\t\t\t\t\tPlease Input Correct Key");


        getch();
        login();
  }

}
login(){

    system("cls");
    Time();
    printf("\n\n\t\t\t\tAdmin page\n\t\t\t__________________________\t\n\n\n\n\t\t");
    printf("\n\n\n\t\tEnter User Name : ");
    char admin_email[25],admin_password[10];
    scanf("%s",admin_email);
    char c=' ',ab[10];
    int i=0;
    if(strcmp(admin_email,"badhon")==0)
    {
        printf("\n\n\t\tEnter Your Password:");
        while (i<=7)
        {
            admin_password[i]=getch();
            c=admin_password[i];
            if(c==13)
            {
                break;
            }
            else
            {
                printf("*");
            }
            i++;
        }
        admin_password[i]='\0';
        if(strcmp(admin_password,"112233")==0)
        {
{
            printf("\n\n\n\t\tWelcome.\t   \n\n\t\t\tYou Have Successfully logged In.");
        }
        }
        else
        {
            system("cls");
            printf("\n\n\n\n\n\n\n\n\n\n\n\n\t\t\t\tWRONG PASSWORD\n\t\t\t");
             printf("\n\n\t\t\t\tplease try again\n\t\t\t");
            getch();
            login();
        }
    }
    else
    {
        system("cls");
        printf("\n\n\n\n\n\n\n\n\n\n\n\n\t\t\t\tWRONG USER NAME\n\t\t\t");
        printf("\n\n\t\t\t\tplease try again\n\t\t\t");
        getch();
        login();
    }
    recursiv();
}
/*struct f
{
  char seril[10];
char serila[10];
char type[25];
char nam[20];
char namo[20];
char d_dol[150];
}z;
char seri[20];
char sero[20];
char no_typ[25];
char dol_cho,dol[150],no_nam[25],na_nam[25];//,bol[100];*/

int recursiv()
{

    system("cls");
    printf("\n\n\t\t\t\tAdmin page\n\t\t\t__________________________\t\n\n\n\n\t\t1.Add doctor\n\n\t\t2.See update doctors list\n\n\t\t3.BACK\n\n\n\n\t\t");
    char chose;
    printf("\n\n\t\tEnter your choice: ");
    chose=getche();
    switch(chose)
    {
    case '1':
        update();
        break;
    case '2':
        vie();
        break;

    case '3':
        system("cls");
       main_menu();
        break;
    default:
        printf("\nWrong Input");
        recursiv();
        break;
    }
}
int inser()
{
    FILE*fp;
    struct p s;
    fp=fopen("qol.txt","r");
    printf("\nEnter serial: ");
    scanf("%s",&seri);

    while(fread(&s,sizeof(s),1,fp))
    {
        if(strcmp(s.d_dol,dol)==0)
        {
            if(strcmp(s.seril,seri)==0)
            {
                printf("\n\nSorry This Serial Exists\n");
                system("pause");
                recursiv();
                break;
            }
        }
    }
    fclose(fp);
    fp=fopen("qol.txt","a");
    strcpy(s.seril,seri);
    printf("\nEnter first Name: ");
    scanf("%s",&s.nam);
    strcpy(no_nam,s.nam);
    printf("\nEnter Last Name: ");
    scanf("%s",&s.namo);
    strcpy(na_nam,s.namo);
    printf("\nEnter the type of specialist: ");
    scanf("%s",&no_typ);
    strcpy(s.type,no_typ);

   int c=0;
    for(c=0;c<150;c++)
    {
        s.d_dol[c]='\0';
    }
    strcpy(s.d_dol,dol);
    strcpy(doc,s.d_dol);

    fwrite(&s,sizeof(s),1,fp);

    fclose(fp);

    notif();
}
notif()
{
    FILE*fp;
    fp=fopen("qol.txt","r");
    struct p s;
    while(fread(&s,sizeof(s),1,fp))
    {
     if(strcmp(dol,s.d_dol)==0)
        {

            if(strcmp(s.seril,seri)==0)
            {
                printf("\n\tDear Admin,\n\n\tNew Doctor name Is Dr.%s %s,specialist of %s",s.nam,s.namo,s.type);

            }
        }
    }
    getch();
    fclose(fp);
    recursiv();
}
int vie()
{
    FILE*fp;
    fp=fopen("qol.txt","r");
    struct p s;
    printf("\nSERIAL\t  Name\t Specialist\t\n");
    while(fread(&s,sizeof(s),1,fp))
    {
        if(strcmp(dol,s.d_dol)==0)
        {
            printf("%s\t %s\t%s\t %s\n",s.seril,s.nam,s.namo,s.type);
        }
    }
    getch();
    fclose(fp);
    recursiv();

}
int via()
{
    FILE*fp;
    fp=fopen("qol.txt","r");
    struct p s;
    printf("\nSERIAL\t\t  Name\t\t\t Specialist\t\n");
    while(fread(&s,sizeof(s),1,fp))
    {
        if(strcmp(dol,s.d_dol)==0)
        {
            printf("%s\t %s\t%s\t\t %s\n",s.seril,s.nam,s.namo,s.type);
        }
    }
    printf("\n\npress any key to continue. . . . ");
    getch();
    fclose(fp);
   // recursiv();

}

int update()
{

FILE*fp;
fp=fopen("qol.txt","r+");
    while(fread(&s,sizeof(s),1,fp))
    {
       if(strcmp(s.d_dol,dol)==0)
        {
            fseek(fp,-sizeof(s),SEEK_CUR);
            inser();
            strcpy(s.seril,seri);
            strcpy(no_nam,s.nam);
            strcpy(na_nam,s.namo);
            strcpy(s.type,no_typ);
            fwrite(&s,sizeof(s),1,fp);
            fclose(fp);
        }
    }
    fclose(fp);
    inser();

}
