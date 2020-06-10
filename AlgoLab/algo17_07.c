#include<stdio.h>
int main(){
    printf("Enter first Array size : ");
    int firstSize,secondSize,i,j;
    scanf("%d",&firstSize);
    int firstArray[firstSize];
    printf("Enter First Array Value : ");
    for(i=0;i<firstSize;i++)scanf("%d",&firstArray[i]);
    printf("Enter Second Array Size : ");
    scanf("%d",&secondSize);
    int secondArray[secondSize],matrix[firstSize+1][secondSize+1];
    printf("Enter Second Array Value : ");
    for(i=0;i<secondSize;i++)scanf("%d",&secondArray[j]);

    return 0;
}
