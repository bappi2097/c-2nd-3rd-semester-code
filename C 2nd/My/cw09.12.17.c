#include <stdio.h>
int main()
{
    int a[3][2]/*={{34,53},{12,23},{98,87}}*/,i=0,b,c,j=0;
    scanf("%d",&a[0][0]);
    scanf("%d",&a[0][1]);
    scanf("%d",&a[1][0]);
    scanf("%d",&a[1][1]);
    scanf("%d",&a[2][0]);
    scanf("%d",&a[2][1]);
    printf("%d\t",a[0][0]);
    printf("%d\n",a[0][1]);
    printf("%d\t",a[1][0]);
    printf("%d\n",a[1][1]);
    printf("%d\t",a[2][0]);
    printf("%d\n",a[2][1]);
/*    for(j=0;j<3;j++)
    {
        for(i=0;i<2;i++)
        {
            scanf("%d",&a[j][i]);
            //printf("\t%d",a[j][i]);
        }
        printf("\n");
    }
        for(j=0;j<3;j++)
    {
        for(i=0;i<2;i++)
        {
            //scanf("%d",a[j][i]);
            printf("\t%d",a[j][i]);
        }
        printf("\n");
    }*/
    return 0;
}
