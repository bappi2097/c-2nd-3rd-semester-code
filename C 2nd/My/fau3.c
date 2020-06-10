#include <stdio.h>
int main()
{
    int ar[2][3]={{1,2,7},{3,4,6}},i,j,ar2[1][3]={0,0,0};
    for(i=0;i<2;i++)
    {
        ar2[i][j]=ar2[0][0]+ar[i][0];
        ar2[0][1]=ar2[0][1]+ar[i][1];
        ar2[0][2]=ar2[0][2]+ar[i][2];
    }
    for(i=0;i<3;i++)
    {
        printf("%d\t",ar2[0][i]);
    }
    return 0;
}

