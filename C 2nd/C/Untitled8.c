#include<stdio.h>
char b[100];
main()
{
    int n;
    printf("ENTER A NUMBER:");
    scanf("%d",&n);
    printf("\nEnter name:");
    scanf("%s",&b);
    fau(n);
    fool();
}
fau(int n)
{

    int i=0,c=0;
    for(i=2;i<=n/2;i++)
    {
        if(n%i==0)
        {
            c=1;
        }
    }
    if(c==0)
    {
        printf("\n%d IS EVEN NUMBER.\n",n);
    }
    else
    {
        printf("\n %d is odd number\n",n);
    }
    return 0;
}
fool()
{
    printf("%s",b);
}
