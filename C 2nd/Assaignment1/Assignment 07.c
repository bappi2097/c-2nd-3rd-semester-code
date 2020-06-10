#include <stdio.h>
int main()
{
    int array[5]={12,23,34,45,56},i,j=0,k=0;
    for(i=0;i<5;i++)
    {
        if(array[i]%2==0)
        {
            j++;
        }
        else
        {
            k++;
        }
    }
    printf("The number of Even value is %d",j);
    printf("\nThe number of Odd value is %d",k);
    return 0;
}
