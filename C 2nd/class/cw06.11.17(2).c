#include <stdio.h>
int main()
{
    int row,col;
    for( row=65;row<=90;row++)
    {
        for( col=65;col<=row;col++)
        {
            printf("%c ",col);
        }
        printf("\n");
    }
    return 0;
}
