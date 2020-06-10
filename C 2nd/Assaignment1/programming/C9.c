#include<stdio.h>
int main()
{
    int n;
    printf("\nEnter 1 To 12:");
    scanf("%d", &n);
    if(n >= 1 && n <= 4){
        printf("\nSpring\n");
    }
    else if(n >= 5 && n <= 8){
        printf("\nsummer\n");
    }
    else if (n >= 9 && n <= 12){
         printf("\nFall\n");
    }
    else{
        printf("Laddu Guddu\n");
    }
    return 0;
}
