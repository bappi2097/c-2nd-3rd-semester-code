#include<stdio.h>
main(){
	int i,j,array [3] [2];
	for (i=0; i<3; i++){
		for (j=0; j<2;j++)
		 scanf ("%d",&array [i] [j]);
	}
  for (i=0; i<3; i++){
  	for ( j=0; j<2; j++){
  	printf("\t%d\t", array [i]  [j]);
  	}
  	printf("\n");
  }
  for ( j=0; j<3; j++)
    {
  	array[j][1]=array[j][0]+array[j][1];
  	printf("%d\n",array[j][1]);
  	}
}
