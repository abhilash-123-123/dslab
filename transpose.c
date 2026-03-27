#include<stdio.h>
int main()
{
	int a[50][50],b[50][50],i,j,m,n;
	printf("Enter the number of rows:");
	scanf("%d",&m);
	printf("Enter the number of columns:");
	scanf("%d",&n);
	printf("enter the numbers of the matrix:\n");
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
			scanf("%d",&a[i][j]);
		}
	}
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
			b[i][j]=a[j][i];
		}
	}
	printf("The transpose is given below\n");
	for(i=0;i<n;i++)
	{
		for(j=0;j<m;j++)
		{
			printf("%d\t",b[i][j]);
		}
		printf("\n");
	}
	return 0;
}
