#include<stdio.h>
void bubblesort(int a[],int n)
{
	int i,j;
	for(i=0;i<n-1;i++)
	{
		int swapped=0;
		for(j=0;j<n-i-1;j++)
		{
			if(a[j]>a[j+1])
			{
				int temp=a[j];
				a[j]=a[j+1];
				a[j+1]=temp;
				swapped=1;
			}
		}
		if(swapped==0)
		{
			break;
		}
	}
}
int main()
{
	int a[100],n,i,j;
	printf("Enter the total number of elements:");
	scanf("%d",&n);
	printf("Enter %d elements:\n",n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	printf("Array before sorting:\n");
	for(j=0;j<n;j++)
	{
		printf("%d\n",a[j]);
	}
	bubblesort(a,n);
	printf("Array after sorting:\n");
	for(j=0;j<n;j++)
	{
		printf("%d\n",a[j]);
	}
	return 0;
}
