#include <stdio.h>
int main()
{
    int array[5]={12,23,67,45,56},max,i;
    max=array[0];
    for(i=0;i<5;i++)
    {
        if(array[i]>max)
        {
            max=array[i];
        }
    }
    printf("Maximum Value is:");
    printf("%d",max);
    return 0;
}
