#include <stdio.h>
int main()
{
    int a=0,b=0;
    printf("Enter raw and coloum No:");
    scanf("%d%d",&a,&b);
    int ar[a][b],i,j;
    for(i=0;i<a;i++)
    {
        for(j=0;j<b;j++)
        {
            scanf("%d",&ar[i][j]);
        }
    }
    for(i=0;i<a;i++)
    {
        for(j=0;j<b;j++)
        {
            printf("%d  ",ar[i][j]);
        }
        printf("\n");
    }
    int sum;
    for(i=0;i<b;i++)
    {
        sum=0;
        for(j=0;j<a;j++)
        {
            sum=sum+ar[j][i];
        }
        printf("\ncol %d: %d\t",i,sum);
    }
    for(i=0;i<a;i++)
    {
        sum=0;
        for(j=0;j<b;j++)
        {
            sum=sum+ar[i][j];
        }
        printf("\nRow %d: %d \t",i,sum);
    }
    return 0;
}
