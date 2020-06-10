#include<stdio.h>
int main()
{
    int p,i=2,s=0;
    printf("Enter a positive Integer:");
    scanf("%d",&p);
    while(i<=p/2)
    {
        ++i;
        if(p%i==0)
        {
            s=1;
            break;
        }
    }
    if(s==0)
    {
        printf("%d is a Prime Number",p);
    }
    else
    {
        printf("%d is not a prime Number.",p);
    }
    return 0;
}
