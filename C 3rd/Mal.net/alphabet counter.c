#include <stdio.h>
#include <string.h>
main()
{
    int i=0,counta=0,countA=0,countc=0;
    char para[100]={"My NaMe Is BaPpI"};
    for(i=0;i<strlen(para);i++)
    {
        if(para[i]>=65 && para[i]<=90)
        {
            countA++;
        }
        else if(para[i]>=97 && para[i]<=122)
        {
            counta++;
        }
        else
        {
            countc++;
        }
    }
    printf("Capital %d\nSmall %d\n Character %d\n",countA,counta,countc);
}
