#include <stdio.h>
main()
{
    int ar[3][3],i,j,k=0,l=0,max=0;
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            scanf("%d",&ar[i][j]);
        }
    }
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            printf("\t%d",ar[i][j]);
        }
        printf("\n");
    }
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            if(ar[i][j]>max)
            {
                max=ar[i][j];
                k=i;
                l=j;
            }
        }
    }
    printf("Maximum :%d\nindex:[%d][%d]",max,k,l);

}
