#include<stdio.h>
int main(){

   int marks;

   printf("Enter Your Marks:");
   scanf("%d",&marks);

   if(marks<0)
        printf("Invalid Input\nMarks can't be Negative");
   if (marks>=1 && marks<=39)
    printf("Your Are fail");
   else if (marks>=40 && marks<=49)
    printf("You Got C");
   else if(marks>=50 && marks<=59)
   printf("You got B");
   else if (marks>=60 && marks<=69)
   printf("You Got B+");
   else if (marks>=70 && marks<=79)
    printf("You Got A");
   else if (marks>=80 && marks<=100)

       if (marks>=90)
    printf("Excilent");
    else
        printf("YOu Got A+");

        else if (marks>100)
    printf("Invalid Input\nMarks can't be More then limit 100");
   return 0;

}
