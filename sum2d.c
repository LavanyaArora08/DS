#include<stdio.h>
int main()
{
    int arr[2][2];
    int arr1[2][2];
    int sum[2][2];
    int i,j;
    printf("Enter the elements of first matrix");
    for(i=0;i<2;i++)
    {
        for(j=0;j<2;j++)
        {
            scanf("%d",&arr[i][j]);
        }
    }
    printf("Enter the elements of second matrix");
    for(i=0;i<2;i++)
    {
        for(j=0;j<2;j++)
        {
            scanf("%d",&arr1[i][j]);
        }
    }
    for(i=0;i<2;i++)
    {
        for(j=0;j<2;j++)
        {
            sum[i][j]=arr[i][j]+arr1[i][j];
        }
    }
    printf("Sum of two matrix is\n");
    for(i=0;i<2;i++)
    {
        for(j=0;j<2;j++)
        {
            printf("%d\t",sum[i][j]);
        }
        printf("\n");
    }
    return 0;
}