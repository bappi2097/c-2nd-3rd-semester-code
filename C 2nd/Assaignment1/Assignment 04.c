#include <stdio.h>
int main()
{
    int array[5]={12,-23,0,-45,56},i;
    printf("Positive and Negative value:");
    for(i=0;i<5;i++)
    {
        if(array[i]>=0)
        {
            printf("\n%d is Positive Value",array[i]);
        }
        else
        {
            printf("\n%d is Negative value",array[i]);
        }
    }
    return 0;
}
