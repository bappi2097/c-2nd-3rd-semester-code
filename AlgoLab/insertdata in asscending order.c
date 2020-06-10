#include <stdio.h>
int main()
{
    int sizeFirst,sizeSecond,i;
    printf("Enter First Array Size:");
    scanf("%d",&sizeFirst);
    int a[sizeFirst];
    printf("\nFirst Array:")
    for(i=0;i<sizeFirst;i++)
    {
        scanf("%d",&a[i]);
    }
    int j,pot;
    for(i=0;i<sizeFirst;i++)
    {
        for(j=0;j<sizeFirst-1;j++)
        {
            if(a[j]>a[J+1])
            {
                pot = a[j];
                a[j]=a[j+1];
                a[j+1]=pot;
            }
        }
    }
    printf("\nSorted First Array:")
    for(i=0;i<sizeFirst;i++)
    {
        printf("%d",a[i]);
    }
    printf("\nEnter Second Array Size:");
    scanf("%d",&sizeSecond);
    int b[sizeSecond];
    printf("\nEnter Second Array:");
    for(i=0;i<sizeSecond;i++)
    {
        scanf("%d",&b[i]);
    }

    for(i=0;i<sizeSecond;i++)
    {
        for(j=0;j<sizeSecond-1;j++)
        {
            if(b[j]>b[J+1])
            {
                pot = b[j];
                b[j]=b[j+1];
                b[j+1]=pot;
            }
        }
    }
    printf("\nSorted Second Array: ");
    for(i=0;i<sizeSecond;i++)
    {
        printf("%d ",b[i]);
    }
    return 0;
}
