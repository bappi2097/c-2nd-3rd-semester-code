#include <stdio.h>
int main()
{
    int a[5]={11,35,76,47,40},even,odd,i;
    for(i=0;i<5;i++)
    {
        if(a[i]%2==0)
        {
            printf("\nEven value:%d",a[i]);
        }
        else
        {
            printf("\nOdd value:%d",a[i]);
        }
    }
    return 0;
}
