#include <stdio.h>
int main()
{
    int array[5]={75,78,99,98,55},i,max;
    max=array[0];
    for(i=1;i<5;i++)
    {
        if(array[i]>max)
        {
            max=array[i];
        }
    }
    printf("%d\n",max);
    return 0;
}
