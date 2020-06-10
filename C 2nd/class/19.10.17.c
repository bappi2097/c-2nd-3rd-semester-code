#include<stdio.h>
int main()
{
    int a,b,c,d,e,f;
    printf("1st:");
    scanf("%d",&a);
    printf("\n2nd:");
    scanf("%d",&b);
    for(;a<=b;a++)
    {
        if(a%2==0)
        {
            c=c+1;
        }
        else
        {
            d=d+1;
        }
    }
    printf("\n%d\n",c);
    printf("%d",d);

    return 0;
}
