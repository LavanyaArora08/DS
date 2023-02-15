#include<stdio.h>
int main()
{
    int n;
    int pos,b;
    printf("Enter size of array ");
    scanf("%d", &n);
    int a1[n];
    printf("Enter elements of array\n");
    for(int i=0; i<n; i++)
    {
        scanf("%d", &a1[i]);
    }
    printf("array is\n");
    for(int i=0; i<n; i++)
    {
        printf("%d, ",a1[i]);
    }
    printf("\n");
    printf("Enter position to delete");
    scanf("%d", &pos);
    for(int i=pos-1; i<n-1;i++)
    {
        a1[i]=a1[i+1];
    }
    a1[n-1]=0;
    pos=0;
    printf("Enter position to insert number: ");
    scanf("%d ", &pos);
    printf("Emter number to insert: ");
    scanf("%d ", &b);
    for(int i=n-1; i>pos-1;i--)
    {
        a1[i]=a1[i-1];
    }
    a1[pos-1]=b;
    for(int i=0;i<n;i++)
    {
        printf("%d ",a1[i]);
    }
}