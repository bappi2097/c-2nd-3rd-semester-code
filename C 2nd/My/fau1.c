#include <stdio.h>
int main()
{
    int ar[2][3],i,j;
    for(i=0;i<2;i++)
    {
        for(j=0;j<3;j++)
        {
            scanf("%d",&ar[i][j]);
        }
    }
    for(i=0;i<2;i++)
    {
        for(j=0;j<3;j++)
        {
            printf("%d\t",ar[i][j]);
        }
        printf("\n");
    }
    return 0;
}
