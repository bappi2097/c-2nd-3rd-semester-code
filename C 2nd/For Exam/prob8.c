#include <stdio.h>
int main()
{
    int p=2,n,i,a=0,b=0,c;
    printf("Enter A Integer : ");
    scanf("%d",&n);
    for(i=1;i<=n;i=i+2)
    {
        b=i*i;
        printf("%d",b);
        if(i<n)
        {
            printf("+");
        }
        a=a+(i*i);
    }
    printf("=%d",a);
    return 0;
}
