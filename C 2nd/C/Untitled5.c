#include <stdio.h>
int main()
{
    int ar[4][3]={{5,6,7},{9,9,7},{7,8,8},{0,0,0}},i,j,sum=0;
    for(i=0;i<4;i++)
    {
        for(j=0;j<3;j++)
            {
                sum=sum+ar[i][j];
                printf("%d=[%d][%d]\t",ar[i][j],i,j);
            }
            printf("\n");
    }
    printf("\nTotal:%d",sum);
    return 0;
}
