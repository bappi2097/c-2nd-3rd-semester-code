#include <stdio.h>
void main()
{
    int size;
    printf("Enter Number of Value:");
    scanf("%d",&size);
    int ar[size],i;
    printf("\nEnter Array Value:");
    for(i=0;i<size;i++)
    {
        scanf("%d",&ar[i]);
    }
    int mid=0,min=0,pot=0,j;
    for(i=0;i<size;i++)
    {
        for(j=0;j<size;j++)
        {
            if(ar[i]>ar[i+1])
            {
                pot=ar[i+1];
                ar[i+1]=ar[i];
                ar[i]=pot;
            }
        }
    }
    printf("\nSorted Array Value:");
    for(i=0;i<size;i++)
    {
        printf("\n%d",ar[i]);
    }
}
