//program to add, subtract, multiply and divide two numbers using pointer which have been accepted from the user
#include <stdio.h>
int main()
{
    int a, b, sum, sub, mul, div;
    int *p1, *p2;
    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);
    p1 = &a;
    p2 = &b;
    sum = *p1 + *p2;
    sub = *p1 - *p2;
    mul = *p1 * *p2;
    div = *p1 / *p2;
    printf("Sum = %d\nSub = %d\nMul = %d\nDiv = %d", sum, sub, mul, div);
    return 0;
}