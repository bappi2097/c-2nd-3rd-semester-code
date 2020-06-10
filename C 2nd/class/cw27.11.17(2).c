#include <stdio.h>
main()
{
    int a,b,c,d,e,f,g,h,i,j,k,l;
    float m;
    printf("1.circle \n2.Square \n3.Rectangular\nEnter:");
    scanf("%d",&a);
    switch(a)
    {
    case 1:
        printf("Enter radius:");
        scanf("%f",&m);
        printf("%f",cir(b));
        break;
    case 2:
        printf("Enter a length:");
        scanf("%d",&e);
        printf("%d",squ(e));
        break;
    case 3:
        printf("enter 1st value:");
        scanf("%d",&c);
        printf("enter 2nd value:");
        scanf("%d",&d);
        printf("%d",rec(c,d));
        break;
    default:
        printf("wrong input");
        break;
    }
}
cir(float r)
{
    return 3.1416*r*r;
}
int squ(int e)
{
    return e*e;
}
int rec(int c, int d)
{
    return c*d;
}
