#include <stdio.h>
#define MAX 5
char queue[MAX];
int rear=-1,front=-1,count=0;
main()
{
    int ch;
    printf("1.Insert Information \n");
    printf("2.Delete Information \n");
    printf("3.View all Information \n");
    printf("4.Exit \n");
    printf("Enter your choice : ");
    scanf("%d",&ch);
    switch (ch)
    {
    case 1:
        insert();
        break;
    case 2:
        del();
        break;
    case 3:
        view();
        break;
    case 4:
        exit(1);
        default:
        printf("Wrong choice \n");
    }
}
insert()
{
    char add_item;
    if (count == 5)
    {
        printf("Queue Overflow\n");
    }
    else
    {
        if (front == - 1)
        front = 0;
        count++;
        printf("Inset the element in queue : ");
        fflush(stdin);
        scanf("%c", &add_item);
        if(rear==4)
        {
            rear=-1;
        }
        rear = rear + 1;
        queue[rear] = add_item;
    }
    main();
}
del()
{
    if (count==0)
    {
        printf("Queue Underflow \n");
        return ;
    }
    else
    {
        printf("Element deleted from queue is : %c\n", queue[front]);
        queue[front]='\0';
        if(front==4)
        {
            front=-1;
        }
        front = front + 1;
        count--;
    }
    main();
}
view()
{
    int i;
    if (front == - 1)
    {
        printf("No Information In This File \n");
    }
    else
    {
        printf("Queue is : \n");
        printf("----\n");
        for(i=0;i<=4;i++)
        {
            printf("|%c |\n", queue[i]);
            printf("----");
            printf("\n");
        }
    }
    main();
}
