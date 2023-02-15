#include<stdio.h>
int main()
{
    int a[]={0,1,2,3,4,5,6,7,8,9};
    int s,b=0,e=8;
    printf("\nEnter value to search ");
    scanf("%d",&s);
    while(e>b)
    {
        int mid=(s+e)/2;
        if(a[mid]==s)
        {
            printf("Found the number %d at position %d",s,(mid+1));
            break;
        }
        else if(s<a[mid])
        {
            e=mid-1;
            continue;
        }
        else
        {
            b=mid+1;
            continue;
        }
    }
}