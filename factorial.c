#include <stdio.h>
#include <math.h>
unsigned long factorial(unsigned long n)
{
	if(n==0)
	return 1;
	return n*factorial(n-1);
}
int main()
{
	int n;
	printf("Enter number ");
	scanf("%d",&n);
	printf("%lu",factorial(n));
	return 0;
}

