#include <stdio.h>
#include <stdlib.h>

struct node
{
    char name[20];
    struct node *ptr;
}*head;

void insert(int n);
void middle(char name[20], int pos);
void display();

int main()
{
    int n,pos;
    char name[20];

    printf("\t\tInsert nameber of data (3 or more) : ");
    scanf("%d", &n);
    insert(n);
    printf("\n\tData Entered in the list are :\n\n");
    display();

    printf("\n\tInsert new data in the middle: ");
    scanf("%s", &name);

    printf("\tInsert the position : " );
    scanf("%d", &pos);

        if(pos<=1 || pos>=n){

     printf("\n\t\tInsert is not possible to the given position.\n ");
    }
        if(pos>1 && pos<n){

              middle(name, pos);
       printf("\n\t\tInsertion completed successfully...\n ");
      }
    printf("\n\tThe new list are :\n\n");
    display();
    return 0;
}


void insert(int n){

    struct node *fnNode, *tmp;
    int i;
    char name[20];
    head = (struct node *)malloc(sizeof(struct node));

    if(head == NULL){

        printf("\n\tMemory can not be allocated.");
    }
    else
    {

        printf("\n\tInsert data no.1 : ");
        scanf("%s", &name);
        strcpy(head-> name,name);
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
                scanf(" %s", &name);

                strcpy(fnNode->name, name);      // links the name field of fnNode with name
                fnNode->ptr = NULL; // links the address field of fnNode with NULL

                tmp->ptr = fnNode; // links previous node i.e. tmp to the fnNode
                tmp = tmp->ptr;
            }
        }
    }
}

void middle(char name[20], int pos){

    int i;
    struct node *fnNode, *tmp;
    fnNode = (struct node*)malloc(sizeof(struct node));

    if(fnNode == NULL){

        printf("Memory can not be allocated.");
    }

    else{

        strcpy(fnNode->name, name); //Links the data part
        fnNode->ptr = NULL;
        tmp = head;

        for(i=2; i<=pos-1; i++){

            tmp = tmp->ptr;

            if(tmp == NULL)
                break;
}
        if(tmp != NULL){

            fnNode->ptr = tmp->ptr;  //Links the address part of new node
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

        printf(" No data found in the empty list.");
    }
    else{

        tmp = head;

        while(tmp != NULL){

            printf("\t[%d] Data = %s\n", tmp,tmp->name);   // prints the data of current node
            tmp = tmp->ptr;                 // advances the position of current node
        }
    }
}

