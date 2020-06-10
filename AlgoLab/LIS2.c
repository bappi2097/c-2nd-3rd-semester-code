#include <stdio.h>
void main()
{
    printf("Enter Array Size : ");
    int size;
    scanf("%d",&size);
    int array[size],length[size],y[size],i=0,j=0,n=0,c=0,x=0,h=0,t=0;
    printf("Enter Array Element : ");
    for(i=0; i<size; i++)
    {
        scanf("%d",&array[i]);
        length[i]=1;
        y[i]=1;
        printf("[%d]\t",array[i]);
    }
    printf("\n");
    for(i=0; i<size; i++)printf(" 1\t");
    for(i=1; i<size; i++)
    {
        printf("\n");
        for(j=0; j<=t; j++)printf(" \t");
        t++;
        while(c<i)
        {
            if(array[c]<array[i])
            {
                x=length[c]+y[i];
                if(x>y[i] && x>length[i])length[i]=x;
            }
            c++;
        }
        for(j=i;j<size;j++)printf(" %d\t",length[j]);
        c=0;
    }
    for(i=0;i<size;i++){
        if(length[i]>h)h=length[i];
    }
    printf("\nThe LIS is : %d",h);
}
