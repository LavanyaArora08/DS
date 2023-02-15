//program to find the factorial of a number using recursion
#include <stdio.h>
int factorial(int);
int main()
{
    int n, fact;
    printf("Enter a positive integer: ");
    scanf("%d", &n);
    fact = factorial(n);
    printf("Factorial of %d = %d", n, fact);
    return 0;
}
int factorial(int n)
{
    if (n >= 1)
        return n * factorial(n - 1);
    else
        return 1;
}
