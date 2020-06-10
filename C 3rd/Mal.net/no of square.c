#include <stdio.h>
#include <conio.h>
#include <math.h>
main()
{
    double sq;
    int i,count=0,pot;
    for(i=1;i<=1000;i++)
    {
        sq=sqrt(i);
        pot=sq;
        sq=sq-pot;
        if(sq==0)
        {
            printf("%d\t",i);
            count++;
        }
    }
    printf("\nTotal Square No:%d",count);
}
