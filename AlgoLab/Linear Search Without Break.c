#include <stdio.h>
int main()
{
    int size;
    printf("Enter Array Size : ");
    scanf("%d",&size);
    int array[size],i,item;
    printf("\nEnter Array Value : ");
    for(i=0; i<size; i++)
    {
        scanf("%d",&array[i]);
    }
    printf("\nEnter Search Item : ");
    scanf("%d",&item);
    int loc=0;
    while(item != array[loc] && loc < size)
    {
        loc++;
    }
    if(loc==size)
    {
        printf("\nNot found");
    }
    else
    {
        printf("\nItem Find On Index %d",loc);
    }
    return 0;
}
