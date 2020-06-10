#include<stdio.h>
main()
{
    int mark[6],i,sum=0,avg=0;
    for(i=0;i<6;i++)
    {
        print("sub %d :",i);
        scanf("%d",&mark[i]);
    }
    for(i=0;i<6;i++)
    {
        //print("sub %d :",i+1);
        printf("%d",mark[i]);
    }

}
