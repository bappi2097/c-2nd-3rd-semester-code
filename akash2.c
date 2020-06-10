#include<stdio.h>
#include<string.h>
int main()
{
    char corona[20]="CORONAVIRUS";
    int i=0;
    int len=strlen(corona)-1;
    for(i=len;i>=0;i--)
    {
        printf("%c",corona[i]);
    }
    return 0;
}
