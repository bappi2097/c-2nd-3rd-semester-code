#include<stdio.h>
int main()
{
    int i,m,n=1;
    printf("Enter An Integer:");
    scanf("%d",&i);
    while(n<=10)
    {
        m=i*n;
        printf("\n%d*%d=%d",i,n,m);
        n=n+1;
    }
    return 0;
}
