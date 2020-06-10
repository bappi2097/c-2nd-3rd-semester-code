#include <stdio.h>
int main()
{
    int sum=0,avg,i,marks[5];//={85,90,60,30,45};
    for(i=0;i<5;i++)
    {
        printf("input integer:");
        scanf("%d",&marks[i]);
        sum=sum+marks[i];
    }
    //sum=marks[0]+marks[1]+marks[2]+marks[3]+marks[4];
    avg=sum/5;
   /* for(i=0;i<5;i++)
        {
            printf("\n%d\n",marks[i]);
        }*/
        printf("avg value is %d",avg);
    return 0;
}
