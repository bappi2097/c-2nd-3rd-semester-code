#include<stdio.h>
int main()
{
    int month;
    printf("Enter 1 to 12: ");
    scanf("%d", &month);
    switch(month){
        case 1:
        case 2:
        case 3:
        case 4: printf("\nSpring\n");break;
        case 5:
        case 6:
        case 7:
        case 8: printf("\nSummer\n");break;
        case 9:
        case 10:
        case 11:
        case 12: printf("\nFall\n");break;
        default : printf("Ghadha");
    }
}

