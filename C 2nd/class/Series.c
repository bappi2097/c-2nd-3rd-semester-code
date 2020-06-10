#include<stdio.h>
#include<math.h>

main()
{
    int i, sum=0,n;


    for(i=0; i<=6; i++)
    {
        if(i==3 || i==5)
            continue;
        else{

            n=pow(2,i);
            sum=sum+n;
            printf("%d\n", sum);
        }

    }
}
