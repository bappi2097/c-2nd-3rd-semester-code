#include <stdio.h>
#define MAX 5
char queue_array[MAX];
int rear = - 1;
int front = - 1;
int count=0;
main()
{
    int choice;
    while (1)
    {
        printf("1.Insert element to queue \n");
        printf("2.Delete element from queue \n");
        printf("3.Display all elements of queue \n");
        printf("4.Quit \n");
        printf("Enter your choice : ");
        scanf("%d", &choice);
        switch (choice)
        {
            case 1:
            insert();
            break;
            case 2:
            delete();
            break;
            case 3:
            display();
            break;
            case 4:
            exit(1);
            default:
            printf("Wrong choice \n");
        }
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
        queue_array[rear] = add_item;
    }
}
delete()
{
    if (count==0)
    {
        printf("Queue Underflow \n");
        return ;
    }
    else
    {
        printf("Element deleted from queue is : %c\n", queue_array[front]);
        queue_array[front]='\0';
        if(front==4)
        {
            front=-1;
        }
        front = front + 1;
        count--;
    }
}
display()
{
    int i;
   // i=front;
    if (front == - 1)
    {
        printf("Queue is empty \n");
    }
    else
    {
        printf("Queue is : \n");
        printf("----\n");
        for(i=0;i<=4;i++)
        {
            printf("|%c |\n", queue_array[i]);
            printf("----");
            printf("\n");
        }
    }
}