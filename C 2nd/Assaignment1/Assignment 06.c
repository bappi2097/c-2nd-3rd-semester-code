#include <stdio.h>
int main()
{
    int array[5]={12,23,34,45,56},even,odd,i;
    printf("Even and Odd");
    for(i=0;i<5;i++)
    {
        if(array[i]%2==0)
        {
            printf("\n%d is a Even value",array[i]);
        }
        else
        {
            printf("\n%d is a Odd value",array[i]);
        }
    }
    return 0;
}
