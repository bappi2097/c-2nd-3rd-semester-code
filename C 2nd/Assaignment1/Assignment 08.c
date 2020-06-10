#include <stdio.h>
int main()
{
    int array[5]={12,98,87,45,56},i,j,k;
    for(j=0;j<5;j++)
    {
        for(i=0;i<5;i++)
        {
            if(array[i]>array[i+1])
            {
                k=array[i];
                array[i]=array[i+1];
                array[i+1]=k;
            }
        }
    }
    printf ("\n Ascending order: ");
	for (i=0;i<5;i++)
	{
		printf(" %d", array[i]);
	}
    return 0;
}
