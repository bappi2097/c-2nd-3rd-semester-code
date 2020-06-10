#include <stdio.h>
int main()
{
    int a[5]={18,35,28,76,98},m,i;
    m=a[0];
    for(i=1;i<5;i++)
    {
        if(a[i]>m)
        {
            m=a[i];
        }
    }
    printf("Maximum Value:");
    printf("%d",m);
    return 0;
}
