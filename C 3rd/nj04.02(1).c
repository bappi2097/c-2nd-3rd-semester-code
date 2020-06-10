#include <stdio.h>
#include <stdlib.h>
int main()
{
    int n=0,i=0;
    FILE *fptr1;
    fptr1=fopen("bappisaha1.txt","w");
    if(fptr1==NULL)
    {
        printf("Error!");
        exit(1);
    }
    for(i=1;i<101;i++)
    {
        if(i%2!=0)
        {
            n=n+i;
        }
    }
        fprintf(fptr1,"The Summation Is : %d",n);
    fclose(fptr1);
    return 0;
}
