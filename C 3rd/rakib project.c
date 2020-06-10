
#include<stdio.h>
#include<string.h>
struct booking{

     char name[100];
     char occupation[100];
     int  age;
     char phone_number[100];
     int  stay_day;
     char r_number[20];

}s;

main(){
 int choose;
    printf("\n\t\t================================================================================================\n\n");
    printf("\t\t\t\t\t     $$  $$  $$$$$ $$$$$$ $$$$$$ $$\n");
    printf("\t\t\t\t\t     $$  $$ $$   $$  $$   $$     $$\n");
    printf("\t\t\t\t\t     $$$$$$ $$   $$  $$   $$$$$$ $$\n");
    printf("\t\t\t\t\t     $$  $$ $$   $$  $$   $$     $$\n");
    printf("\t\t\t\t\t     $$  $$  $$$$$   $$   $$$$$$ $$$$$$\n");

    printf("\n\t           $$$     $$$  $$$$$$  $$$     $$ $$$$$$ $$$$$$  $$$$$$ $$$     $$$ $$$$$$ $$$     $$ $$$$$$");
    printf("\n\t           $$ $$ $$ $$  $$  $$  $$ $$   $$ $$  $$ $$      $$     $$ $$ $$ $$ $$     $$ $$   $$   $$");
    printf("\n\t           $$  $$$  $$  $$$$$$  $$  $$  $$ $$$$$$ $$ $$$$ $$$$$$ $$  $$$  $$ $$$$$$ $$  $$  $$   $$");
    printf("\n\t           $$       $$  $$  $$  $$   $$ $$ $$  $$ $$   $$ $$     $$       $$ $$     $$   $$ $$   $$");
    printf("\n\t           $$       $$  $$  $$  $$     $$$ $$  $$ $$$$$$  $$$$$$ $$       $$ $$$$$$ $$     $$$   $$ \n\n");
    printf("\t        ===============================================================================================\n\n");
    getch();
    printf("\t\t\t\t\t\t1.Room Booking\n\n\t\t\t\t\t\t2.View Room Records\n\n\t\t\t\t\t\t3.Search Customer Detail");
    printf("\n\n\t\t\t\t\t  \tEnter Your Choice:");
    scanf("%d",&choose);

 switch(choose){
     case 1:r_booking();
     break;
     case 2:view();
     break;
     case 3:search_room_number();
     break;

   }


}


r_booking(){

 system("cls" );
 printf("\n\t\t================================================================================================\n\n");
 printf("\t\t\t\t\t     $$  $$  $$$$$ $$$$$$ $$$$$$ $$\n");
    printf("\t\t\t\t\t     $$  $$ $$   $$  $$   $$     $$\n");
    printf("\t\t\t\t\t     $$$$$$ $$   $$  $$   $$$$$$ $$\n");
    printf("\t\t\t\t\t     $$  $$ $$   $$  $$   $$     $$\n");
    printf("\t\t\t\t\t     $$  $$  $$$$$   $$   $$$$$$ $$$$$$\n");

    printf("\n\t           $$$     $$$  $$$$$$  $$$     $$ $$$$$$ $$$$$$  $$$$$$ $$$     $$$ $$$$$$ $$$     $$ $$$$$$");
    printf("\n\t           $$ $$ $$ $$  $$  $$  $$ $$   $$ $$  $$ $$      $$     $$ $$ $$ $$ $$     $$ $$   $$   $$");
    printf("\n\t           $$  $$$  $$  $$$$$$  $$  $$  $$ $$$$$$ $$ $$$$ $$$$$$ $$  $$$  $$ $$$$$$ $$  $$  $$   $$");
    printf("\n\t           $$       $$  $$  $$  $$   $$ $$ $$  $$ $$   $$ $$     $$       $$ $$     $$   $$ $$   $$");
    printf("\n\t           $$       $$  $$  $$  $$     $$$ $$  $$ $$$$$$  $$$$$$ $$       $$ $$$$$$ $$     $$$   $$ \n\n");
    printf("\t        ===============================================================================================\n\n");
    getch();

 printf("\n\t\t\t\t\t\tFill Up The Form\n\n");
 printf("\t\t\t\t=================================================");
 FILE*fp;
 fp=fopen("detail.txt","a");
 struct booking s;

 printf("\n\n\t\t\t\t\t\tEnter Room Number:");
 scanf("%s",&s.r_number);
 printf("\n\t\t\t\t\t\tEnter Name:");
 scanf("%s",&s.name);
 printf("\n\t\t\t\t\t\tEnter Age:");
 scanf("%d",&s.age);
 printf("\n\t\t\t\t\t\tEnter Phone Number:");
 scanf("%s",&s.phone_number);
 printf("\n\t\t\t\t\t\tEnter Occupation:");
 scanf("%s",&s.occupation);
 printf("\n\t\t\t\t\t\tEnter How Many Days Customer Want to stay:");
 scanf("%d",&s.stay_day);
 fwrite(&s,sizeof(s),1,fp);
 fclose(fp);
}

