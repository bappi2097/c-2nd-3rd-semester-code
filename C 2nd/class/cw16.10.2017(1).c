#include<stdio.h>
int main()
{
    int f,s,m,n;
    printf("Enter 1st Number:");
    scanf("%d",&f);
    printf("\nEnter 2nd Number:");
    scanf("%d",&s);
    printf("\nPress to choose:");
    printf("\n\t  1 for Addition");
    printf("\n\t  2 for Subtraction");
    printf("\n\t  3 for Multiplication");
    printf("\n\t  4 for Division\n");
    scanf("%d",&n);
    switch(n)
    {
    case 1:
        printf("ADDITION");
        add(f,s);
        break;
    case 2:
        printf("SUBTRACTION");
        sub(f,s);
        break;
    case 3:
        printf("MUL");
        mul(f,s);
        break;
    case 4:
        printf("DIV");
        div(f,s);
        break;
    default:
        printf("WRONG INPUT");
        break;
    }
}
int add(int f,int s)
{
    return f+s;
}
int sub(int f,int s)
{
    return f-s;
}
int mul(int f,int s)
{
    return f*s;
}
int div(int f,int s)
{
    return f/s;
}

