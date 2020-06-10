#include <stdio.h>
#include <string.h>
int main()
{
    int ar[15],i,size;
    printf("Enter input number:");
    scanf("%d",&size);
    for(i=0;i<size;i++)
    {
        printf("Enter Value No:");
        scanf("%d",&ar[i]);
    }
    for(i=0;i<size;i++)
    {
        printf("\narray value:%d\n",ar[i]);
    }
    int index,j[3];
    printf("\nEnter Index:");
    scanf("%d",&index);
    printf("Enter Value:");
    scanf("%d",&j[0]);
    printf("Enter Value:");
    scanf("%d",&j[1]);
    printf("Enter Value:");
    scanf("%d",&j[2]);

/*    ar[index]=j;
    for(i=0;i<size+1;i++)
    {
        printf("\n%d",ar[i]);
    }*/
    for(i=size;i>=index;i--)
    {
        ar[i+3]=ar[i];
    }
    ar[index]=j[0];
    ar[index+1]=j[1];
    ar[index+2]=j[2];
    for(i=0;i<size+3;i++)
    {
        printf("\n%d\n",ar[i]);
    }
    return 0;
}
