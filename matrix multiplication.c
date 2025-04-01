#include<stdio.h>
int main()
{
	int a[100][100], b[100][100], c[100][100], i, j,k, r1, r2, c1, c2;

	printf("\nEnter number of rows and columns of matrix A: ");
	scanf("%d %d", &r1, &c1);

	printf("\nEnter number of rows and columns of matrix B: ");
	scanf("%d %d", &r2, &c2);
	if (c1 != r2)
	{
		printf("\nMatrix multiplication is not possible ");
		return 0; 
	}
	printf("\nEnter elements of matrix A:\n");
	for (i = 0; i < r1; i++)
	{
		for (j = 0; j < c1; j++)
		{
			scanf("%d", &a[i][j]);
		}
	}
	printf("\nEnter elements of matrix B:\n");
	for (i = 0; i < r2; i++)
	{
		for (j = 0; j < c2; j++)
		{
			scanf("%d", &b[i][j]);
		}
	}
	for (i = 0; i < r1; i++)
	{
		for (j = 0; j < c1; j++)
		{
			c[i][j] = 0;
			for(k=0;k<c1;k++)
			{
				c[i][j]=c[i][j]+a[i][k]*b[k][j];
			}
		}
	}	printf("\nThe resultant matrix is:\n");
	for (i = 0; i < r1; i++)
	{
		for (j = 0; j < c2; j++)
		{
			printf("%d ", c[i][j]);
		}
		printf("\n");
	}
	return 0;
}
