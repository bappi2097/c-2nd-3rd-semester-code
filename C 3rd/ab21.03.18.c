#include <stdio.h>
#define MAXSIZE 5
struct stack
{
    int stk[MAXSIZE];
    int top;
};
typedef struct stack STACK;
STACK s;
void push(void);
int pop(void);
void display(void);
void main()
{
    int choice;
    int option;
    s.top=-1;
    printf("STACK OPERATION\n");
}
