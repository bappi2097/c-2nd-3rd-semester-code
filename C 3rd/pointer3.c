#include <stdio.h>
#include <conio.h>
#include <string.h>
int main()
{
    int i=0;
    char b[3];
    struct bappi{
    char city[100],phone_number[100],road_number[100];
    };
    struct bappi a;
    printf("Enter City Name:");
    scanf("%s",a.city);
    printf("\nEnter Mobile Number:");
    scanf("%s",a.phone_number);
    printf("\nEnter Road Name:");
    scanf("%s",a.road_number);
    if(strlen(a.phone_number)==11)
    {
        if(a.phone_number[0]=='0' && a.phone_number[1]=='1' && a.phone_number[2]=='5' || a.phone_number[2] == '6'|| a.phone_number[2] == '7'|| a.phone_number[2] == '8'|| a.phone_number[2] == '9')
        {
            printf("Phone number:%s\nCity:%s",a.phone_number,a.city);
        }
        else
        {
            printf("Wrong input");
        }
    }
    else
    {
        printf("Wrong Input");
    }
    return 0;
}
