#include<stdio.h>
int main()
{
    int ll,ul;
    double sum,count;
    printf("Lower limit:");
    scanf("%d",&ll);
    printf("\nUpper limit :");
    scanf("%d",&ul);
    for( ;ll<=ul;ll++)
    {
        sum=sum+ll;
        count++;
    }
    printf("%.0lf\n",sum);
    printf("%.0lf\n",count);
    double a=sum/count;
    printf("%.1lf",a);
    return 0;
}