view(){
    system("cls");

    printf("\n\t\t================================================================================================\n\n");
    printf("\t\t\t\t\t     $$  $$  $$$$$ $$$$$$ $$$$$$ $$\n");
    printf("\t\t\t\t\t     $$  $$ $$   $$  $$   $$     $$\n");
    printf("\t\t\t\t\t     $$$$$$ $$   $$  $$   $$$$$$ $$\n");
    printf("\t\t\t\t\t     $$  $$ $$   $$  $$   $$     $$\n");
    printf("\t\t\t\t\t     $$  $$  $$$$$   $$   $$$$$$ $$$$$$\n");

    printf("\n\t           $$$     $$$  $$$$$$  $$$     $$ $$$$$$ $$$$$$  $$$$$$ $$$     $$$ $$$$$$ $$$     $$ $$$$$$");
    printf("\n\t           $$ $$ $$ $$  $$  $$  $$ $$   $$ $$  $$ $$      $$     $$ $$ $$ $$ $$     $$ $$   $$   $$");
    printf("\n\t           $$  $$$  $$  $$$$$$  $$  $$  $$ $$$$$$ $$ $$$$ $$$$$$ $$  $$$  $$ $$$$$$ $$  $$  $$   $$");
    printf("\n\t           $$       $$  $$  $$  $$   $$ $$ $$  $$ $$   $$ $$     $$       $$ $$     $$   $$ $$   $$");
    printf("\n\t           $$       $$  $$  $$  $$     $$$ $$  $$ $$$$$$  $$$$$$ $$       $$ $$$$$$ $$     $$$   $$ \n\n");
    printf("\t        ===============================================================================================\n\n");
    getch();

    printf("\t\t\t\t\tCustomer Detail\n\n");
    FILE *fp;
    fp=fopen("detail.txt","r");
    struct booking s;

    printf("Room No\t Name\tAge\t Phone Number \t Occupation\t Staying Day\n");

    while(fread(&s,sizeof(s),1,fp))
    {
        printf("%s\t %s\t %d\t %s\t %s\t %d\n",s.r_number,s.name,s.age,s.phone_number,s.occupation,s.stay_day);
    }
    fclose(fp);

}


search_room_number()
{
    system("cls");
    printf("\n\t\t================================================================================================\n\n");
    printf("\t\t\t\t\t     $$  $$  $$$$$ $$$$$$ $$$$$$ $$\n");
    printf("\t\t\t\t\t     $$  $$ $$   $$  $$   $$     $$\n");
    printf("\t\t\t\t\t     $$$$$$ $$   $$  $$   $$$$$$ $$\n");
    printf("\t\t\t\t\t     $$  $$ $$   $$  $$   $$     $$\n");
    printf("\t\t\t\t\t     $$  $$  $$$$$   $$   $$$$$$ $$$$$$\n");

    printf("\n\t           $$$     $$$  $$$$$$  $$$     $$ $$$$$$ $$$$$$  $$$$$$ $$$     $$$ $$$$$$ $$$     $$ $$$$$$");
    printf("\n\t           $$ $$ $$ $$  $$  $$  $$ $$   $$ $$  $$ $$      $$     $$ $$ $$ $$ $$     $$ $$   $$   $$");
    printf("\n\t           $$  $$$  $$  $$$$$$  $$  $$  $$ $$$$$$ $$ $$$$ $$$$$$ $$  $$$  $$ $$$$$$ $$  $$  $$   $$");
    printf("\n\t           $$       $$  $$  $$  $$   $$ $$ $$  $$ $$   $$ $$     $$       $$ $$     $$   $$ $$   $$");
    printf("\n\t           $$       $$  $$  $$  $$     $$$ $$  $$ $$$$$$  $$$$$$ $$       $$ $$$$$$ $$     $$$   $$ \n\n");
    printf("\t        ===============================================================================================\n\n");
    getch();

   printf("\t\t\t\t\t\tCustomer About Search Option\n\n");
   printf("\t\t\t\t==========================================================");
   FILE*fp;
   fp=fopen("detail.txt","r");
   struct booking s;
   char se_room[20];




   printf("\n\n\t\t\t\t\t\t Enter Room Number:");
   scanf("%s",&se_room);

   while(fread(&s,sizeof(s),1,fp)){

  if (strcmp(se_room,s.r_number) == 0)
 {
       printf("\n\t\t\t\t\n\nName\tAge\tPhone Number\tOccupation\tStaying Day\n");
       printf("%s\t%d\t%s\t%s\t\t%d\n",s.name,s.age,s.phone_number,s.occupation,s.stay_day);

   }

   }
fclose(fp);
}
