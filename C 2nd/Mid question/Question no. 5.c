#include <stdio.h>
main()
{
    int a,b;
    for(a=3;a<=9;a++)
    {
        for(b=9;b>=a;b--)
        {
            printf("%d ",b);
        }
        printf("\n");
    }
}
