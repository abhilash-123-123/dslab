#include<stdio.h>
int main()
{
	int a[50][50],i,j,flag=0;
	printf("enter the elements of 3x3 matrix:");
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			scanf("%d",&a[i][j]);
                }
        }
	for(i=0;i<3;i++)
        {
                if(flag==1)
		{
			break;
		}
		{
			for(j=0;j<3;j++)
                	{
                        	if(a[i][j]!=a[j][i])
				{
					printf("the matrix is not symmetric\n");
					flag=1;
					break;
				}
			}
        	}
	}
	if(flag==0)
	{
		printf("The matrix is symmetric\n");
	}

	return 0;
}
