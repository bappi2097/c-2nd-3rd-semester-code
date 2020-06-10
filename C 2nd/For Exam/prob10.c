#include <stdio.h>
int main()
{
    float u,b,c;
    printf("Enter Unit:");
    scanf("%f",&u);
    if(u>=0 && u<=150)
    {
        c=u*2.5;
    }
    else if(u>150 && u<=350)
    {
        c=(150*2.5)+((u-200)*3);
    }
    else if(u>350 && u<=500)
    {
        c=(150*2.5)+(200*3)+((u-150)*3.5);
    }
    else if(u>500)
    {
        c=(150*2.5)+(200*3)+(150*3.5)+((u-500)*4.5);
    }
    else
    {
        printf("Wrong input");
    }

    b=c+(c*0.1);
    printf("\nElectricity Bill:%f",b);
    return 0;
}
