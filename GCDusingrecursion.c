//program to find the Greatest Common Divisor of two numbers using recursion
#include <stdio.h>
int gcd(int, int);
int main()
{
    int a, b, result;
    printf("Enter two positive integers: ");
    scanf("%d %d", &a, &b);
    result = gcd(a, b);
    printf("G.C.D of %d and %d is %d.", a, b, result);
    return 0;
}
int gcd(int a, int b)
{
    if (b != 0)
        return gcd(b, a % b);
    else
        return a;
}
