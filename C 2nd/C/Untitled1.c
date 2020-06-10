#include <stdio.h>
int main()
{
    float mark[5],sum=0,avg=0;
    int i=0;
    for(i=0;i<6;i++)
    {
        printf("sub %d :",i+1);
        scanf("%f",&mark[i]);
        sum=sum+mark[i];
    }
    printf("Total Mark :%.0f\n",sum);
    avg=sum/6;
    printf("Average : %.3f\n",avg);
    return 0;
}
