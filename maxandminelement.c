//program to find maximum and minimum element in an array
#include<stdio.h>
int main()
{
    int a[]={1,2,3,4,5,6,7,8,9,10};
    int max=a[0];
    for(int i=0;i<10;i++)
    {
        if(a[i]>max)
        {
            max=a[i];
        }
    }
    printf("The maximum element in the array is %d \n",max);
    int min=a[0];
    for(int i=0;i<10;i++)
    {
        if(a[i]<min)
        {
            min=a[i];
        }
    }
    printf("The minimum element in the array is %d ",min);
    return 0;
}