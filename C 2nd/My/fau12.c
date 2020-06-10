#include <stdio.h>
main()
{
    struct lib{
    int ibn;
    char title[50],name[20];
    float pr;
    };
    struct lib s1,s2,s3;
    scanf("%d%s%s%f",&s1.ibn,&s1.title,&s1.name,&s1.pr);
    printf("%d   %s   %s   %f",s1.ibn,s1.title,s1.name,s1.pr);
}
