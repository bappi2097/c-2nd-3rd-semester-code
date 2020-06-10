#include<stdio.h>
#include<stdlib.h>
#include <ctype.h>
#include <string.h>
#include<math.h>
int main()
{
    int i,balsal,j;
    for(j=0;j<5;j++)
    {
        for(i=0;i<4;i++)
        {
            balsal=(rand()%5)+1;
            printf("%d",balsal);
        }
        printf("\n");
    }
    return 0;
}
