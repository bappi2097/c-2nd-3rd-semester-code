#include <stdio.h>
#include <string.h>
main()
{
    int i=0,counta=0,countA=0,countc=0;
    char para[100];
  fflush(stdin);
  printf("\nEnter A String: ");
  gets(para);
    for(i=0;i<strlen(para);i++)
    {
        if(para[i]>=97 && para[i]<=122 && i==0)
        {
            para[i]=para[i]-32;
        }
        else if(para[i-2]=='.' && para[i-1]==' ' && para[i]>=97 && para[i]<=122)
        {
            para[i]=para[i]-32;
            if(para[i-2]=='.' && para[i-1]==' ')
            {
                para[i-1]='\n';
            }
        }
        else if(para[i-2]=='.' && para[i-1]==' ' && para[i]>=65 && para[i]<=90)
        {
            if(para[i-2]=='.' && para[i-1]==' ')
            {
                para[i-1]='\n';
            }
        }
        else if(para[i]>=65 && para[i]<=90 && i!=0 && para[i-2]!='.' && para[i-1]!=' ')
        {
            para[i]=para[i]+32;
        }
    }
   printf("%s",para);
}
