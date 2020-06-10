#include <stdio.h>
main()
{
    int m;
    printf("Enter Mark:");
    scanf("%d",&m);
    if(m>=0 && m<=100)
    {
        if(m>=80 && m<=100)
        {
            printf("Outstanding");
        }
        else if(m>=75 && m<80)
        {
            printf("Excellent");
        }
        else if(m>=70 && m<75)
        {
            printf("Very Good");
        }
        else if(m>=65 && m<70)
        {
            printf("Good");
        }
        else if(m>=60 && m<65)
        {
            printf("Satisfactory");
        }
        else if(m>=55 && m<60)
        {
            printf("Average");
        }
        else if(m>=50 && m<55)
        {
            printf("Below Average");
        }
        else
        {
            printf("Fail");
        }
    }
    else
    {
        printf("Wrong Output");
    }
}
