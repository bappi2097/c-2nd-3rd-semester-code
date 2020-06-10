#include <stdio.h>
main()
{
    double a=0,b=1,c=0,i,d;
    printf("Enter A value:");
    scanf("%lf",&d);
    while(c<d)
    {
        printf("%.0lf ",c);
        c=a+b;
        b=a;
        a=c;
    }
}

