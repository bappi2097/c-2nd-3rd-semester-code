#include <stdio.h>
int main()
{
    printf("Enter The Number of Element : ");
    int n ;
    scanf("%d",&n);
    printf("Enter The Elements : ");
    int array[n],value[n],value1[n][n];
    int i,j,k;
    for(i=0; i<n; i++)
    {
        scanf("%d",&array[i]);
    }
    for(i=0; i<n; i++)
    {
        value[i]=1;
        for(j=0; j<n; j++)
        {
            value1[i][j]=1;
        }
    }
    int lis,count=1,flag=0;
    for(i=1; i<n; i++)
    {
        for(j=0; j<i; j++)
        {
            if(array[i]>array[j])
            {
                if(value[j]+1>value[i])
                    value[i]++;
            }
            if(lis<value[i])lis=value[i];
            while(count<n)
            {
                value1[count][flag]=value[i];
            }
            count++;
        }
        flag++;
    }
    for(i=0;i<n;i++){
            count=0;
        for(k=0;k<i;k++){
            printf("\t");
            count++;
        }
        for(j=0;j<n-count;j++){
            printf("%d\t",value1[i][j]);
        }
        printf("\n");
    }
    return 0;
}
