#include<stdio.h>
int main()
{
    int n;
    printf("\nEnter 0 To 100:");
    scanf("%d", &n);
    if(n >= 0 && n <= 39){
        printf("\nFail\n");
    }
    else if(n >= 40 && n <= 44){
        printf("\nYour grade is D\n");
        }
    else if(n >= 45 && n <= 49){
        printf("\nYour grate is C-\n");
    }
     else if(n >= 50 && n <= 54){
        printf("\nYour grade is C+\n");
        }
     else if(n >= 55 && n <= 59){
        printf("\nYour grade is B-\n");
        }
     else if(n >= 60 && n <= 64){
        printf("\nYour grade is B\n");
        }
     else if(n >= 65 && n <= 69){
        printf("\nYour grade is B+\n");
        }
    else if(n >= 70 && n <= 74){
        printf("\nYour grade is A-\n");
        }
    else if(n >= 75 && n <= 79){
        printf("\nYour grade is A\n");
        }
    else if(n >= 75 && n <= 100){
        printf("\nYour grade is A+\n");
        }
    else {
        printf("\nYou Enter wrong input\n");
    }
    return 0;
}
