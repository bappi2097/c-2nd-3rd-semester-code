#include<stdio.h>
int main()
{
    int num1, num2, num3;
    printf("Enter 1st number: ");
    scanf("%d", &num1);
    printf("Enter 2nd number: ");
    scanf("%d", &num2);
    printf("Enter 3rd number: ");
    scanf("%d", &num3);
    if(num1 > num2){
        if(num1 > num3){
        printf("\nnum1 is Greatest number\n");
        }
    }
    else if(num2 > num3){
        printf("\nnum2 is Greatest number\n");
    }
    else{
        printf("\nnum3 is Greatest number\n");
    }
    return 0;
}
