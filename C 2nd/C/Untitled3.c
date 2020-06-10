#include <stdio.h>
#include <string.h>
main()
{
    char ch[100];
    int i=0,d=0;
    scanf("%s",&ch);
    for(i=strlen(ch)-1;i>=0;i--)
    {
        printf("%c",ch[i]);
    }
}
