#include<stdio.h>
void insertion_sort(int arr[],int n)
{
	int i,j,key;
	for(i=0;i<n;i++)
	{
		key=arr[i];
		j=i-1;
		while(j>=0&&arr[j]>key)
		{
			arr[j+1]=arr[j];
			j=j-1;
		}
		arr[j+1]=key;
	}
}
void printArr(int arr[],int n)
{
	for(int i=0;i<n;i++)
	{
		printf("%d\n",arr[i]);
	}
}
int main()
{
	int arr[100],i,n;
	printf("Enter total number of elements:");
	scanf("%d",&n);
	printf("Enter %d elements of the array:\n",n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}
	printf("Sorted array:\n");
	insertion_sort(arr,n);
	printArr(arr,n);
	return 0;
}


