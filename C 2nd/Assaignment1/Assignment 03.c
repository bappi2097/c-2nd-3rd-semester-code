#include <stdio.h>
int main()
{
    int array[5]={12,23,34,45,56},min,i;
    min=array[0];
    for(i=0;i<5;i++)
    {
        if(array[i]<min)
        {
            min=array[i];
        }
    }
    printf("Minimum value is:");
    printf("%d",min);
    return 0;
}
