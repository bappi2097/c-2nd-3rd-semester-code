#include <stdio.h>
double circle(double radius);
float square(float length);
int main()
{
    double r,pai=3.1416,a,b;
    int choice;
    printf("Enter radius");
    scanf("%lf",&r);
   // printf("Enter radius");
   //scanf("%d",&r);
   // printf("Enter radius");
   //scanf("%d",&r);
    printf("Welcome to calculate area of\n");
    printf("1. Circule\n");
    printf("2. Square\n");
    printf("3. Rectangle\n");
    printf("4. Triangle\n");
    scanf("%d",&choice);
    switch(choice)
    {
    case 1:
        printf("%lf",circle(r));
        break;
    case 2 :
        printf("%lf",square(r));

        break;
    case 3:

        break;
    case 4:

        break;
    default :

        break;
    }
}
double circle(double radius)
{
    return 3.1416*radius*radius;
}
float square(float length)
{
    return length*length;
}
/*double circle(double radius)
{
    return 3.1416*radius*radius;
}
double circle(double radius)
{
    return 3.1416*radius*radius;
}*/
