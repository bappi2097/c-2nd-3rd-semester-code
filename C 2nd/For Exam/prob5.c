#include <stdio.h>
int main()
{
    int a,b,c,d,e,f;
    printf("Enter price of pencil:");
    scanf("%d",&a);
    printf("\nEnter price of chocolate:");
    scanf("%d",&b);
    printf("\nEnter price of cake:");
    scanf("%d",&c);
    d=a+b+c;
    if(d<=1000)
    {
        printf("\nPurchased successfully!");
    }
    else
    {
        printf("\nSorry,insufficient balance!");
    }
    return 0;
}
