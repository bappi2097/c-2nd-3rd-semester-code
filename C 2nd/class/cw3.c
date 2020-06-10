#include<stdio.h>
int main()
{
    int i,j,i1,j1;
    for(i1=10;i1>=1;i1--)
    {
        printf(" ");
    for(i=1;i<=i1;i++)
    {
        for(j=1;j<=i;j++)
        {
            printf("*");
        }
        printf("\n");
    }

    }
    return 0;
}
