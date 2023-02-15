//write a program to add two 3x3 matrices using fuctions 
#include <stdio.h>
void input(int a[3][3])
{
    int i, j;
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }
}
void add(int a[3][3], int b[3][3], int c[3][3])
{
    int i, j;
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            c[i][j] = a[i][j] + b[i][j];
        }
    }
}
void output(int c[3][3])
{
    int i, j;
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            printf("%d ", c[i][j]);
        }
        printf("\n");
    }
}
int main()
{
    int a[3][3], b[3][3], c[3][3];
    printf("Enter the elements of first matrix: ");
    input(a);
    printf("Enter the elements of second matrix: ");
    input(b);
    add(a, b, c);
    printf("Sum of the two matrices: ");
    output(c);
    return 0;
}