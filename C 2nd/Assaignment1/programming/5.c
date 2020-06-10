#include<stdio.h>
int main()
{
    int n;
    printf("Enter marks: ");
    scanf("%d", &n);
    if (n >= 80) {
        printf("\nA+");
        if(n >=90) {
            printf("\nOutstanding\n");
        }
    }
    else if(n >= 70) {
        printf("\nA\n");
    }
    else{
        printf("\n\t Laddu Guddu\n");
    }
    return 0;
}
