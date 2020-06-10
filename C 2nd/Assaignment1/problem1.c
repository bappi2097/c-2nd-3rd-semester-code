#include<stdio.h>
int main()
{
    int f,s,t;
    printf("Enter 1st Number:");
    scanf("%d",&f);
    printf("\nEnter 2nd Number:");
    scanf("%d",&s);
    printf("\nEnter 3rd Number:");
    scanf("%d",&t);
    if(f>s && f>t)
    {
        printf("%d Is Largest Number",f);
    }
    else if(s>f && s>t)
    {
        printf("%d Is Largest Number",s);
    }
    else
    {
        printf("Largest Number Is %d",t);
    }
    return 0;
}
