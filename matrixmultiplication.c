#include<stdio.h>
int main()
{
        int i,k,j,row1,col1,row2,col2;
	int a[100][100],b[100][100],c[100][100];
        printf("Enter the number of MatrixA rows:");
        scanf("%d",&row1);
        printf("Enter the number of MatrixA columns:");
        scanf("%d",&col1);
	printf("Enter matrix A elements:");
        for(i=0;i<row1;i++)
        {
                printf("\n");
                for(j=0;j<col1;j++)
                {
                        scanf("%d",&a[i][j]);
                }
        }

	printf("Enter the number of MatrixB rows:");
        scanf("%d",&row2);
        printf("Enter the number of MatrixB columns:");
        scanf("%d",&col2);
        printf("Enter matrix B elements:\n");
        for(i=0;i<row2;i++)
        {
                printf("\n");
                for(j=0;j<col2;j++)
                {
                        scanf("%d",&b[i][j]);
                }
        }
	for(i=0;i<row1;i++)
	{
        	for(j=0;j<col2;j++)
       		{
				c[i][j]=0;
				for(k=0;k<col1;k++)
                		{
                        		c[i][j]=c[i][j]+(a[i][k]*b[k][j]);
                		}
		}
        
	}
        printf("Matrix A * Matrix B:\n");
        for(i=0;i<row1;i++)
        {
                printf("\n");
                for(j=0;j<col2;j++)
                {
                        printf("%d\t",c[i][j]);
                }
        }
	printf("\n\n");
        return 0;
}
