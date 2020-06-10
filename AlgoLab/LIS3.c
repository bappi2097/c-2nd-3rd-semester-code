#include <stdio.h>
int main(){
    int n,i,j,lis=0,k=0;
    printf("Enter The Number Of Element : ");
    scanf("%d",&n);
    int a[n],value[n];
    printf("Enter The Elesments : ");
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
        value[i]=1;
    }
    for(i=1;i<n;i++){
        for(j=0;j<i;j++){
            if(a[j]<a[i]){
                if(value[j]+1>value[i]){
                    value[i]++;
                }
            }
            if(lis<value[i])lis=value[i];
        }
    }
    printf("\n%d\n",lis);
    return 0;
}
