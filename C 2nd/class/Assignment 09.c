#include <stdio.h>
int main()
{
    int a[5]={19,95,27,12,18},j,k,n;
    for(j=0;j<5;j++)
    {
        for(n=0;n<5;n++)
        {
            if(a[n]>a[n+1])
            {
                k=a[n];
                a[n]=a[n+1];
                a[n+1]=k;
            }
        }
    }
	for (n=4;n>-1;n--)
	{
		printf(" %d", a[n]);
	}
    return 0;
}

