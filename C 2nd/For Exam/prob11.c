#include <stdio.h>
int main()
{
    int st,pt,sh,bl,sk,nt,a,b,c;
    printf("Enter Quantity of Shirt:");
    scanf("%d",&st);
    printf("Enter Quantity of Pant:");
    scanf("%d",&pt);
    printf("Enter Quantity of Shoes:");
    scanf("%d",&sh);
    printf("Enter Quantity of Belt:");
    scanf("%d",&bl);
    printf("Enter Quantity of Shocks:");
    scanf("%d",&sk);
    nt=(st*2000)+(pt*3000)+(sh*4000)+(bl*1500)+(sk*200);
    printf("\nAmount %d",nt);
    a=nt-(nt*.1);
    printf("\nWith discount %d",a);
    if(a>=10000)
    {
        printf("\nYour Gift Amount is 1000");
        b=a-1000;
    }
    c=b+(b*.15);
    printf("\nYou Need To Pay %d",c);
    return 0;
}
