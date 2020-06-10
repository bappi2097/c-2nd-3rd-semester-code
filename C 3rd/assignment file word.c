#include <stdio.h>
#include<string.h>
#include<stdlib.h>
#include<conio.h>
int main()
{
    FILE *paragraph;
    char prg[1000];
    int count_word=1,count_a=0,i=0;
    paragraph=fopen("Paragraph.txt","w");
    if(paragraph==NULL)
    {
        printf("Error!");
        exit(0);
    }
    printf("Enter Your Paragraph:");
    gets(prg);
    fprintf(paragraph,"%s",prg);
    fclose(paragraph);
    paragraph=fopen("Paragraph.txt","r");
    for(i=0;i<strlen(prg);i++)
    {
        if(prg[i]==' ')
        {
            count_word++;
        }
        else if(prg[i]=='a')
        {
            count_a++;
        }
    }
    printf("\n\n\t\t\tNumber Of Word:%d\n\n\t\t\tNumber Of A:%d",count_word,count_a);
    fclose(paragraph);
    return 0;
}
