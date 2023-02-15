//program to find frequency of each element in an array
#include<stdio.h>
int main()
{
    int n;
    printf("Enter size of array ");
    scanf("%d", &n);
    int a1[n],f[n];
    printf("Enter elements of array\n");
    for(int i=0; i<n; i++)
    {
        scanf("%d", &a1[i]);
        f[i]=-1;
    }
    printf("array is\n");
    for(int i=0; i<n; i++)
    {
        printf("%d, ",a1[i]);
    }
    printf("\n");
    int count;
    for(int i=0; i<n; i++)
    {
        count=1;
        for(int j=i+1; j<n; j++)
        {
            if(a1[i]==a1[j])
            {
                count++;
                f[j]=0;
            }
        }
        if(f[i]!=0)
        {
            f[i]=count;
        }
    }
    for(int i=0; i<n; i++)
    {
        if(f[i]!=0)
        {
            printf("Frequency of %d is %d", a1[i], f[i]);
            printf("\n");
        }
    }
    return 0;
}