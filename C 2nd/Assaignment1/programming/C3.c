#include<stdio.h>
int main()
{

    double num1,num2;
    printf("Enter 1st number: ");
    scanf("%lf",&num1);
    printf("Enter 2nd Number: ");
    scanf("%lf", &num2);
    printf("Sum of two Numbers is : %0.0lf + %0.0lf = %0.0lf\n", num1, num2, num1+num2);
    printf("Sub of two Numbers is : %0.0lf - %0.0lf = %0.0lf\n, num1, num2, num1-num2");
    printf("Multiplication of two Numbers is : %0.0lf * %0.0lf = %0.0lf\n", num1, num2, num1*num2);
    printf("Division of two numbers is : %0.0lf / %0.0lf = %0.3lf\n", num1, num2, num1/num2);
    return 0;
}
