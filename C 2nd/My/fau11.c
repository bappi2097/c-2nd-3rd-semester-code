#include <stdio.h>
int i,j,array[3][3],sumr,sumc,max=0,min=0,maxi=0,maxj=0,mini=0,minj=0;
main()
{
    da();
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            printf("%d  ",array[i][j]);
        }
        printf("\n");
    }
    mmax();
    mmin();
    sumrow();
    sumcol();
}
da()
{
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            scanf("%d",&array[i][j]);
        }
    }
}
mmax()
{
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            if(array[i][j]>max)
            {
                max=array[i][j];
                maxi=i;
                maxj=j;
            }
        }
    }
    printf("\n Maximum value is %d",max);
    printf("\n Index is [%d][%d]",maxi,maxj);
}
mmin()
{
    min=array[0][0];
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            if(array[i][j]<min)
            {
                min=array[i][j];
                mini=i;
                minj=j;
            }
        }
    }
    printf("\n Minimum value is %d",min);
    printf("\n Index is [%d][%d]",mini,minj);
}
sumrow()
{
    for(i=0;i<3;i++)
    {
        sumr=0;
        for(j=0;j<3;j++)
        {
            sumr=sumr+array[i][j];
        }
        printf("\n Row %d: %d",i,sumr);
    }
}
sumcol()
{
    for(i=0;i<3;i++)
    {
        sumc=0;
        for(j=0;j<3;j++)
        {
            sumc=sumc+array[j][i];
        }
        printf("\n Col %d: %d",i,sumc);
    }
}
