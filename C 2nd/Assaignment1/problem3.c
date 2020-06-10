#include<stdio.h>
int main()
{
    int f,s;
    printf("Enter 1st Number:");
    scanf("%d",&f);
    printf("\nEnter 2nd Number:");
    scanf("%d",&s);
    if(f==s)
    {
        printf("\nThese Number Are Equal.");
    }
    else if(f>s)
    {
        printf("\n%d Is Greater Than %d.",f,s);
    }
    else
    {
        printf("\n%d Is Greater Than %d.",s,f);
    }
    return 0;
}
