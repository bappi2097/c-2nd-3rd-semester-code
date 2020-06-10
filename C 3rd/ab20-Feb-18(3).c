#include <stdio.h>
#include <string.h>
int main()
{
    int size;
    printf("How many value you want to input:");
    scanf("%d",&size);
    int ar[size],i,j=0,ser=0,mid=0,max=0,min=0;
    max=size-1;
    printf("Enter Array Value:");
    for(i=0;i<size;i++)
    {
        scanf("%d",&ar[i]);
    }
    int pot=0;
    for(i=0;i<size-1;i++)
    {
        for(j=0;j<size-1-i;j++)
        {
            if(ar[j]<ar[j+1])
            {
                pot=ar[j+1];
                ar[j+1]=ar[j];
                ar[j]=pot;
            }
        }
    }
    for(i=0;i<size;i++)
    {
        printf("%d , ",ar[i]);
    }
    int nv;
    printf("\nEnter search Number:");
    scanf("%d",&nv);
    while(min<=max)
    {
        mid=(min+max)/2;
        if(ar[mid]>nv)
        {
            min=mid+1;
        }
        else if(ar[mid]<nv)
        {
            max=mid-1;
        }
        else
        {
            printf("\nfound The value");
            break;
        }
    }
    if(min>max)
    {
        printf("\nNot Found");
        getch();
        exit(0);
    }
    return 0;
}
