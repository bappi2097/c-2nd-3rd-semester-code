//********multi-dimensional********//
#include <stdio.h>
main()
{
    int ar3d[3][2][2],i,j,k,l;
    for(i=0;i<3;i++)
    {
        for(j=0;j<2;j++)
        {
            for(k=0;k<2;k++)
            {
                printf("[%d][%d][%d]:",i,j,k);
                scanf("%d",&ar3d[i][j][k]);
            }
        }
    }
    for(i=0;i<3;i++)
    {
        for(j=0;j<2;j++)
        {
            for(k=0;k<2;k++)
            {
                printf("\t[%d][%d][%d]:",i,j,k);
                printf("%d",ar3d[i][j][k]);
            }
            printf("\n");
        }
        printf("\n");
    }
    return 0;
}
