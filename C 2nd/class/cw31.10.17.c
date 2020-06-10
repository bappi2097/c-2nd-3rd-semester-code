#include <stdio.h>
int main()
{
    int array[5]={55,66,75,78,99},i,j[5],k;
    for(i=0;i<5;i++)
    {
        k=5;
        k--;
        if(k>-1)
        {
        array[i]=j[k];
        }
    }
    for(i=4;i>=0;i--)
    {
        k=0;
        k++;
        if(k<5)
        {
        j[k]=array[i];
        }
        printf("\n%d",array[i]);
    }
    return 0;
}
