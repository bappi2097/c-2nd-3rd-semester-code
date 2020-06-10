#include <stdio.h>
int main()
{
    int ar[2][2]={{1,2},{3,4}},i,j,ar2[1][1]={0,0};
    for(i=0;i<2;i++)
    {
        ar2[0][1]=ar2[0][1]+ar[0][i];
    }
    for(i=0;i<2;i++)
    {
        ar2[0][0]=ar2[0][0]+ar[i][1];
    }
/*    for(i=0;i<1;i++)
    {
        for(j=0;j<1;j++)
        {
            printf("%d\t",ar2[0][1]);
        }
        printf("\n");
    }*/
    printf("%d\t",ar2[0][0]);
    printf("%d\t",ar2[0][0]);

    return 0;
}
