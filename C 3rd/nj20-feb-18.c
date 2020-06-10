#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <windows.h>
struct player
{
    float match_1st,match_2nd,match_3rd,avg;
    char name[100],age[100];
}c;
int main()
{
    printf("\n\n\n\n\t\t1.Insert Player Information\n\n\t\t2.View Player Information\n\n");
    printf("Enter Your Choice:");
    int choice;
    scanf("%d",&choice);
    switch(choice)
    {
    case 1:
        insert();
        break;
    case 2:
        view();
        break;
    default:
        main();
        break;
    }
    return 0;
}
insert()
{
    struct player c;
    FILE *fp;
    fp=fopen("player.txt","a");
    printf("\nEnter player Name:");
    scanf("%s",&c.name);
    printf("\nEnter player Age:");
    scanf("%s",&c.age);
    printf("\nEnter 1st Match Run:");
    scanf("%f",&c.match_1st);
    printf("\nEnter 2nd Match Run:");
    scanf("%f",&c.match_2nd);
    printf("\nEnter 3rd Match Run:");
    scanf("%f",&c.match_3rd);
    c.avg=(c.match_1st+c.match_2nd+c.match_3rd)/3;
    fwrite(&c,sizeof(c),1,fp);
    fclose(fp);
    int cho;
    printf("\n\n\t1.More Insert\n\n\t2.Exit\n\n\t3.Home\n\n\n\t\tEnter your choice:");
    scanf("%d",cho);
    switch(cho)
    {
    case 1:
        insert();
        break;
    case 2:
        exit(0);
        break;
    case 3:
        main();
        break;
    default:
        insert();
        break;
    }
    return 0;
}
view()
{
    FILE *fp;
    fp=fopen("player.txt","r");
    struct player c;
    printf("Name\tAge\t1st Match Run\t2nd Match Run\t3rd Match Run\tAverage Run");

    while(fread(&c,sizeof(c),1,fp))
    {
        printf("\n\n%s\t%s\t  %.2f  \t%.2f  \t%.2f  \t%.2f",c.name,c.age,c.match_1st,c.match_2nd,c.match_3rd,c.avg);
    }
    fclose(fp);
    return 0;
}
