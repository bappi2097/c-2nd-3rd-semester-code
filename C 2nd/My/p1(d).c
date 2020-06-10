#include <stdio.h>
main()
{
    int a,b;
    printf("Enter a value:");
    scanf("%d",&a);
    for(b=0;b<a;b++)
    {
        printf("%d,",fibonacci(b));
    }
}
int fibonacci(int a)
{
    if(a<2)
    {
        return 1;
    }
    return fibonacci(a-1)+fibonacci(a-2);
}
