#include <stdio.h>
main()
{
    float ic,t;
    printf("Enter Your Annual Income:");
    scanf("%f",&ic);
    if(ic>0 && ic<=200000)
    {
        t=0;
    }
    else if(ic>200000 && ic<=500000)
    {
        t=ic*.05;
    }
    else if(ic>500000 && ic<=1000000)
    {
        t=ic*.10;
    }
    else if(ic>1000000 && ic<=2000000)
    {
        t=ic*.15;
    }
    else if(ic>2000000)
    {
        t=ic*.20;
    }
    else
    {
        printf("Wrong Input\n");
    }
    printf("%f",t);
}
