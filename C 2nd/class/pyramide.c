#include <stdio.h>
int main()
{
    char row,col;
    for( row='a';row<='z';row++)
    {
        for( col='a';col<=row;col++)
        {
            printf("%c ",col);
        }
        printf("\n");
    }
    return 0;
}
