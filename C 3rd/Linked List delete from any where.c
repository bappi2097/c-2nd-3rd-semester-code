#include <stdio.h>
#include <malloc.h>
#include <stdlib.h>
struct node
{
    int num;
    int *ptr;
};
typedef struct node NODE;
NODE *head,*temp=0,*first;
int count=0;
main()
{
    char choice;
    printf("1.Insert Value\n2.Insert on specific point\n3.view\n");
    printf("Enter Your Choice:");
    fflush(stdin);
    scanf("%c",&choice);
    switch(choice)
    {
    case '1':
        insert();
        break;
    case '2':
        insert_point();
        break;
    case '3':
        view();
        break;
    default:
        printf("\nSorry Wrong Input........");
        main();
        break;
    }
}
void insert()
{
    first=0;
    int choice=1;
    while(choice)
    {
        head=(NODE*)malloc(sizeof(NODE));
        printf("\nEnter Value:");
        scanf("%d",&head->num);
        if(first!=0)
        {
            temp->ptr=head;
            temp=head;
        }
        else
        {
            first=temp=head;
        }
        printf("\nDo you want to continue(Type 0 to exit or any integer to continue):");
        scanf("%d",&choice);
    }
    main();
}
int ser_num,pot;
void search()
{
    printf("\n Which no. after U want to insert:");
    scanf("%d",&ser_num);
   // temp->ptr = 0;
    temp = first;
    while(temp!=0)
    {
        printf("[%d] [%d]",temp,temp->num);
        temp=temp->ptr;
        pot=temp->ptr;
    }
}
void insert_point()
{
    int x,n;
    head  = (NODE *)malloc(sizeof(NODE));
 //   head->ptr = new1->ptr;
  //  temp=first;
//    new1->ptr=head;
    printf("Enter a data element to insert into the Linked List:");
    scanf("%d",&x);
    while(temp!=0)
    {
        printf("\n%d",temp->ptr);
        if(temp->num==x)
        {
            printf("\nEnter New Number:");
            scanf("%d",&head->num);
            n=temp->ptr;
            temp->ptr=head;
            head->ptr = n;
            break;
        }
    }
    main();
}
void view()
{
    temp->ptr = 0;
    temp = first;
    while(temp!=0)
    {
        printf("[%d] [%d]",temp,temp->num);
        temp=temp->ptr;
    }
    printf("[NULL]\n");
    getch();
    main();
}
