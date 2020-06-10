#include <stdio.h>
int main()
{
    int a[10]={1,2,3,4,5,6,7,8,9,10},v,i;
    printf("Enter a integer:");
    scanf("%d",&v);
    /*if(v==a[0])
    {
        printf("%d is match on index 0",v);
    }
    else if*/
        for(i=0;i<11;i++)
    {
        if(v==a[i])
        {
            printf("%d is match on index %d",v,i);
        }
    }
    return 0;
}
