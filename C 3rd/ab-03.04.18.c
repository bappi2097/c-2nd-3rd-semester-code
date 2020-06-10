#include <stdio.h>
#define MAX 5
char name[MAX][20],phone[MAX][15];
int rear=-1,front=-1,count=0;
main()
{
    int ch;
    printf("\n1.Insert  \n");
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
        main();
    }
}
insert()
{
    char add_name[20],add_phone[15];
    if (count == 5)
    {
        printf("File Already Is Full\n");
    }
    else
    {
        if (front == - 1)
        front = 0;
        count++;
        printf("Enter Your Name : ");
        fflush(stdin);
        gets(add_name);
       // printf("\nEnter Phone Number : ");
       // fflush(stdin);
       // gets(add_phone);
        if(rear==4)
        {
            rear=-1;
        }
        rear=rear+1;
        strcpy(name[rear],add_name);
        //strcpy(phone[rear],add_phone);
    }
    main();
}
del()
{
    if (count==0)
    {
        printf("File Is Already Empty \n");
        return ;
    }
    else
    {
        printf("Deleted Name is : %s\n", name[front]);
        //printf("Deleted Phone Number is : %s\n", phone[front]);
        strcpy(name[front]," ");
        //strcpy(phone[front]," ");
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
        printf("\t\t Information  \n");
        for(i=0;i<=4;i++)
        {
            printf("%d.Name:%s \n",i+1,name[i]);
          //  printf("Phone Num:%s \n",phone[i]);
            printf("\n");
        }
    }
    main();
}
