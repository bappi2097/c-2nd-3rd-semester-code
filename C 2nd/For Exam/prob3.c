#include <stdio.h>
int main()
{
    int a,b=0,c=0,d,e;
    while(a>0 || a<0)
    {
        printf("\nEnter any number:");
        scanf("%d",&a);
        if(a%2==0)
        {
            b=b+1;
        }
        else
        {
            c=c+1;
        }
    }
    printf("\nNumber of even number is %d\nNumber of odd Number is %d",b,c);
    return 0;
}
