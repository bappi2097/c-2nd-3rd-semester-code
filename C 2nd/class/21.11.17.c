#include <stdio.h>
int sum(int x,int y,int z);
main()
{
    int m1,m2,m3;
    scanf("%d %d %d",&m1,&m2,&m3);
    printf("%d",sum(m1,m2,m3));
}
int sum(int x,int y,int z)
{
    return x+y+z;
}
