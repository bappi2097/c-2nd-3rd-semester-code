#include <stdio.h>
#include <string.h>
#include <conio.h>
#include <stdlib.h>
#include <math.h>
#include <windows.h>
//==========================FIRST PAGE=================================
int main()
{
    system("cls");
    printf("\n\n\n\n\t\t=========================================================================\n\n\n\t\t\t\t\tBappi Saha\n\n\n\t\t\t\t\tID:172-35-2097\n\n\n\t\t\t\t\tStudent Registration \n\n\n\t\t==========================================================================");
    getch();
    name();
    return 0;
}
//===========================NAME PAGE================================
int name()
{
    system("cls");
    printf("\n\n\t  ================================================================================================\n\n");
    printf("\t\t\t     SSSSSS TTTTTT UU   UU DDDD   EEEEEE NNN     NN TTTTTT\n");
    printf("\t\t\t     SS       TT   UU   UU DD  DD EE     NN NN   NN   TT\n");
    printf("\t\t\t     SSSSSS   TT   UU   UU DD   D EEEEEE NN  NN  NN   TT\n");
    printf("\t\t\t         SS   TT   UU   UU DD  DD EE     NN   NN NN   TT\n");
    printf("\t\t\t     SSSSSS   TT    UUUUU  DDDD   EEEEEE NN     NNN   TT\n");
    printf("\n\t       RRRRRR EEEEEE GGGGGG  II  SSSSSS TTTTTT RRRRRR AAAAAA TTTTTT  II   OOOOO  NNN     NN         ");
    printf("\n\t       RR  RR EE     GG      II  SS       TT   RR  RR AA  AA   TT    II  OO   OO NN NN   NN     ");
    printf("\n\t       RRRRRR EEEEEE GG  GG  II  SSSSSS   TT   RRRRRR AAAAAA   TT    II  OO   OO NN  NN  NN     ");
    printf("\n\t       RR RR  EE     GG   G  II      SS   TT   RR RR  AA  AA   TT    II  OO   OO NN   NN NN     ");
    printf("\n\t       RR  RR EEEEEE GGGGGG IIII SSSSSS   TT   RR  RR AA  AA   TT   IIII  OOOOO  NN     NNN    \n\n");
    printf("\t    ==============================================================================================\n\n");
    getch();
    login();
    return 0;
}
//================================TEACHER LOGIN==============================
int login()
{
    system("cls");
    printf("\n\n\t================================TEACHER LOGIN==================================");
    printf("\n\n\n\t\tEnter Your Email : ");
    char teacher_email[25],teacher_password[10];
    scanf("%s",&teacher_email);
    printf("\n\n\t\tEnter Your Password:");
    scanf("%s",&teacher_password);
    if(strcmp(teacher_email,"nusrat.swe@diu.edu.bd")==0)
    {
        if(strcmp(teacher_password,"nu5350")==0)
        {
            home();
        }
        else
        {
            system("cls");
            printf("\n\n\n\t\t======================WRONG PASSWORD===========================");
            getch();
            login();
        }
    }
    else
    {
        system("cls");
        printf("\n\n\n\t\t======================WRONG EMAIL===========================");
        getch();
        login();
    }
}
//=============================REGISTRATION HOME PAGE==============================
int home()
{
    system("cls");
    printf("\n\n\n\n\t\t=======================WELCOME=================================");
    return 0;
}
