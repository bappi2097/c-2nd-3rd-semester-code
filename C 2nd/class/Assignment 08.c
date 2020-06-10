#include <stdio.h>
int main()
{
    int a[5]={22,44,-22,-44,55},i,j,c;
    for(j=0;j<5;j++)
    {
        for(i=0;i<5;i++)
        {
            if(a[i]>a[i+1])
            {
                c=a[i];
                a[i]=a[i+1];
                a[i+1]=c;
            }
        }
    }
	for (i=0;i<5;i++)
	{
		printf(" %d", a[i]);
	}
    return 0;
}
