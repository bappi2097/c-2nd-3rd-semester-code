#include<stdio.h>
void main()
{
    printf("Enter First Array Size : ");
    int sizeFirst;
    scanf("%d",&sizeFirst);
    int i=0,arrayFirst[sizeFirst];
    printf("Enter The First Array Element : ");
    for(i=0; i<sizeFirst; i++)scanf("%d",&arrayFirst[i]);
    printf("Enter Second Array Size : ");
    int sizeSecond;
    scanf("%d",&sizeSecond);
    int j=0,arraySecond[sizeSecond];
    printf("Enter The Second Array Element : ");
    for(j=0; j<sizeSecond; j++)scanf("%d",&arraySecond[j]);
    int arrayFinal[sizeFirst+sizeSecond],countFirst=0,countSecond=0;
    for(i=0; i<sizeFirst+sizeSecond && countFirst<sizeFirst && countSecond<sizeSecond; i++)
    {
        if(arrayFirst[countFirst]<arraySecond[countSecond])
        {
            arrayFinal[i]=arrayFirst[countFirst];
            countFirst++;
        }
        else
        {
            arrayFinal[i]=arraySecond[countSecond];
            countSecond++;
        }
    }
    if(countFirst==sizeFirst)
    {
        for(j=i; j<sizeFirst+sizeSecond; j++)
        {
            arrayFinal[j]=arraySecond[countSecond];
            countSecond++;
        }
    }
    else
    {
        for(j=i; j<sizeFirst+sizeSecond; j++)
        {
            arrayFinal[j]=arrayFirst[countFirst];
            countFirst++;
        }
    }
    printf("\nAfter Merge Two Sorted Array :\n");
    for(i=0; i<sizeFirst+sizeSecond; i++)printf("%d ",arrayFinal[i]);

}
