#include <stdio.h>
int fibonacci(int term);
int main()
{
    int n, counter;
    printf("Enter number of terms in Fibonacci series: ");
    scanf("%d", &n);
    printf("Fibonacci series till %d terms\n",n);
    for(counter = 0; counter < n; counter++){
        printf("%d ", fibonacci(counter));
    }
    return 0;
}
int fibonacci(int n)
{
    if(n<2)
    {
       return n;
    }
    return fibonacci(n-1) + fibonacci(n-2);
}
