#include <stdio.h>
int array[3][4],i=0,j=0;
main()
{
     for(i=0; i<3; i++){
        for(j=0; j<4; j++){
            printf("Enter value of[%d][%d] : ", i, j);
            scanf("%d", &array[i][j]);
        }
    }
    s();
}
s()
{
    int sum=0;
    for(i=0; i<3; i++)
        {
        for(j=0; j<4; j++)
        {
            sum=sum+array[i][j];
        }
    }
    printf("\n Sum of All elements: %d\n\n", sum);
    row();
}
row()
{
    printf("\n Sum of Rows: \n");
    int sum=0;
    for(i=0; i<3; i++)
        {
            sum=0;
        for(j=0; j<4; j++)
        {
            sum=sum+array[i][j];
        }
        printf("\n");
            printf("\n Sum of the Row: %d \t %d", i+1, sum);
    }
    col();
}

col()
{
    printf("\n Sum of Col: \n");
     int sum=0;
    for(j=0; j<4; j++)
        {
            sum=0;
        for(i=0; i<3; i++)
        {
            sum=sum+array[i][j];
        }
        printf("\n");
            printf("\n Sum of the Col: %d \t %d\n", j+1, sum);
    }
}
