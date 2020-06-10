#include<stdio.h>
#include<conio.h>
void main(void)
{
    int t1=1,t2;
    printf("0\n");
    while(t2<=100)
        {
        t2=t1+t2;
        printf("%d\n",t2);
        t1=t2;
        }

    return 0;
}
