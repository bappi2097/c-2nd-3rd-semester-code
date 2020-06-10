#include <stdio.h>
main()
{
    struct pen{
    char n[100];
    int id,pr;
    };
    struct pen p[6];
    int i=0,max=0,maxn=0,maxid=0;
    for(i=0;i<6;i++)
    {
        printf("\nEnter Pen Name %d:",i+1);
        scanf("%s",&p[i].n);
        printf("\nEnter Pen ID %d:",i+1);
        scanf("%d",&p[i].id);
        printf("\nEnter Pen Price %d:",i+1);
        scanf("%d",&p[i].pr);
    }
    for(i=0;i<6;i++)
    {
        printf("\nPen Name:%s\nPen ID:%d\nPen Price:%d",p[i].n,p[i].id,p[i].pr);
        if(p[i].pr>max)
        {
            max=i;
        }
    }
    printf("\nMaximum Price:%d\nName:%s\nID:%d",p[max].pr,p[max].n,p[max].id);
}
