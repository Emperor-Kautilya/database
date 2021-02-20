#include <stdio.h>
int main()
{
	int ch,n;
	
	printf("Enter order of matrix : ");
	scanf("%d",&n);
	int a[n][n],b[n][n];
	
	printf("Enter matrix 1 :\n");
	for(int i=0;i<n;i++)
	for(int j=0;j<n;j++)
	scanf("%d",&a[i][j]);
	
	printf("Enter matrix 2 :\n");
	for(int i=0;i<n;i++)
	for(int j=0;j<n;j++)
	scanf("%d",&b[i][j]);
	
	printf("Enter Operation :\n1-> for Addition\n2-> for Multiplication\n");
	scanf("%d",&ch);
	
	if((ch!=1)&&(ch!=2))
	{
		printf("Invalid Operation\n");
		return 0;
	}
	
	printf("Matrix 1 :\n");
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<n;j++)
		printf("%2d ",a[i][j]);
		printf("\n");
	}
	
	printf("Matrix 2 :\n");
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<n;j++)
		printf("%2d ",b[i][j]);
		printf("\n");
	}	
	if(ch==1)
	{
		printf("Sum of Matrices :\n");
		for(int i=0;i<n;i++)
		{
			for(int j=0;j<n;j++)
			printf("%2d ",(a[i][j]+b[i][j]));
			printf("\n");
		}
	}
	else
	{
		int c[n][n];
		printf("Product of Matrices :\n");
		for(int i=0;i<n;i++)
		{
			for(int j=0;j<n;j++)
			{
				int sum=0;
				for(int k=0;k<n;k++)
				sum+=(a[i][k]*b[k][j]);
				c[i][j]=sum;
				printf("%4d ",c[i][j]);
			}	
			printf("\n");
		}	
	}
	return 0;
}
