#include <stdio.h>
main()
{
    int ar[8]={3,5,9,1,2,7,6,4},i=0,j=0,a[8];
    for(i=7;i>-1;i--)
    {
        while(j<8)
        {
            a[j]=ar[i];
            j++;
            break;
        }
    }
    for(j=0;j<8;j++)
    {
        printf("%d ",a[j]);
    }
}
