#include <stdio.h>
int array[3][3],i,j, max=0, maxI=0, maxJ=0;
declareArray()
{
    for(i=0; i<3; i++){
        for(j=0; j<3; j++){
            scanf("%d",& array[i][j] );
            printf("[%d][%d]",i,j);
        }
    }

}

main()
{
    declareArray();
     for(i=0; i<3; i++){
            for(j=0; j<3; j++){
    printf("\t%d", array[i][j]);
            }
            printf("\n");
    }

    maxElement();
}
maxElement(){
    for(i=0; i<3; i++){
            for(j=0; j<3; j++)
            {
                if(max<array[i][j])
                {
                    max=array[i][j];
                    maxI=i;
                    maxJ=j;
                }
            }
    }
    printf("Max Value is \t%d & index is\t [%d][%d]", max, maxI, maxJ);
}
