#include <stdio.h>
int main()
{
    int a[5]={-25,-35,46,87,-60},i;
    for(i=0;i<5;i++)
    {
        if(a[i]>=0)
        {
            printf("%d is Positive Value",a[i]);
        }
        else
        {
            printf("\n%d is Negative value",a[i]);
        }
    }
    return 0;
}
