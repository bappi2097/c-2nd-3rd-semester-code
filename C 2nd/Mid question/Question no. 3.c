#include <stdio.h>
main()
{
    float a,mul=1,i,sum=0;
    for(i=2;i<=10;i=i+2)
    {
        mul=mul*5;
        printf("%.0f/%.0f",mul,i);
        a=mul/i;
        sum=sum+a;
        if(i<10)
        {
            printf("+");
        }
    }
    printf("=%f",sum);
}
