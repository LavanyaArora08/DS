//program to read an static integer array using pointer
#include <stdio.h>
int main()
{
    int a[5] = {1, 2, 3, 4, 5};
    int *p = a;
    int i;
    for (i = 0; i < 5; i++)
    {
        printf("%d", *p);
        p++;
    }
    return 0;
}
