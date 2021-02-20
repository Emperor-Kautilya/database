#include <math.h>
#include <stdio.h>
int fact(int n)
{
	if(n==0)
	return 1;
	return n*fact(n-1);
}
int main()
{
	int n;
	printf("Enter upto how many rows do you want to print pascals triangle\n");
	scanf("%d",&n);
	for(int i=0;i<n;i++)
	{
		for(int j=n-1;j>i;j--)
		printf("  ");
		for(int j=0;j<=i;j++)
		{
		int k=fact(i)/(fact(j)*fact(i-j));
		printf("%4d",k);
		}
		printf("\n");
	}
	return 0;
}
