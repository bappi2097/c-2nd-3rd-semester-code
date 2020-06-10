#include <stdio.h>
int main()
{
    int a[5]={-25,-35,46,87,-60},i,m=0,n=0;
    for(i=0;i<5;i++)
    {
        if(a[i]>=0)
        {
            m++;
        }
        else
        {
            n++;
        }
    }
    printf("\nThe number of positive value : %d",m);
    printf("\nThe number of Negative value : %d",n);
    return 0;
}
