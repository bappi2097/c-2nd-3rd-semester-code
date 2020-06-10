#include <stdio.h>
int main()
{
    int a=0,b=0,c=0,d=0,e,f=5;
    printf("Enter A Number : ");
    scanf("%d",&b);
    for(e=1;e<=b;e++)
    {
        a=a+f;
        c=a/e;
        printf("%d/%d",a,e);
        if(e<b)
        {
            printf("+");
        }
        d=d+c;
    }
    printf("=%d",d);
    return 0;
}
