#include <stdio.h>
int a,b,ch;
int main()
{
    scn();
}
scn()
{
    printf("Enter 1st value:");
    scanf("%d",&a);
    printf("\nEnter 2nd value:");
    scanf("%d",&b);
    printf("\n1. Sum\n2.Difference\n3.Product\n4.Division\n");
    scanf("%d",&ch);
    switch(ch)
    {
    case 1:
        dis1(a,b);
        break;
    case 2:
        dis2(a,b);
        break;
    case 3:
        dis3(a,b);
        break;
    case 4:
        dis4(a,b);
        break;
    default:
        printf("Wrong Input");
        break;
    }
}
sum(int a,int b)
{
    return a+b;
}
dif(int a,int b)
{
    return a-b;
}
pro(int a,int b)
{
    return a*b;
}
div(int a,int b)
{
    return a/b;
}
dis1(int a,int b)
{
    printf("The Value Is %d",sum(a,b));
}
dis2(int a,int b)
{
    printf("The Value Is %d",dif(a,b));
}
dis3(int a,int b)
{
    printf("The Value Is %d",pro(a,b));
}
dis4(int a,int b)
{
    printf("The Value Is %d",div(a,b));
}
