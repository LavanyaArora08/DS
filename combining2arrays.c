//program to combine two arrays into third array
#include<stdio.h>
int main()
{
    int a,b;
    printf("Enter size of first array ");
    scanf("%d",&a);
    printf("Enter size of second array ");
    scanf("%d",&b);
    int arr[a];
    int arr1[b];
    int arr2[a+b];
    int i,j;
    printf("Enter the elements of first array ");
    for(i=0;i<a;i++)
    {
        scanf("%d",&arr[i]);
    }
    printf("Enter the elements of second array ");
    for(i=0;i<b;i++)
    {
        scanf("%d",&arr1[i]);
    }
    printf("The combined array is ");
    for(i=0;i<a;i++)
    {
        arr2[i]=arr[i];
    }
    for(j=0;j<b;j++)
    {
        arr2[i]=arr1[j];
        i++;
    }
    for(i=0;i<a+b;i++)
    {
        printf("%d, ",arr2[i]);
    }
    return 0;
}