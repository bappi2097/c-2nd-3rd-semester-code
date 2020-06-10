//========================BAPPI SAHA=========================//
//====================ID : 172-35-2097=======================//
//==================MATRIX CALCULATION=======================//
#include <stdio.h>
#include <conio.h>
#include <math.h>
#include <stdlib.h>
#include <string.h>
int name();
int home();
int mat_add();
int mat_sub();
int mat_mul();
int deter();
int veri();
int mat_cofac();
int mat_adj();
int mat_inver();
int mat_inver1();
int mat_inver2();
int swits();
void exit1();
int choice;
//=================MAIN FANCTION : FIRST PAGE======================
int main()
{
    system("cls");
    printf("\n\n\n\n\t\t=========================================================================\n\n\n\t\t\t\t\tBappi Saha\n\n\n\t\t\t\t\tID:172-35-2097\n\n\n\t\t\t\tSoftware Purpose Matrix Calculation \n\n\n\t\t==========================================================================");
    getch();
    name();
    return 0;
}
//===========================NAME PAGE================================
int name()
{
    system("cls");
    printf("\n\n\t  ================================================================================================\n\n");
    printf("\t\t\t\t     MMM      MMM AAAAAA TTTTTT RRRRRR  II  XX   XX   \n");
    printf("\t\t\t\t     MM MM  MM MM AA  AA   TT   RR  RR  II   XX XX    \n");
    printf("\t\t\t\t     MM  MMM   MM AAAAAA   TT   RRRRRR  II    XX      \n");
    printf("\t\t\t\t     MM        MM AA  AA   TT   RR RR   II   XX XX    \n");
    printf("\t\t\t\t     MM        MM AA  AA   TT   RR  RR IIII XX   XX   \n");

    printf("\n\t          CCCCCC AAAAAA LL     CCCCCC UU   UU LL     AAAAAA TTTTTT  II   OOOOO  NNN     NN         ");
    printf("\n\t          CC  CC AA  AA LL     CC  CC UU   UU LL     AA  AA   TT    II  OO   OO NN NN   NN     ");
    printf("\n\t          CC     AAAAAA LL     CC     UU   UU LL     AAAAAA   TT    II  OO   OO NN  NN  NN     ");
    printf("\n\t          CC     AA  AA LL     CC     UU   UU LL     AA  AA   TT    II  OO   OO NN   NN NN     ");
    printf("\n\t          CCCCCC AA  AA LLLLLL CCCCCC  UUUUU  LLLLLL AA  AA   TT   IIII  OOOOO  NN     NNN    \n\n");
    printf("\t    ==============================================================================================\n\n");
    getch();
    home();
    return 0;
}
//===========================HOME PAGE================================
int home()
{
    system("cls");
    printf("\n\t\t\t=======================Matrix Calculation==========================");
    printf("\n\n\t\t1.Addition\n\n\t\t2.Submission\n\n\t\t3.Multiplication\n\n\t\t4.Determination\n\n\t\t5.Cofactor Matrix\n\n\t\t6.Adjoint Matrix\n\n\t\t7.Inverse Matrix\n\n\t\tEnter Your Choice (Only 1 TO 7) : ");
    scanf("%d",&choice);
    system("cls");
    switch(choice)
    {
    case 1:
        mat_add();
        break;
    case 2:
        mat_sub();
        break;
    case 3:
        mat_mul();
        break;
    case 4:
        deter();
        break;
    case 5:
        mat_cofac();
        break;
    case 6:
        mat_adj();
        break;
    case 7:
        mat_inver();
        break;
    default :
        system("cls");
        printf("\n\n\n\n\n\n\n\n\t\t=============================Wrong Input==========================\n\n");
        printf("\n\n\tPlease Type Enter Key");
        getch();
        home();
    }
    return 0;
}
//===================MATRIX ADDITION=======================
int mat_add()
{
    int row,col,i=0,j=0;
    system("cls");
    printf("\n\n\t\t\t=====================MATRIX ADDITION======================\n\n\n");
    printf("\n\n\t\t\tEnter  Matrix  Row  No: ");
    scanf("%d",&row);
    printf("\n\n\t\t\tEnter Matrix Column No: ");
    scanf("%d",&col);
    int mat_1[row][col],mat_2[row][col];
    system("cls");
    printf("\n\n\t\t\t=====================MATRIX ADDITION======================\n\n\n");
    printf("\n\n\t\t\tEnter Matrix all value by Row wise\n\n");
    printf("\t\t\t\tTwo Matrix Addition\n\n\tEnter 1st Matrix Value :\n\n");
    for(i=0;i<row;i++)
    {
        for(j=0;j<col;j++)
        {
            printf("\t");
            scanf("%d",&mat_1[i][j]);
        }
        printf("\n\n");
    }
    system("cls");
    printf("\n\n\t\t\tEnter Matrix all value by Row wise\n\n");
    printf("\t\t\t\tTwo Matrix Addition\n\n\tEnter 2nd Matrix Value :\n\n");
    for(i=0;i<row;i++)
    {
        for(j=0;j<col;j++)
        {
            printf("\t");
            scanf("%d",&mat_2[i][j]);
        }
        printf("\n");
    }
    system("cls");
    printf("\n\n\t\t\t=====================MATRIX ADDITION======================");
    printf("\n\n\n\t\t=====================Addition Result========================\n\n");
    for(i=0;i<row;i++)
    {
        for(j=0;j<col;j++)
        {
            mat_1[i][j]=mat_1[i][j]+mat_2[i][j];
            printf("\t");
            printf("%d",mat_1[i][j]);
        }
        printf("\n\n");
    }
    printf("\n\t\n\t\t\t\tPlease Type Enter Key");
    getch();
    veri();
    return 0;
}
//========================MATRIX SUBMISSION=========================
int mat_sub()
{
    int row,col,i=0,j=0;
    system("cls");
    printf("\n\n\t\t\t=====================MATRIX SUBMISSION======================\n\n\n");
    printf("\n\n\t\t\tEnter  Matrix  Row  No: ");
    scanf("%d",&row);
    printf("\n\n\t\t\tEnter Matrix Column No: ");
    scanf("%d",&col);
    int mat_1[row][col],mat_2[row][col];
    system("cls");
    printf("\n\n\t\t\t=====================MATRIX SUBMISSION======================\n\n\n");
    printf("\n\n\t\t\tEnter Matrix all value by Row wise\n\n");
    printf("\t\t\t\tTwo Matrix Submission\n\n\t1st Matrix:\n\n");
    for(i=0;i<row;i++)
    {
        for(j=0;j<col;j++)
        {
            printf("\t");
            scanf("%d",&mat_1[i][j]);
        }
        printf("\n\n");
    }
    system("cls");
    printf("\n\n\t\t\t=====================MATRIX SUBMISSION======================\n\n\n");
    printf("\n\n\t\t\tEnter Matrix all value by Row wise\n\n");
    printf("\t\t\t\tTwo Matrix Submission\n\n\t2nd Matrix:\n\n");
    for(i=0;i<row;i++)
    {
        for(j=0;j<col;j++)
        {
            printf("\t");
            scanf("%d",&mat_2[i][j]);
        }
        printf("\n");
    }
    system("cls");
    printf("\n\n\t\t\t=====================MATRIX SUBMISSION======================");
    printf("\n\n\n\t\t=====================Submission Result========================\n\n");
    for(i=0;i<row;i++)
    {
        for(j=0;j<col;j++)
        {
            mat_1[i][j]=mat_1[i][j]-mat_2[i][j];
            printf("\t");
            printf("%d",mat_1[i][j]);
        }
        printf("\n\n");
    }
    printf("\n\t\n\t\t\t\tPlease Type Enter Key");
    getch();
    veri();
    return 0;
}
//==========================MATRIX MUKTIPLICATION======================
int mat_mul()
{
    int row_1,rc,row_2,col_2,i=0,j=0,k=0;
    system("cls");
    printf("\n\n\t\t\t=====================MATRIX MULTIPLICATION======================\n\n\n");
    printf("\n\n\t\t\tEnter  1st Matrix  Row  No: ");
    scanf("%d",&row_1);
    printf("\n\n\t\t\tEnter 1st Matrix Column & 2nd Matrix Row No: ");
    scanf("%d",&rc);
    printf("\n\n\t\t\tEnter 2nd Matrix Column No: ");
    scanf("%d",&col_2);
    int mat_1[row_1][rc],mat_2[rc][col_2],mul[row_1][col_2];
    system("cls");
    printf("\n\n\t\t\t=====================MATRIX MULTIPLICATION======================\n\n\n");
    printf("\n\n\t1st Matrix:\n\n");
    for(i=0;i<row_1;i++)
    {
        for(j=0;j<rc;j++)
        {
            printf("\t");
            scanf("%d",&mat_1[i][j]);
        }
        printf("\n\n");
    }
    system("cls");
    printf("\n\n\t\t\t=====================MATRIX MULTIPLICATION======================\n\n\n");
    printf("\n\n\t2nd Matrix:\n\n");
    for(i=0;i<rc;i++)
    {
        for(j=0;j<col_2;j++)
        {
            printf("\t");
            scanf("%d",&mat_2[i][j]);
        }
        printf("\n");
    }
    system("cls");
    printf("\n\n\t\tAnswer Of Two Matrix Multiplication:\n\n\n");
    for(i=0;i<row_1;i++)
    {
        for(j=0;j<col_2;j++)
        {
            mul[i][j]=0;
            for(k=0;k<rc;k++)
            {
                mul[i][j]=mul[i][j]+(mat_1[i][k]*mat_2[k][j]);
            }
            printf("\t%d",mul[i][j]);
        }
        printf("\n\n");
    }
    printf("\n\t\n\t\t\t\tPlease Type Enter Key");
    getch();
    veri();
    return 0;
}
//=====================MATRIX DETERMINATION======================
int deter()
{
    system("cls");
    int i,j,ar[3][3],sum=0;
    printf("\n\n\t\t\t=====================MATRIX DETERMINATION======================\n\n\n\t=============================Determination For 3x3 Matrix==================================\n\n\n\n\t\t\tEnter Matrix All Value:\n");
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            printf("\n");
            scanf("%d",&ar[i][j]);
        }
    }
    system("cls");
    printf("\n\n\t\tYour Matrix\n\n");
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            printf("\t\t%d",ar[i][j]);
        }
        printf("\n\n");
    }
    sum=ar[0][0]*(ar[1][1]*ar[2][2]-ar[1][2]*ar[2][1])-ar[0][1]*(ar[1][0]*ar[2][2]-ar[1][2]*ar[2][0])+ar[0][2]*(ar[1][0]*ar[2][1]-ar[1][1]*ar[2][0]);
    printf("\n\n\n\n\t\t\tDetermination Value : %d",sum);
    printf("\n\n\n\t\t\t\tPlease Type Enter Key");
    getch();
    veri();
    return 0;
}
//===============================MATRIX COFACTOR===========================
int mat_cofac()
{
    system("cls");
    printf("\n\n\t\t\t=====================COFACTOR MATRIX======================\n\n\n\t=============================Cofactor For 3x3 Matrix==================================\n\n\n\n\t\t\tEnter Matrix All Value:\n");
    int ar[3][3],i,j,co[3][3];
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            printf("\t");
            scanf("%d",&ar[i][j]);
        }
        printf("\n\n");
    }
    system("cls");
    printf("\n\n\n\t Your Matrix:\n");
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            printf("\t");
            printf("%d",ar[i][j]);
        }
        printf("\n\n");
    }
    co[0][0]=+(ar[1][1]*ar[2][2]-ar[1][2]*ar[2][1]);
    co[0][1]=-(ar[1][0]*ar[2][2]-ar[1][2]*ar[2][0]);
    co[0][2]=+(ar[1][0]*ar[2][1]-ar[1][1]*ar[2][0]);
    co[1][0]=-(ar[0][1]*ar[2][2]-ar[0][2]*ar[2][1]);
    co[1][1]=+(ar[0][0]*ar[2][2]-ar[0][2]*ar[2][0]);
    co[1][2]=-(ar[0][0]*ar[2][1]-ar[0][1]*ar[2][0]);
    co[2][0]=+(ar[0][1]*ar[1][2]-ar[0][2]*ar[1][1]);
    co[2][1]=-(ar[0][0]*ar[1][2]-ar[1][0]*ar[0][2]);
    co[2][2]=+(ar[0][0]*ar[1][1]-ar[1][0]*ar[0][1]);
    printf("\n\n\t Cofactor Matrix:\n\n");
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            printf("\t");
            printf("%d",co[i][j]);
        }
        printf("\n\n");
    }
    printf("\n\n\n\t\t\t\tPlease Type Enter Key");
    getch();
    veri();
    return 0;
}
//=======================ADJOINT MATRIX========================
int mat_adj()
{
    system("cls");
    printf("\n\n\t\t\t=====================ADJOINT MATRIX======================\n\n\n\t=============================Adjoint For 3x3 Matrix==================================\n\n\n\n\t\t\tEnter Matrix All Value:\n");
    int ar[3][3],i,j,adj[3][3];
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            printf("\t");
            scanf("%d",&ar[i][j]);
        }
        printf("\n\n");
    }
    system("cls");
    printf("\n\n\n\t Your Matrix:\n");
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            printf("\t");
            printf("%d",ar[i][j]);
        }
        printf("\n\n");
    }
    adj[0][0]=+(ar[1][1]*ar[2][2]-ar[1][2]*ar[2][1]);
    adj[1][0]=-(ar[1][0]*ar[2][2]-ar[1][2]*ar[2][0]);
    adj[2][0]=+(ar[1][0]*ar[2][1]-ar[1][1]*ar[2][0]);
    adj[0][1]=-(ar[0][1]*ar[2][2]-ar[0][2]*ar[2][1]);
    adj[1][1]=+(ar[0][0]*ar[2][2]-ar[0][2]*ar[2][0]);
    adj[2][1]=-(ar[0][0]*ar[2][1]-ar[0][1]*ar[2][0]);
    adj[0][2]=+(ar[0][1]*ar[1][2]-ar[0][2]*ar[1][1]);
    adj[1][2]=-(ar[0][0]*ar[1][2]-ar[1][0]*ar[0][2]);
    adj[2][2]=+(ar[0][0]*ar[1][1]-ar[1][0]*ar[0][1]);
    printf("\n\n\t Adjoint Matrix:\n\n");
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            printf("\t");
            printf("%d",adj[i][j]);
        }
        printf("\n\n");
    }
    printf("\n\n\n\t\t\t\tPlease Type Enter Key");
    getch();
    veri();
    return 0;
}
//==============================INVERSE MATRIX============================
int mat_inver()
{
    int inver_choice;
    system("cls");
    printf("\n\n\t\t\t=====================INVERSE MATRIX======================");
    printf("\n\n\n\t\t\t1.[2x2] Matrix\n\n\t\t\t2.[3x3] Matrix");
    printf("\n\n\n\n\n\tEnter Your Choice(1 Or 2) : ");
    scanf("%d",&inver_choice);
    printf("\n\n\n\t\t\t\tPlease Type Enter Key");
    switch(inver_choice)
    {
    case 1:
        mat_inver1();
        break;
    case 2:
        mat_inver2();
        break;
    default:
        printf("\n\n\n\n\n\t\t============================Wrong Input=============================");
        printf("\n\n\n\t\t\t\tPlease Type Enter Key");
        getch();
        mat_inver();
        break;
    }
    return 0;
}
//==============================INVERSE MATRIX============================
int mat_inver1()
{
    system("cls");
    printf("\n\n\t\t\t=====================INVERSE MATRIX======================\n\n\n\t=============================Inverse For 2x2 Matrix==================================\n\n\n\n\t\t\tEnter Matrix All Value:\n");
    double ar[2][2],inv[2][2],div=0,sum=0,ar2[2][2];
    int i,j;
    for(i=0;i<2;i++)
    {
        for(j=0;j<2;j++)
        {
            printf("\t");
            scanf("%lf",&ar[i][j]);
        }
        printf("\n\n");
    }
    system("cls");
    printf("\n\n\n\t Your Matrix:\n");
    for(i=0;i<2;i++)
    {
        for(j=0;j<2;j++)
        {
            printf("\t");
            printf("%.0lf",ar[i][j]);
        }
        printf("\n\n");
    }
    sum=(ar[0][0]*ar[1][1]-ar[0][1]*ar[1][0]);
    if(sum==0)
    {
        system("cls");
        printf("\n\n\n\n\n\t\t======================Matrix Inverse Is Not Possible======================");
        printf("\n\n\n\t\t\t\tPlease Type Enter Key");
        getch();
        swits();
    }
    div=1/(ar[0][0]*ar[1][1]-ar[0][1]*ar[1][0]);
    ar2[0][0]=ar[1][1];
    ar2[1][1]=ar[0][0];
    ar2[1][0]=-ar[1][0];
    ar2[0][1]=-ar[0][1];
    printf("\n\n\t Inverse Matrix:\n\n");
    for(i=0;i<2;i++)
    {
        for(j=0;j<2;j++)
        {
            inv[i][j]=ar2[i][j]*div;
            printf("\t");
            printf("%.2lf",inv[i][j]);

        }
        printf("\n\n");
    }
    printf("\n\n\t Inverse Matrix:\n\n");
    for(i=0;i<2;i++)
    {
        for(j=0;j<2;j++)
        {
            printf("\t");
            printf("%.0lf/%.0lf",ar2[i][j],sum);

        }
        printf("\n\n");
    }
    printf("\n\n\n\t\t\t\tPlease Type Enter Key");
    getch();
    veri();
    return 0;
}
//===============================INVERSE MATRIX===========================
int mat_inver2()
{
    system("cls");
    printf("\n\n\t\t\t=====================INVERSE MATRIX======================\n\n\n\t=============================Inverse For 3x3 Matrix==================================\n\n\n\n\t\t\tEnter Matrix All Value:\n");
    double ar[3][3],adj[3][3],det=0,div=0,inv[3][3];
    int i,j;
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            printf("\t");
            scanf("%lf",&ar[i][j]);
        }
        printf("\n\n");
    }
    system("cls");
    printf("\n\n\n\t Your Matrix:\n");
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            printf("\t");
            printf("%.0lf",ar[i][j]);
        }
        printf("\n\n");
    }
    det=ar[0][0]*(ar[1][1]*ar[2][2]-ar[1][2]*ar[2][1])-ar[0][1]*(ar[1][0]*ar[2][2]-ar[1][2]*ar[2][0])+ar[0][2]*(ar[1][0]*ar[2][1]-ar[1][1]*ar[2][0]);
    if(det==0)
    {
        system("cls");
        printf("\n\n\n\n\n\t\t======================Matrix Inverse Is Not Possible======================");
        printf("\n\n\n\t\t\t\tPlease Type Enter Key");
        getch();
        swits();
    }
    printf("\n\n\n\n\t\t\tDetermination Value : %.0f\n",det);
    adj[0][0]=+(ar[1][1]*ar[2][2]-ar[1][2]*ar[2][1]);
    adj[1][0]=-(ar[1][0]*ar[2][2]-ar[1][2]*ar[2][0]);
    adj[2][0]=+(ar[1][0]*ar[2][1]-ar[1][1]*ar[2][0]);
    adj[0][1]=-(ar[0][1]*ar[2][2]-ar[0][2]*ar[2][1]);
    adj[1][1]=+(ar[0][0]*ar[2][2]-ar[0][2]*ar[2][0]);
    adj[2][1]=-(ar[0][0]*ar[2][1]-ar[0][1]*ar[2][0]);
    adj[0][2]=+(ar[0][1]*ar[1][2]-ar[0][2]*ar[1][1]);
    adj[1][2]=-(ar[0][0]*ar[1][2]-ar[1][0]*ar[0][2]);
    adj[2][2]=+(ar[0][0]*ar[1][1]-ar[1][0]*ar[0][1]);
    printf("\n\n\t Adjoint Matrix:\n\n");
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            printf("\t");
            printf("%.0lf",adj[i][j]);
        }
        printf("\n\n");
    }
    printf("\n\n\t Inverse Matrix:\n\n");
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            printf("\t");
            printf("%.0lf/%.0lf",adj[i][j],det);

        }
        printf("\n\n");
    }
    printf("\n\n\t Inverse Matrix:\n\n");
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            inv[i][j]=ar[i][j]/det;
            printf("\t");
            printf("%.2lf",inv[i][j]);

        }
        printf("\n\n");
    }
    printf("\n\n\n\t\t\t\tPlease Type Enter Key");
    getch();
    veri();
    return 0;
}
//=====================HOME OR EXIT OPTION=======================
int veri()
{
    int HE;
    system("cls");
    printf("\n\n\n\t\t\t1. HOME \n\n\t\t\t2. EXIT\n\n\t\tEnter Your Choice:");
    scanf("%d",&HE);
    switch(HE)
    {
    case 2:
        exit(0);
    case 1:
        home();
    default:
        printf("\n\n\n\t\t\t==================Wrong Input===============");
        veri();
    }
    return 0;
}
//=========================INVERSE MATRIX SWITCH=========================
int swits()
{
    int choice;
        system("cls");
    printf("\n\n\n\t\t\t1. HOME \n\n\t\t\t2. MATRIX INVERSE\n\n\t\t\t3. EXIT\n\n\t\tEnter Your Choice:");
    scanf("%d",&choice);
    switch(choice)
    {
    case 2:
        mat_inver();
        break;
    case 1:
        home();
        break;
    case 3:
        exit(0);
    default:
        printf("\n\n\n\t\t\t==================Wrong Input===============");
        swits();
        break;
    }
    return 0;
}
