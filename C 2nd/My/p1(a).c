#include <stdio.h>
main()
{
    int  a=0,b=1,c=0,i,d;
    printf("Enter A value:");
    scanf("%d",&d);
    for(i=1;i<=d;i++)
    {
        c=a+b;
        printf("%d ",a);
        b=a;
        a=c;
    }
}

