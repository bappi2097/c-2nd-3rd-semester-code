#include <stdio.h>
int main()
{
    struct student{
    char name[20];
    int age;
    };
    struct student s1,s2,s3;
    scanf("%s %d",&s1.name,&s1.age);
    scanf("%s %d",&s2.name,&s2.age);
    scanf("%s %d",&s3.name,&s3.age);
    printf("\n student 1:%s \t %d",s1.name,s1.age);
    printf("\n student 1:%s \t %d",s2.name,s2.age);
    printf("\n student 1:%s \t %d",s3.name,s3.age);
    return 0;
}
