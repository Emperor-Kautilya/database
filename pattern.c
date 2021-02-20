#include <math.h>
#include <stdio.h>
void triangle5(int n)
{
       int k=1;
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<=i;j++)
		{
		printf("%4d",k++);
		}
		printf("\n");
	}
}
void triangle1(int n)
{
       int k=1;
	for(int i=0;i<n;i++)
	{
		for(int j=n-1;j>i;j--)
		printf("  ");
		for(int j=0;j<=i;j++)
		{
		printf("%4d",k++);
		}
		printf("\n");
	}

}
void triangle2(int n)
{
	for(int i=0;i<n;i++)
	{
		for(int j=n-1;j>i;j--)
		printf(" ");
		for(int j=0;j<=i;j++)
		{
		char ch='*';
		printf("%c ",ch);
		}
		printf("\n");
	}

}
void triangle3(int n)
{
	for(int i=0;i<n;i++)
	{
		for(int j=n-1;j>i;j--)
		printf(" ");
		for(int j=0;j<=i;j++)
		{
		printf("%2d",(i+1));
		}
		printf("\n");
	}
}
void triangle4(int n)
{
	for(int i=0;i<n;i++)
	{
		for(int j=n-1;j>i;j--)
		printf(" ");
		for(int j=0;j<=i;j++)
		{
		printf("%2d",(j+1));
		}
		printf("\n");
	}

}

int main()
{
	int n,ch;
	printf("Enter upto how many lines do you want to print pattern of triangle\n");
	scanf("%d",&n);
	printf("5 Pattern are available\nEnter choice from 1 to 5 : ");
	scanf("%d",&ch);
	if(ch==1)
	triangle1(n);	
	else if(ch==2)
	triangle2(n);	
	else if(ch==3)
	triangle3(n);	
	else if(ch==4)
	triangle4(n);	
	else if(ch==5)
	triangle5(n);	
	return 0;
}
