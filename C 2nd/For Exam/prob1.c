#include <stdio.h>
void main()
{
    int aa=14;
    float pp=15.8;
    float ff=(float) aa/4;
    int nn=(int) pp/aa;
    float qq=(float) (aa/4);
    printf("%.2f\n%3d\n%.2f",ff,nn,qq);
    return 0;
}
