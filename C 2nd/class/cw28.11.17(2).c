#include <stdio.h>

int n,b;

main()
{
    scanf("%d", &n);
    printf("%d", fact(n));
}



int fact(int n){
    int f;
    if(n==1)
        return 1;
    else
        f= n*fact(n-1

    return f;

}
/*
int fact(int n){
    int fact=1, i;

    for(i=n; i>=1; i--){

        fact=fact*i;
    }

   return fact;

}*/
