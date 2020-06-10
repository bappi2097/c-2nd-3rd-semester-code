#include <stdio.h>
#include <stdlib.h>
struct node
{
    char name[20];
    struct node *ptr;
}*head;
int n,pos;
char name[20];
void insert();
void middle();
void display();

int main()
{
    printf("\n\t\t1. Insert\n\t\t2.Insert In Middle\n\t\t3.Display\n\t\t0.Exit\n");
    char choice;
    printf("Enter Your Choice:");
    fflush(stdin);
    scanf("%c",&choice);
    switch(choice)
    {
    case '1':
        insert();
        break;
    case '2':
        middle();
        break;
    case '3':
        display();
        break;
    case '0':
        exit(0);
    default:
        printf("\nwrong Input");
        main();
        break;
    }
}
void insert()
{
    struct node *fnNode, *tmp;
    int i;
    printf("\n How Many ID You Want Insert:");
    scanf("%d",&n);
    char name[20];
    head=(struct node *)malloc(sizeof(struct node));
    if(head==NULL)
    {
        printf("\n\tMemory can not be allocated.");
    }
    else
    {
        printf("\n\tInsert ID no.1 : ");
        scanf("%s", &name);
        strcpy(head-> name,name);
        head-> ptr = NULL;
        tmp = head;
        for(i=2; i<=n; i++)
        {
            fnNode = (struct node *)malloc(sizeof(struct node));

            if(fnNode == NULL)
            {
                printf("\n\tMemory can not be allocated.");
                break;
            }
            else
            {
                printf("\tInsert ID no.%d : ", i);
                scanf(" %s", &name);
                strcpy(fnNode->name, name);
                fnNode->ptr = NULL;
                tmp->ptr = fnNode;
                tmp = tmp->ptr;
            }
        }
    }
    main();
}
void middle()
{
    printf("\n\tInsert new data in the middle: ");
    fflush(stdin);
    scanf("%s", &name);
    printf("\tInsert the position : " );
    scanf("%d", &pos);
    if(pos<=1 || pos>=n)
    {
        printf("\n\t\tInsert is not possible to the given position.\n ");
        main();
    }
    if(pos>1 && pos<n)
    {
        printf("\n\t\tInsertion completed successfully...\n ");
    }
    int i;
    struct node *fnNode, *tmp;
    fnNode = (struct node*)malloc(sizeof(struct node));
    if(fnNode == NULL)
    {
        printf("Memory can not be allocated.");
    }
    else
    {
        strcpy(fnNode->name, name);
        fnNode->ptr = NULL;
        tmp = head;
        for(i=2; i<=pos-1; i++)
        {
            tmp = tmp->ptr;
            if(tmp == NULL)
                break;
        }
        if(tmp != NULL)
        {
            fnNode->ptr = tmp->ptr;
            tmp->ptr = fnNode;
        }
        else
        {
            printf("\n\t\tInsert is not possible to the given position.\n");
        }
    }
    printf("\n\tThe new list are :\n\n");
    display();
    main();
}
void display()
{
    struct node *tmp;
    if(head == NULL)
    {
        printf(" No data found in the empty list.");
    }
    else
    {
        tmp = head;
        while(tmp != NULL)
        {
            printf("\t[%d] Data = %s\n", tmp,tmp->name);
            tmp = tmp->ptr;
        }
    }
    main();
}
