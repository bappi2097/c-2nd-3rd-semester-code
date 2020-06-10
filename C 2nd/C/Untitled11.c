#include <stdio.h>
main()
{
    int ar[2][3]={{4,7,9},{2,3,5}},i,j,k=0,l,m;
    for(i=0;i<2;i++)
    {
        for(j=0;j<3;j++)
        {
            for(l=0;l<2;l++)
            {
                for(m=0;m<3;m++)
                {
                    if(ar[l][m]<ar[l][m+1])
                    {
                        k=ar[l][m];
                        ar[l][m]=ar[l][m+1];
                        ar[l][m+1]=k;
                    }
                }
            }
        }
    }
    for(i=1;i>-1;i--)
    {
        for(j=2;j>-1;j--)
        {
            printf(" %d ",ar[i][j]);
        }
        printf("\n");
    }
        printf("\n");
    for(i=0;i<2;i++)
    {
        for(j=0;j<3;j++)
        {
            printf(" %d ",ar[i][j]);
        }
        printf("\n");
    }
}
