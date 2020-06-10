
#include<stdio.h>
int main()
{
    int x,y;
        printf("Enter 1st number:" );
            scanf("%d", &x);
        printf("Enter 2nd number:" );
            scanf("%d", &y);
        printf("Please press to choose\n");
            printf("\t 1 for ADD\n");
                printf("\t 2 for SUB\n");
                    printf("\t 3 for MUL\n");
                        printf("\t 4 for DIV\n");
    int choice;
        scanf("%d",&choice);
    switch (choice)
    {
    case 1:
        printf("ADDITION value");
        ADD(x,y);
        break;
            case 2:
                printf("SUBTRACTION value");
                    SUB(x,y);
        break;
                        case 3:
                            printf("MULTIPLICTION value");
                                MUL(x,y);
        break;
                                    case 4:
                                        printf("DIVITION value");
                                            DIV(x,y);
        break;
                                    default:
                                        printf("wrong choice");
    }
}
int ADD(int x, int y)
{
    return x+y;
}
int SUB(int x, int y)
{
    return x-y;
}
int MUL(int x, int y)
{
    return x*y;
}
int DIV(int x, int y)
{
    return x/y;
}
