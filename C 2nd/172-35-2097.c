#include<stdio.h>
int main()
{
    int m;
    printf("Enter Your Marks:");
    scanf("%d",&m);
    if(m>0 && m<39)
    {
        printf("Failed");
    }
    else if(m>39 && m<50)
    {
        printf("You Got C");
    }
    else if(m>49 && m<60)
    {
        printf("You Got B");
    }
    else if(m>59 && m<70)
    {
        printf("You Got A-");
    }
    else if(m>69 && m<80)
    {
        printf("You Got A");
    }
    else if(m>79 && m<101)
    {
        if(m>79 && m<90)
        {
            printf("You Got A+");
        }
        else
        {
            printf("Excilent");
        }
    }
    else
    {
        printf(".......Invalid Marks.......");
    }
    return 0;
}
