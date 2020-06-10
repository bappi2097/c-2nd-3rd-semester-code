#include<stdio.h>
int main()
{
    int i,j,sum=0;
    printf("Lower limit :");
    scanf("%d",&i);
    printf("Uper limit :");
    scanf("%d",&j);
    for(;i<=j;i++)
    {
        sum=sum+i;
    }
    printf("%d",sum);
    return 0;
}
