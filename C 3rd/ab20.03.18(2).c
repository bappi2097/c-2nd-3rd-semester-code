#include <stdlib.h>
#include <stdio.h>
void main()
{
    int size;
    printf("Enter No. of value:");
    scanf("%d",&size);
    int ar[size],i;
    printf("\nValues of the array:");
    for(i=0;i<size;i++)
    {
        scanf("%d",&ar[i]);
    }
    for(i=0;i<size;i++)
    {
        printf("\nar[%d]:%d",i,ar[i]);
    }
    int pot=0,j;
    int count_b=0,count_l=0,ser_value;
    printf("\nEnter The Search value:");
    scanf("%d",&ser_value);
    for(i=0;i<size;i++)
    {
        count_l++;
        if(ser_value==ar[i])
        {
            break;
        }
    }
    for(i=0;i<size-1;i++)
    {
        for(j=0;j<size-1-i;j++)
        {
            if(ar[j]>ar[j+1])
            {
                pot=ar[j+1];
                ar[j+1]=ar[j];
                ar[j]=pot;
            }
        }
    }
    int mid=0,max=0,min=0;
    max=size-1;
    while(min<=max)
    {
        count_b++;
        mid=(min+max)/2;
        if(ar[mid]<ser_value)
        {
            min=mid+1;
        }
        else if(ar[mid]>ser_value)
        {
            max=mid-1;
        }
        else
        {
            break;
        }
    }
    if(count_l==size)
    {
        printf("\nThis Value is Not Exist");
        if(count_l>count_b)
        {
            printf("\nBinary Search %d time & Linear Search %d time\nSo, Binary Search Is Better for this case",count_b,count_l);
        }
        else if(count_l<count_b)
        {
            printf("\nBinary Search %d time & Linear Search %d time\nSo, Linear Search Is Better for this case",count_b,count_l);
        }
        else
        {
            printf("\nBinary Search %d time & Linear Search %d time\nSo, Linear Search & Binary search Is equally good for this case",count_b,count_l);
        }
        exit(0);
    }
    if(count_l>count_b)
    {
        printf("\nBinary Search %d time & Linear Search %d time\nSo, Binary Search Is Better for this case",count_b,count_l);

    }
    else if(count_l<count_b)
    {
        printf("\nBinary Search %d time & Linear Search %d time\nSo, Linear Search Is Better for this case",count_b,count_l);
    }
    else
    {
        printf("\nBinary Search %d time & Linear Search %d time\nSo, Linear Search & Binary search Is equally good for this case",count_b,count_l);
    }
}
