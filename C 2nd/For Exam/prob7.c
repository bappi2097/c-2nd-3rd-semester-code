#include <stdio.h>
int main()
{
    int ct,at,fe,a;
    printf("Enter CT Number:");
    scanf("%d",&ct);
    printf("Enter Attendance Number:");
    scanf("%d",&at);
    printf("Enter Final Exam Number:");
    scanf("%d",&fe);
    a=ct+at+fe;
    printf("Number : %d\n",a);
    if(a>=80 && a<=100)
    {
        printf("You Got A+");
    }
    else if(a>=75 && a<=79)
    {
        printf("You Got a");
    }
     else if(a>=70 && a<=74)
    {
        printf("You Got A-");
    }
     else if(a>=65 && a<=69)
    {
        printf("You Got B+");
    }
     else if(a>=60 && a<=64)
    {
        printf("You Got B");
    }
     else if(a>=55 && a<=59)
    {
        printf("You Got C");
    }
     else if(a>=50 && a<=54)
    {
        printf("You Got D");
    }
     else if(a>=1 && a<=50)
    {
        printf("You Got F");
    }
    else
    {
        printf("Wrong Number");
    }

    return 0;
}
