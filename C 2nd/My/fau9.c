#include <stdio.h>
int array[3][3],i,j, max=0, maxI=0, maxJ=0,sumr=0,sumc=0;

declareArray()
{
    for(i=0; i<3; i++){
        for(j=0; j<3; j++){
            scanf("%d",& array[i][j] );

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
    row();
    col();
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
    printf("Max Value is \t%d & index is\t [%d][%d]\n", max, maxI, maxJ);
}
row()
{
    for(i=0;i<3;i++)
    {
        sumr=0;
        for(j=0;j<3;j++)
        {
            sumr=sumr+array[i][j];
        }
        printf("\nRow %d: %d",i,sumr);
    }
}
col()
{
    for(i=0;i<3;i++)
    {
        sumc=0;
        for(j=0;j<3;j++)
        {
            sumc=sumc+array[j][i];
        }
        printf("\nCol %d: %d",i,sumc);
    }
}
