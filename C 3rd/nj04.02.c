#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <conio.h>
#include <math.h>
int main()
{
    int n,i;
    FILE *fptr;
    fptr=fopen("program.txt","r");
    if(fptr==NULL)
    {
        printf("Error");
        exit(0);
    }
    printf("Enter n:");
    scanf("%d",&n);

    fscanf(fptr,"%d",&n);
    fclose(fptr);
    return 0;
}
