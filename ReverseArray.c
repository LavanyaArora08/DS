//program to reverse an array
#include<stdio.h>
int main()
{
    int a[]={1,2,3,4,5,6,7,8,9,10};
    int i,j;
    for(i=0,j=9;i<5;i++,j--)
    {
        int temp=a[i];
        a[i]=a[j];
        a[j]=temp;
    }
    printf("The reversed array is ");
    for(i=0;i<10;i++)
    {
        printf("%d, ",a[i]);
    }
    return 0;
}