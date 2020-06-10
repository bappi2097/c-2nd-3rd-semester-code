#include <stdio.h>
int main()
{
    int array[5]={12,23,34,45,56},i;
    printf("Array in reverse order\n");
    for(i=4;i>-1;i--)
    {
        printf("%d\n",array[i]);
    }
    return 0;
}
