#include<stdio.h>
int main()
{
    int c,t;
    for(c=1;c<=10;c++)
    {
        for(t=1;t<=c;t++)
        {
            printf("%d",t);
        }
        printf("\n");
    }
    return 0;
}
