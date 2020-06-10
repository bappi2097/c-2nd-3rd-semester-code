#include <stdio.h>
#include <string.h>
main()
{
    int i=0,counta=0,countA=0,countc=0;
    char para[100]={"bAPpI iS a gAY"};
    for(i=0;i<strlen(para);i++)
    {
        if(para[i]>=97 && para[i]<=122 && i==0)
        {
            para[i]=para[i]-32;
        }
        else if(para[i]>=65 && para[i]<=90 && i!=0)
        {
            para[i]=para[i]+32;
        }
        else
        {
            countc++;
        }
    }
   // printf("Capital %d\nSmall %d\n Character %d\n",countA,counta,countc);
   printf("%s",para);
}
