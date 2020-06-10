#include<stdio.h>
int i,j,array[3][3],max=0,min;

declareArray(){

   for(i=0;i<3;i++)
   {
       for (j=0;j<3;j++)
       {
        scanf("\n%d",&array[i][j]);
       }
   }
}

max_element(){

    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
            if(array[i][j]>max)
            max=array[i][j];

        }
        printf("\nMaximum Value is %d",max);
    }

minElement(){
min=array[0][0];
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++){
           if (array[i][j]<min)
              min=array[i][j];
        }
    }
       printf("\nMinimum Value is: %d",min);
}


main()
{
    declareArray();
    max_element();
    minElement();
}
