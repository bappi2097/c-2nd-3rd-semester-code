#include <stdio.h>
#include <string.h>
int main()
{
    int ar[10],i,j=0,ser=0,del_in=0,ar1[10];
    printf("Enter Array Value:");
    for(i=0;i<10;i++)
    {
        scanf("%d",&ar[i]);
    }
    for(i=0;i<10;i++)
    {
        printf("%d , ",ar[i]);
    }
    printf("\nEnter Delete Number:");
    scanf("%d",&ser);

    for(i=0;i<10;i++)
    {
        if(ser==ar[i])
        {
            del_in=i;
            for(i=del_in;i<10;i++)
            {
                ar[i]=ar[i+1];
            }
            for(i=0;i<9;i++)
            {
                printf("%d , ",ar[i]);
            }
            break;
        }
        j++;

    }
    if(j==10)
    {
        printf("\nNot Found");
        getch();
        exit(0);
    }
    return 0;
}
