#include<stdio.h>
int n,a[100];
int main()
{
	void merge(int a[],int);
	void traversal(int a[],int);
	int insertion(int a[],int);
	void deletion(int a[],int);
	int i,fun,op;
	printf("Enter total elements of the array:");
	scanf("%d",&n);
	printf("Enter %d elements:\n",n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
do
{
	printf("\nEnter the operation you want to execute:\n 1-insertion\n 2-deletion\n 3-traverson\n 4-merging two arrays\n 5-exit\n\n");
	scanf("%d",&op);
	switch(op)
	{
		case 1: insertion(a,n);
			break;
		case 2: deletion(a,n);
			break;
		case 3: traverson(a,n);
			break;
		case 4: merge(a,n);
			break;
		case 5: printf("Exit program\n");
			break;
		default:printf("Invalid selection\n");
			break;
	}
}
while(op!=5);
	return 0;
}
void merge(int a[],int n)
{
	int j,n2,i;
	printf("\nMERGING TWO ARRAYS\n");
	printf("Enter total elements of the second array:");
	scanf("%d",&n2);
	printf("Enter the elements of the second array:\n");
	for(j=n;j<n2+n;j++)
	{
		scanf("%d",&a[j]);
	}
	printf("the updated array is:\n");
	for(i=0;i<n+n2;i++)
	{
		printf("%d\n",a[i]);
	}
}
void traversal(int a[],int n)
{
	int i;
	printf("\nTRAVERSAL(Dispaly entered array\n");
	for(i=0;i<n;i++)
	{
		printf("%d\n",a[i]);
	}
}
int insertion(int a[],int n)
{
	int p,i,num,number;
	printf("\nINSERTION\n");
	printf("Enter the number to insert:");
	scanf("%d",&number);
	printf("Enter the position to insert:");
	scanf("%d",&num);
	p=num-1;
	for(i=n;i>p;i--)
	{
		a[i]=a[i-1];
	}
	a[i]=number;
	for(i=0;i<=n;i++)
	{
		printf("%d\n",a[i]);
	}
	return 0;
}
void deletion(int a[],int n)
{
	int i,p,num;
	printf("\nDELETION\n");
	printf("Element position to delete:");
	scanf("%d",&num);
	p=num-1;
	for(i=p;i<n;i++)
	{
		a[i]=a[i+1];
	}
	for(i=0;i<n;i++)
	{
		printf("%d\n",a[i]);
	}
}
