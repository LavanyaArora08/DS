//use pointer to display the address of a charactor variable and an integer variable
#include <stdio.h>
int main()
{
    char c = 'a';
    int i = 10;
    printf("The address of c is %p", &c);
    printf("\nThe address of i is %p", &i);
    return 0;
}