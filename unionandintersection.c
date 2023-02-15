//Program to find the union and intersection of two arrays
#include<stdio.h>
int main()
{
    int arr1[10];
    int arr2[10];
    int i,j;
    printf("Enter the elements of first array ");
    for(i=0;i<10;i++)
    {
        scanf("%d",&arr1[i]);
    }
    printf("Enter the elements of second array ");
    for(i=0;i<10;i++)
    {
        scanf("%d",&arr2[i]);
    }
    printf("The union of two arrays is\n");
    for(i=0;i<10;i++)
    {
        printf("%d, ",arr1[i]);
    }
    for(i=0;i<10;i++)
    {
        int f=0;
        for(j=0;j<10;j++)
        {
            if(arr1[i]==arr2[j])
            {
                f++;
            }

        }
        if(f==0)
        {
            printf("%d, ",arr2[i]);
        }
    }
    printf("\nThe interection of two arrays is\n:");
    for(i=0;i<10;i++)
    {
        for(j=0;j<10;j++)
        {
            if(arr1[i]==arr2[j])
            {
                printf("%d, ",arr1[i]);
            }
        }
    }
}