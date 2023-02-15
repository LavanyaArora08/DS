//Q. Program in C to multiply two matrices using loops.
#include<stdio.h>
int main()
{
    int arr[2][2];
    int arr1[2][2];
    int mul[2][2];
    printf("Enter the elements of first matrix");
    for(int i=0;i<2;i++)
    {
        for(int j=0;j<2;j++)
        {
            scanf("%d",&arr[i][j]);
        }
    }
    printf("Enter the elements of second matrix");
    for(int i=0;i<2;i++)
    {
        for(int j=0;j<2;j++)
        {
            scanf("%d",&arr1[i][j]);
        }
    }
    for(int i=0;i<2;i++)
    {
        for(int j=0;j<2;j++)
        {
            mul[i][j]=0;
            for(int k=0;k<2;k++)
            {
                mul[i][j]+=arr[i][k]*arr1[k][j];
            }
        }
    }
    printf("Multiplication of two matrix is\n");
    for(int i=0;i<2;i++)
    {
        for(int j=0;j<2;j++)
        {
            printf("%d\t",mul[i][j]);
        }
        printf("\n");
    }
}
