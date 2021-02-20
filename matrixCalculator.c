#include<stdio.h>
 /* function to perform addition operation on matrices */
void addition (int n,int a[n][n],int b[n][n])
{
	printf("Sum of matrices :\n"); 	
	for(int i=0;i<n;i++) // loop for row number
	{
		for(int j=0;j<n;j++) // loop for jth element of ith row
		{
			printf("%4d",(a[i][j]+b[i][j]));
		
		}
		printf("\n");// change line after each row
	}	
}
/*function to perform subtraction operation on matrices*/
void subtraction (int n,int a[][n],int b[][n])
{
	printf("Difference of matrices :\n"); 	
	for(int i=0;i<n;i++)// loop for row number
	{
		for(int j=0;j<n;j++)// loop for jth element of ith row
		{
			printf("%4d",a[i][j]-b[i][j]);
		
		}
		printf("\n");// change line after each row
	}	
}
/*function to perform multiplication operation on matrices*/
void multiplication (int n,int a[][n],int b[][n])
{ 	
	printf("Product of matrices :\n"); 	
	for(int i=0;i<n;i++)// loop for row number
	{
		for(int j=0;j<n;j++)// loop for jth element of ith row
		{
			int sum=0;
			for(int k=0;k<n;k++)//loop to multiply entire ith row of one matrices with jth column of other matrices 
			sum+=(a[i][k]*b[k][j]);
			printf("%5d",sum);	
		}
		printf("\n");// change line after each row
	}	
}
int main()
{
	int n;
	printf("Enter order of matrices to be entered : ");
	scanf("%d",&n);
	int a[n][n],b[n][n];
	int ch;	
	printf("Enter matrix 1 :\n");	
	for(int i=0;i<n;i++)// loop for row number
	{
		for(int j=0;j<n;j++)// loop for jth element of ith row
		{
			scanf("%d",&a[i][j]);
		
		}
	}
	printf("Enter matrix 2 :\n");	
	for(int i=0;i<n;i++)// loop for row number
	{
		for(int j=0;j<n;j++)// loop for jth element of ith row
		{
			scanf("%d",&b[i][j]);
		
		}
	}
		printf("Enter operation to be performed :\n1->for Addition (A+B)\n2->for Subtraction (A-B)\n3->for Multiplication (A*B)\n ");
	scanf("%d",&ch);
	printf("Matrix 1 :\n");	
	for(int i=0;i<n;i++)// loop for row number
	{
		for(int j=0;j<n;j++)// loop for jth element of ith row
		{
			printf("%4d ",a[i][j]);
		
		}
		printf("\n");
	}
	printf("Matrix 2 :\n");	
	for(int i=0;i<n;i++)// loop for row number
	{
		for(int j=0;j<n;j++)// loop for jth element of ith row
		{
			printf("%4d",b[i][j]);
		
		}
		printf("\n");
	}

	if(ch==1)
	addition(n,a,b);
	else if(ch==2)
	subtraction(n,a,b);
	else if(ch==3)
	multiplication(n,a,b);
	else 
	printf("Invalid Input");
	return 0;
}
