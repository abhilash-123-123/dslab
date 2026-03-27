#include<stdio.h>
int main()
{
	int a[50],i,n;
	printf("how many numbers to read?:");
	scanf("%d",&n);
	printf("enter the numbers:\n");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	printf("The given array is:");
	for(i=0;i<n;i++)
	{
		printf("%d\t",a[i]);
	}
	printf("\n");
	return 0;
}
