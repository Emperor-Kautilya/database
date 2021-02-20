#include <stdio.h>
#include <math.h>
void fibonnaci(int f,int s,int i)
{
	if(i==0)
	return;
	int t=f+s;
	printf("%d ",t);
	fibonnaci(s,t,i-1);
}
int main()
{
	int n;
	printf("Enter number of series :\n");
	scanf("%d",&n);
	printf("Series :\n");
	if(n==1)
	printf("0");
	else if(n>=2)
	{
		printf("0 1 ");
		if(n>=3)
		fibonnaci(0,1,n-2);
	}
}
