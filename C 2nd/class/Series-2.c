#include<stdio.h>
#include<math.h>

main()
{
    float i, sum=0,m;


    for(i=0; i<=6; i++)
    {
    m=(1/pow(2,i));
    sum=sum+m;
    printf("%f\n", sum);
    }

}
