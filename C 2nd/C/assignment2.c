#include <stdio.h>
main()
{
    struct cricket{
    char pn[100],tn[100];
    int b;
    };
    struct cricket c1,c2,c3,c4,c5,c6;
    scanf("%s %s %d",&c1.pn,&c1.tn,&c1.b);
    scanf("%s %s %d",&c2.pn,&c2.tn,&c2.b);
    scanf("%s %s %d",&c3.pn,&c3.tn,&c3.b);
    scanf("%s %s %d",&c4.pn,&c4.tn,&c4.b);
    scanf("%s %s %d",&c5.pn,&c5.tn,&c5.b);
    scanf("%s %s %d",&c6.pn,&c6.tn,&c6.b);
    printf("\nPlayer Name:%s\nTeam Name:%s\nBatting Average:%d",c1.pn,c1.tn,c1.b);
    printf("\nPlayer Name:%s\nTeam Name:%s\nBatting Average:%d",c2.pn,c2.tn,c2.b);
    printf("\nPlayer Name:%s\nTeam Name:%s\nBatting Average:%d",c3.pn,c3.tn,c3.b);
    printf("\nPlayer Name:%s\nTeam Name:%s\nBatting Average:%d",c4.pn,c4.tn,c4.b);
    printf("\nPlayer Name:%s\nTeam Name:%s\nBatting Average:%d",c5.pn,c5.tn,c5.b);
    printf("\nPlayer Name:%s\nTeam Name:%s\nBatting Average:%d",c6.pn,c6.tn,c6.b);
}
