#include <stdio.h>
int main()
{
    int a[5]={12,23,34,45,56},n,m=0,p=0;
    for(n=0;n<5;n++)
    {
        if(a[n]%2==0)
        {
            m++;
        }
        else
        {
            p++;
        }
    }
    printf("Even value : %d",m);
    printf("\nOdd value : %d",p);
    return 0;
}
