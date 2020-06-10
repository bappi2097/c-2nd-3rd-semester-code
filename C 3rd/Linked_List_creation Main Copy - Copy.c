#include <stdio.h>
#include <malloc.h>
#include <stdlib.h>
struct node
{
    int num;
    int *ptr;
};
typedef struct node NODE;

    NODE *head,*new1, *first, *temp = 0;
    int count = 0;
    int choice = 1;

main()
{
    char ch;
    printf("\n1.Insert\n2.Insert at last\n3.view");
    printf("\nEnter Your Choice");
    fflush(stdin);
    scanf("%c",&ch);
    switch(ch)
    {
    case '1':
        insert1();
        break;
    case '2':
        insert();
        break;
    case '3':
        view();
        break;
    case '0':
        exit(0);
    default:
        printf("\nWrong Input");
        main();
        break;
    }
}
void insert1()
{
    first=0;
    while (choice)
    {
        head  = (NODE *)malloc(sizeof(NODE));
        printf("Enter a data element to insert into the Linked List\n");
        scanf("%d",&head->num);
        if (first != 0)
        {
            temp->ptr =new1= head;
            temp = head;
        }
        else
        {
            first = temp = head;
        }
        fflush(stdin);
        printf("Do you want to continue(Type 0 to exit or any integer to continue)?\n");
        scanf("%d", &choice);

    }
    main();
}
void view()
{
    temp->ptr = 0;
    /*  reset temp to the beginning */
    temp = first;
    printf("\n status of the linked list is\n");
    while (temp != 0)
    {
        printf("[%d]   [%d]",temp,temp->num);
       // count++;
        new1=temp;
        temp = temp->ptr;
    }
    printf("[NULL]\n");
    printf("No. of nodes in the list = %d\n", count);
    main();
}
void insert()
{
    head  = (NODE *)malloc(sizeof(NODE));
    head->ptr = new1->ptr;
    temp=head;
    new1->ptr=head;
    printf("Enter a data element to insert into the Linked List\n");
    scanf("%d", &head-> num);
    main();
}
