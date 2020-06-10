#include <stdio.h>
main()
{
   int n;
   printf("Enter a positive value ");
   scanf("%d",&n);
   calculatePrime(n);
}
int calculatePrime(int n)
{
    int i,count=0;
    for(i=2;i<=n/2;i++)
    {
        if(n%i==0)
        {
            count=1;
            break;
        }
    }
    if(count==0)
    {
        printf("%d is a prime number.",n);
    }
    else
    {
        printf("%d is not a prime number.",n);
    }
    return n;
}
