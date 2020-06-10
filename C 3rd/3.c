#include <stdio.h>
#include <conio.h>
#include <math.h>
#include <string.h>
main()
{
    printf("A TO Z SOFTWARE\n");
    getch();
    swich();
}
swich()
{
    int i=0;
    printf("1. Addition       \t\t2. Subtraction    \n\n3. Multiplication \t\t4.Division       \n\n5.Area           \t\t6.Volume         \n\n7. Array          \t\t8.String        \n\n");
    printf("Enter Your Choice:");
    scanf("%d",&i);
    switch(i)
    {
    case 1:
        add();
        break;
    case 2:
        sub();
        break;
    case 3:
        mul();
        break;
    case 4:
        div();
        break;
/*    case 5:
        area();
        break;
    case 6:
        vol();
        break;
    case 7:
        arr();
        break;
    case 8:
        str();
        break;
  */  default:
        printf("Wrong Input..................\nPlease Input Right Option....\n");
        def();
        break;
    }
}
add()// This function add two integer
{
    int a,b,sum=0;
    printf("Enter an integer:");
    scanf("%d",&a);
    printf("\nEnter another integer:");
    scanf("%d",&b);
    sum=a+b;
    printf("\n%d+%d=%d",a,b,sum);
}
sub()
{
    int a,b,sub=0;
    printf("Enter an integer:");
    scanf("%d",&a);
    printf("\nEnter another integer:");
    scanf("%d",&b);
    sub=a-b;
    printf("\n%d-%d=%d",a,b,sub);
}
mul()
{
    int a,b,mul=0;
    printf("Enter an integer:");
    scanf("%d",&a);
    printf("\nEnter another integer:");
    scanf("%d",&b);
    mul=a*b;
    printf("\n%dx%d=%d",a,b,mul);
}
div()
{
    int a,b,div=0;
    printf("Enter an integer:");
    scanf("%d",&a);
    printf("\nEnter another integer:");
    scanf("%d",&b);
    div=a/b;
    printf("\n%d/%d=%d",a,b,div);
}
def()
{
    swich();
}
