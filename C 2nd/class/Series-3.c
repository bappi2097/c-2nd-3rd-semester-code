#include<stdio.h>
#include<math.h>

main()

{
    int i;
    float sum=0,uv=3, lv=2;
    for(i=1; i<=4; i++)
    {
        sum=sum+(uv/lv);
        uv=uv+3;
        lv=lv+2;
    }
    printf("%f\n", sum);
}
