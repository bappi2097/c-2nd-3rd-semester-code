#include <stdio.h>
int main()
{
    int row,col;
    int ch;
    scanf("%c",&ch);
    for( row=65;row<=ch;row++)
    {
        for( col=65;col<=row;col++)
        {
            printf("%c ",col);
            //ch++;
        }
        printf("\n");
    }
    return 0;
}
