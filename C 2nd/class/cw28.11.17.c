#include <stdio.h>
main()
{
    int a,b,c=1,d,e,f;
    scanf("%d",&a);
    for(b=a;b>=1;b--)
    {
        c=c*b;
        printf("%d",b);
        if(b>1)
        {
            printf("*");
        }
        else
            printf("=");
    }
    printf("%d",c);
}
