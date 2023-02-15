//program to find sum of both diagonals in a square matrix
#include<stdio.h>
int main()
{
    int n;
    printf("Enter size of matrix ");
    scanf("%d", &n);
    int a[n][n];
    printf("Enter elements of matrix\n");
    for(int i=0; i<n; i++)
    {
        for(int j=0; j<n; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }
    int sum1=0, sum2=0;
    for(int i=0; i<n; i++)
    {
        for(int j=0; j<n; j++)
        {
            if(i==j)
            {
                sum1=sum1+a[i][j];
            }
            if(i+j==n-1)
            {
                sum2=sum2+a[i][j];
            }
        }
    }
    printf("Sum of first diagonal is : %d ", sum1);
    printf("\nSum of second diagonal is : %d ", sum2);
    return 0;
}