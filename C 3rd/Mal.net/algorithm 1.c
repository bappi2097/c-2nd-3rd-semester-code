#include <stdio.h>
int main()
{
    int size;
    printf("Enter Array Size:");
    scanf("%d",&size);
    int array[size],arrayEven[size],arrayOdd[size];
    int i=0,countEven=0,countOdd=0;
    for(i=0;i<size;i++)
    {
        scanf("%d",&array[i]);
    }
    for(i=0;i<size;i++)
    {
        if(array[i]%2==0)
        {
            arrayEven[countEven]=array[i];
            countEven++;
        }
        else
        {
            arrayOdd[countOdd]=array[i];
            countOdd++;
        }
    }
    int sumEven=0,sumOdd=0;
    printf("\nEven Number Array:\n");
    for(i=0;i<countEven;i++)
    {
        printf("%d  ",arrayEven[i]);
        sumEven=sumEven+arrayEven[i];
    }
    printf("\nOdd Number Array:\n");
    for(i=0;i<countOdd;i++)
    {
        printf("%d  ",arrayOdd[i]);
        sumOdd = sumOdd +arrayOdd[i];
    }
    printf("\nSummation Of Even Number is %d\nSummation Of Odd Number Is %d",sumEven,sumOdd);
    return 0;
}
