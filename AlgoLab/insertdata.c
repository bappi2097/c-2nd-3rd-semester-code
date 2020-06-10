#include <stdio.h>
int main()
{
    int sizeFirst,sizeSecond;
    printf("Enter First Array Size:");
    scanf("%d",&sizeFirst);
    printf("Enter Second Array Size:");
    scanf("%d",&sizeSecond);
    int a[sizeFirst],b[sizeSecond],ab[sizeFirst+sizeSecond],i,countb=0;
    printf("\nFirst Array:");
    for(i=0;i<sizeFirst;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("\nSecond Array:");
    for(i=0;i<sizeSecond;i++)
    {
        scanf("%d",&b[i]);
    }
    printf("\nFirst Array:");
    for(i=0;i<sizeFirst;i++)
    {
        printf("%d ",a[i]);
    }
    printf("\nSecond Array:");
    for(i=0;i<sizeSecond;i++)
    {
        printf("%d ",b[i]);
    }
    for(i=0;i<sizeFirst;i++)
    {
        ab[i]=a[i];
    }
    printf("\nFull Array:");

    for(i=sizeFirst;i<sizeFirst+sizeSecond;i++)
    {
        ab[i]=b[countb];
        countb++;
    }
    for(i=0;i<sizeFirst+sizeSecond;i++)
    {
        printf("%d ",ab[i]);
    }
    return 0;
}
