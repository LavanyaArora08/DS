#include<stdio.h>
int  main()
{
    int i,j,r,c;
    printf("Enter order of a matrix\n");
    scanf("%d"  , &c);
    scanf("%d", &r);
    int a[r][c];
    printf("Enter values in the matrix\n");
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            scanf("%d", &a[i][j]);
        }
    }
    printf("Entered matrix: \n");
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            printf("%d ", a[i][j]);
        }
        printf("\n");
    }
    int sumr, sumc;
    for( i=0;i<r;i++)
    {
        sumr=0;
        for(j=0;j<c;j++)
        {
            sumr=sumr+a[i][j];
        }
        printf("sum of row %d: %d \n", (i+1),sumr);
    }
    for(i=0;i<r;i++)
    {
        sumc=0;
        for(j=0;j<c;j++)
        {
            sumc=sumc+a[j][i];
        }
        printf("sum of column %d: %d \n", (i+1),sumc);
    }
}