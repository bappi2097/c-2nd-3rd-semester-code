#include<stdio.h>
#include<string.h>
void main()
{
    char name[5000];
    int i,wc=1,ac=0;
    FILE*fptr;
    fptr=fopen("paragraph.txt","w");
    printf("Enter pragraph: \n",name);
    gets(name);
    fprintf(fptr,"Pragraph: %s\n",name);
    fclose(fptr);

    fptr=fopen("paragraph.txt","a");
    fscanf(fptr,"%s",&name);

    for(i=0;i<strlen(name);i++)
    {
        if(name[i]==' ')
        {
            wc ++;
        }

        else if(name[i]=='a')
        {
            ac ++;
        }
    }
    printf("\nTotal word: %d\nTotal a: %d",wc,ac);

}
