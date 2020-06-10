#include <stdio.h>
int main()
{
    int i=0,j=0;
    for(i=7;i>=1;i--)
    {
        for(j=1;j<=i;j++)
        {
            printf("%d",j*2+2);
        }
        printf("\n");
    }
}
