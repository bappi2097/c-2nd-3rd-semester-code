#include <stdio.h>
int main()
{
    int i=0;
    struct bappi{
    char city[100],phone_number[100],road_number[100];
    };
    struct bappi a;
    printf("Enter City Name:");
    scanf("%s",a.city);
    printf("\nEnter Mobile Number:")
    scanf("%s",a.phone_number);
    printf("\nEnter Road Name:");
    scanf("%s",a.road_number);
    if(strlen(a.phone_number)==11)
    {
        printf("Phone number:%s\nCity:%s",a.phone_number,a.city);
    }
    else
    {
        printf("Wrong Input");
    }
    return 0;
}
