#include <stdio.h>
int main()
{
    int low,up,i,flag=0;
    scanf("%d %d",&low,&up);
    while(low<=up)
    {
        flag=0;
        for(i=2;i<=low/2;++i)
        {
            if(low%i==0)
            {
                flag=1;
                break;
            }
        }
        if(flag==0)

            printf("%d",low);

        ++low;
    }
    return 0;
}
