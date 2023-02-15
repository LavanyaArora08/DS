#include<stdio.h>
int main()
{
    int a[]={1,0,2,9,3,8,4,7,5,6};

    for(int i=0;i<8;i++)
    {
        for(int j=0;j<8-i;j++)
        {
            if(a[j]>a[j+1])
            {
                int temp=a[j];
                a[j]=a[j+1];
                a[j+1]=temp;
            }
        }
    }
    printf("The sorted array is ");
    for(int i=0;i<9;i++)
    {
        printf("%d, ",a[i]);
    }
}