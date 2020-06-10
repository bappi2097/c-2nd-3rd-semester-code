#include <stdio.h>
#include <math.h>
int main()
{
    float lw,m,i,up,sum;
    for(i=1;i<6;i++)
    {
        up=pow(3,i);
        lw=lw+2;
        m=up/lw;
        printf("%.0f/%.0f,",up,lw);
        sum=sum+m;
    }
    printf("\nSum :%.3f",sum);
    return 0;
}
