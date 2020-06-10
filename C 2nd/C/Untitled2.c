#include <stdio.h>
#include <string.h>
main()
{
    char a[100],name[100];
    int i=0,j=0;
    scanf("%s",&a);
    strcpy(name,a);
    printf("%d",strlen(name));

    /*for(i=100;i>=0;i--)
    {
        printf("%c",a[i]);
    }*/
}
