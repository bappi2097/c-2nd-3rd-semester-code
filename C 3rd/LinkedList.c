#include <stdio.h>
#include <stdlib.h>

struct node
{
    int num;
    struct node *ptr;
}*head;

void insert(int n);
void middle(int num, int pos);
void display();
int main()
{
    int n,num,pos;
		printf("\n\n\t\tLinked List --> Middle Insertion\n");
		printf("\t\t--------------------------------\n\n");

    printf("\t\tInsert number of data (3 or more) : ");
    scanf("%d", &n);
    insert(n);
    printf("\n\tData Entered in the list are :\n\n");
    display();

    printf("\n\tInsert new data in the middle: ");
    scanf("%d", &num);

    printf("\tInsert the position : " );
    scanf("%d", &pos);

        if(pos<=1 || pos>=n){

     printf("\n\t\tInsert is not possible to the given position.\n ");
    }
        if(pos>1 && pos<n){

              middle(num, pos);
       printf("\n\t\tInsertion completed successfully...\n ");
      }
    printf("\n\tThe new list are :\n\n");
    display();
    return 0;
}


void insert(int n){

    struct node *fnNode, *tmp;
    int num, i;
    head = (struct node *)malloc(sizeof(struct node));

    if(head == NULL){

        printf("\n\tMemory can not be allocated.");
    }
    else
    {

        printf("\n\tInsert data no.1 : ");
        scanf("%d", &num);
        head-> num = num;
        head-> ptr = NULL;
        tmp = head;

        for(i=2; i<=n; i++){

            fnNode = (struct node *)malloc(sizeof(struct node));

            if(fnNode == NULL){

                printf("\n\tMemory can not be allocated.");
                break;
            }
            else{

                printf("\tInsert data no.%d : ", i);
                scanf(" %d", &num);

                fnNode->num = num;
                fnNode->ptr = NULL;

                tmp->ptr = fnNode;
                tmp = tmp->ptr;
            }
        }
    }
}

void middle(int num, int pos){

    int i;
    struct node *fnNode, *tmp;
    fnNode = (struct node*)malloc(sizeof(struct node));

    if(fnNode == NULL){

        printf("Memory can not be allocated.");
    }

    else{

        fnNode->num = num;
        fnNode->ptr = NULL;
        tmp = head;

        for(i=2; i<=pos-1; i++){

            tmp = tmp->ptr;

            if(tmp == NULL)
                break;
}
        if(tmp != NULL){

            fnNode->ptr = tmp->ptr;
            tmp->ptr = fnNode;
        }
        else{

            printf("\n\t\tInsert is not possible to the given position.\n");
        }
    }
}

void display(){

    struct node *tmp;

    if(head == NULL){

        printf("\nNo data found in the empty list.");
    }
    else{

        tmp = head;

        while(tmp != NULL){

            printf("\t[%d] Data = %d\n", tmp,tmp->num);
            tmp = tmp->ptr;
        }
    }
}
