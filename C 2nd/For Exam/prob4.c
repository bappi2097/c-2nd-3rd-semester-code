#include <stdio.h>
int main()
{
    int a,b,c=0,d;
    for(b=1;b<=15;b++)
    {
        printf("Enter 1st Person age:");
        scanf("%d",&a);
        if(a>=40 && a<=60)
        {
            c=c+1;
        }
    }
    printf("\n\nThe Number of People between 40 to 60 are %d",c);
    return 0;
}
