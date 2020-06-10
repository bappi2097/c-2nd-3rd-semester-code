#include<stdio.h>
int main()
{
    int m,i=0,j;
    for(j=40;j>0;--j)
    {
        i=i+1;
        printf("\nEnter Your Mark :");
        scanf("%d",&m);
        if(m>=80 && m<=100)
        {
            if(m>79 && m<90)
            {
                printf("Roll:%d\nYou Got A+",i);
            }
            else
            {
                printf("****Excilent****");
            }
        }
        else if(m>74 && m<80)
        {
            printf("Roll:%d\nYou Got A",i);
        }
        else if(m>69 && m<75)
        {
            printf("Roll:%d\nYou Got A-",i);
        }
        else if(m>64 && m<70)
        {
            printf("Roll:%d\nYou Got B+",i);
        }
        else if(m>59 && m<65)
        {
            printf("Roll:%d\nYou Got B",i);
        }
        else if(m>54 && m<60)
        {
            printf("Roll:%d\nYou Got B-",i);
        }
        else if(m>49 && m<55)
        {
            printf("Roll:%d\nYou Got C+",i);
        }
        else if(m>44 && m<50)
        {
            printf("Roll:%d\nYou Got C",i);
        }
        else if(m>39 && m<45)
        {
            printf("Roll:%d\nYou Got D",i);
        }
        else if(m>=0 && m<40)
        {
            printf("Roll:%d\nYou Are Failed",i);
        }
        else
        {
            printf("Roll:%d\n         INVALID MARKS \nPLEASE ENTER WRITE NUMBER",i);
        }
    }
    return 0;
}
