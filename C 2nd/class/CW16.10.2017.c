#include<stdio.h>
int main()
{
    float f,s,m;
    int n;
    printf("Enter 1st Number:");
    scanf("%f",&f);
    printf("\nEnter 2nd Number:");
    scanf("%f",&s);
    printf("\nPress to choose:");
    printf("\n\t  1 for Addition");
    printf("\n\t  2 for Subtraction");
    printf("\n\t  3 for Multiplication");
    printf("\n\t  4 for Division\n");
    scanf("%d",&n);
    if(n==1)
    {
        m=f+s;
        printf("%f",m);
    }
    else if(n==2)
    {
        m=f-s;
        printf("%f",m);
    }
    else if(n==3)
    {
        m=f*s;
        printf("%f",m);
    }
    else if(n==4)
    {
        m=f/s;
        printf("%f",m);
    }
    else
    {
        printf("Invalid Number");
    }
    return 0;
}
