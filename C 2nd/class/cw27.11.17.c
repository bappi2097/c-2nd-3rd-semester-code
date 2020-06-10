#include <stdio.h>
int add(int a , int b);
int sub(int a , int b);
int mul(int a , int b);
int div(int a , int b);
main()
{
    int a=10,b=12,c,d,e;
    printf(" 1.add \n 2.sub \n 3.mul \n 4.div\n");
    scanf("%d",&c);
    switch(c)
    {
    case 1:
        printf("%d",add(a,b));
        break;
    case 2:
        printf("%d",sub(a,b));
        break;
    case 3:
        printf("%d",mul(a ,b));
        break;
    case 4:
        printf("%d",div(a ,b));
        break;
    default :
        printf("wrong input");
        break;
    }
}
int add(int a , int b)
{
    return a+b;
}
int sub(int a , int b)
{
    return a-b;
}
int mul(int a , int b)
{
    return a*b;
}
int div(int a , int b)
{
    return a/b;
}

