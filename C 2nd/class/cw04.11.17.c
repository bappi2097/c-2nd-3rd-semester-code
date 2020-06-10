#include <stdio.h>
int main()
{
    int a[5]={22,44,-22,-44,55},i,j,c;
    for(i=0;i<5;i++)
    {
        for(j=i+1;j<5;j++)
        {
            if(a[i]>a[j])
            {
                c=a[i];
                a[i]=a[j];
                a[j]=c;
            }
        }
    }
    for(j=4;j>-1;j--)
    {
        printf("\n%d",a[j]);
    }
    return 0;
}
