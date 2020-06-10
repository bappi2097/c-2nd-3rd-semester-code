//Binary Search
#include <stdio.h>
int main()
{
    int size;
    printf("Enter Array Size : ");
    scanf("%d",&size);
    int array[size],i,item;
    printf("\nEnter Array Value : ");
    for(i=0;i<size;i++)
    {
        scanf("%d",&array[i]);
    }
    printf("\nEnter Search Item : ");
    scanf("%d",&item);
    int lb=0,ub=size-1;
    int beg=lb,end=ub;
    int mid=(beg+end)/2;
    while(beg<=end && item != array[mid])
    {
        if(item>array[mid])
            beg=mid+1;
        else
            end=mid-1;
        mid=(beg+end)/2;
    }
    if(item==array[mid])
        printf("\nItem Found Index In %d",mid);
    else
        printf("\nNot Found");
    return 0;
}
