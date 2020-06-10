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
    for(i=0;i<size;i++)
    {
        if(item==array[i])
        {
            printf("\nItem Found on Index %d",i);
            break;
        }
    }
    if(i==size)
    {
        printf("\nItem Not Found");
    }
    return 0;
}
