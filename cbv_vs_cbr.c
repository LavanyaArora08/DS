//write a program to show the difference between call by value and call by reference
#include <stdio.h>
void swap(int, int);
void swap1(int *, int *);
int main()
{
    int a = 10, b = 20;
    //call by value
    printf("Before swap: a = %d, b = %d", a, b);
    swap(a, b);
    printf("After swap: a = %d, b = %d", a, b);
    //call by reference
    printf("Before swap: a = %d, b = %d", a, b);
    swap1(&a, &b);
    printf("After swap: a = %d, b = %d", a, b);
    return 0;
}
void swap(int x, int y)
{
    int temp;
    temp = x;
    x = y;
    y = temp;
}
void swap1(int *x, int *y)
{
    int temp;
    temp = *x;
    *x = *y;
    *y = temp;
}
