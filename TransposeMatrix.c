//Program to find the transpose of a matrix
#include<stdio.h>
int main()
{
    int r,c;
    printf("Enter the size of matrix");
    scanf("%d %d",&r,&c);
    int arr[r][c];
    int transpose[c][r];
    int i,j;
    printf("Enter the elements of matrix ");
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            scanf("%d",&arr[i][j]);
        }
    }
    printf("Original matrix is \n");
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            printf("%d\t",arr[i][j]);
        }
        printf("\n");
    }
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            transpose[j][i]=arr[i][j];
        }
    }
    printf("Transpose of matrix is \n");
    for(i=0;i<c;i++)
    {
        for(j=0;j<r;j++)
        {
            printf("%d\t",transpose[i][j]);
        }
        printf("\n");
    }
    return 0;
}