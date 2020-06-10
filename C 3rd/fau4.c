#include<stdio.h>
int main()
{
    int i=0,n=0, a[100],b=0;
    printf("Enter size of array:");
    scanf("%d", &n);
    printf("Enter array elements :");
    for(i=0; i<n; i++)
    {
        scanf("%d", &a[i]);
    }
    int new1,new2,new3,index1, index2, index3;
    printf("Enter 1st value of array:");
    scanf("%d", &new1);
    printf("Enter 2nd value of array:");
    scanf("%d", &new2);
    printf("Enter 3rd value of array:");
    scanf("%d", &new3);
    printf("Enter 1st index of array:");
    scanf("%d", &index1);
    printf("Enter 2nd index of array:");
    scanf("%d", &index2);
    printf("Enter 3rd index of array:");
    scanf("%d", &index3);
    for(i=n; i>=index1; i--)
    {
        a[i+1]=a[i];
    }
    a[index1]=new1;
    b=n+1;
    for(i=b; i>=index2; i--)
    {
        a[i+1]=a[i];
    }
    a[index2]=new2;
    b=b+1;
    for(i=b; i>=index3; i--)
    {
        a[i+1]=a[i];
    }
    a[index3]=new3;

    for(i=0; i<n+3; i++)
    {
        printf("%d\n", a[i]);
    }
    return 0;
}
