#include <stdio.h>
#include <string.h>
int main()
{
    int ar[25],i,size;
    printf("Enter input number:");
    scanf("%d",&size);
    for(i=0;i<size;i++)
    {
        printf("Enter Value No:");
        scanf("%d",&ar[i]);
    }
    for(i=0;i<size;i++)
    {
        printf("\nArray value:%d",ar[i]);
    }
    int index_no;
    printf("\nEnter Insert No:");
    scanf("%d",&index_no);
    int index[index_no],j[index_no];
    for(i=0;i<index_no;i++)
    {
        printf("\nEnter Value:");
        scanf("%d",&j[i]);
        printf("\nEnter Index:");
        scanf("%d",&index[i]);
    }
    int k=0,pot=0,size1=0,pot_in=0,pot_val=0;
    for(i=0;i<index_no;i++)
    {
        for(k=0;k<index_no;k++)
        {
            if(index[k]>index[k+1])
            {
                pot_in=index[k];
                index[k]=index[k+1];
                index[k+1]=pot_in;
                pot_val=j[k];
                j[k]=j[k+1];
                j[k+1]=pot_val;
            }
        }
    }
    size1=size;
    size1--;
    for(i=0;i<index_no;i++)
    {
        for(k=size1+i;k>=index[i];k--)
        {
            ar[k+1]=ar[k];
        }
        pot=index[i];
        ar[pot]=j[i];
    }
    for(i=0;i<size+index_no;i++)
    {
        printf("\nArray value:%d",ar[i]);
    }
    return 0;
}
