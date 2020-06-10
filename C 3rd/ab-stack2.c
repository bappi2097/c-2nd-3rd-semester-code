#include <stdio.h>
#define MAXSIZE 5

struct stack
{
    int stk[MAXSIZE];
    int top;
};
typedef struct stack STACK;
STACK s;

void push();
char  pop();
void display();

void main ()
{

    int choice;
    int option = 1;
    s.top = -1;


    while (option)
    {

        printf("\n\t\t\t\t\t1. Add \n");
        printf("\n\t\t\t\t\t2.Delete\n");
        printf("\n\t\t\t\t\t3.Display\n");
        printf("\n\t\t\t\t\t4.EXIT");

        printf("\n\n\t\tEnter your choice:");
        scanf("%d", &choice);
        switch (choice)
        {
        case 1:
            push();
            break;
        case 2:
            pop();
            break;
        case 3:
            display();
            break;
        case 4:
            return;
        }
        fflush (stdin);
        printf ("\n\t\tDo you want to continue(Type 0 or 1)?");
        scanf    ("%d", &option);
    }
}

void push ()
{
    int num;
    if (s.top == (MAXSIZE - 1))
    {
        printf ("\n\t\t\t\t\tFull\n");
        return;
    }
    else
    {
        printf ("\n\t\tEnter Value:");
        scanf ("%d",&num);
        s.top = s.top + 1;
        s.stk[s.top] = num;
    }
    return;
}

char pop ()
{
    int num;
    if (s.top == - 1)
    {
        printf ("\n\t\tNo Value\n");
        return (s.top);
    }
    else
    {
        num = s.stk[s.top];
        printf ("Delete = %d\n", s.stk[s.top]);
        s.top = s.top - 1;
    }
    return(num);
}

void display ()
{
    int i;
    if (s.top == -1)
    {
        printf ("\n\t\t\tEmpty\n");
        return;
    }
    else
    {
        printf ("\n\t\t\t\t\tValues : \n");
        for (i = s.top; i >= 0; i--)
        {
            printf ("%d\n", s.stk[i]);
        }
    }
    printf ("\n");
}
