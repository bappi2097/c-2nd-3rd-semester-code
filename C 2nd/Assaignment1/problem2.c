#include<stdio.h>
int main()
{
    int n,d;
    printf("Enter A Number:");
    scanf("%d",&n);
    d=n%2;
    if(d==0)
    {
        printf("\nThis Number Is Even");
    }
    else
    {
        printf("\nThis Number Is Odd");
    }
    return 0;
}
