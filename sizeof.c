#include<stdio.h>
int main()
{
	int arr[]= {1,2,3,4,5,3,5,6,2};
	int length = sizeof(arr)/sizeof(arr[0]);
	printf("Length of Array: %d", length);
}