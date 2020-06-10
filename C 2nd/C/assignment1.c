#include <stdio.h>
arrayOperation();
sumofallElement();
sumofRow();
sumofCol();
int ar[3][4],i=0,j=0;
main()
{
    for(i=0;i<3;i++)
    {
        for(j=0;j<4;j++)
        {
            printf("\nEnter values of[%d][%d]:",i,j);
            scanf("%d",&ar[i][j]);
        }
    }
    arrayOperation();
}
arrayOperation()
{
    sumofallElement();
    sumofRow();
    sumofCol();
}
sumofallElement()
{
    int sum=0;
    for(i=0;i<3;i++)
    {
        for(j=0;j<4;j++)
        {
            sum=sum+ar[i][j];
        }
    }
    printf("\n Sum of All element:%d",sum);
}
sumofRow()
{
    int sumr=0;
    printf("\nSum of Row:\n");
    for(i=0;i<3;i++)
    {
        sumr=0;
        for(j=0;j<4;j++)
        {
            sumr=sumr+ar[i][j];
        }
        printf("Row %d:%d\n",i,sumr);
    }
}
sumofCol()
{
    int sumc=0;
    printf("\nSum of Col:\n");
    for(i=0;i<4;i++)
    {
        sumc=0;
        for(j=0;j<3;j++)
        {
            sumc=sumc+ar[j][i];
        }
        printf("Col %d:%d\n",i,sumc);
    }
}
