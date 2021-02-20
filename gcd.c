# include <stdio.h>
int gcd(int a,int b)
{
	int rem=b%a;
	if(rem==0)
	return a;
	return gcd(rem,a);
}
int main()
{
	int a,b;
	printf("Enter numbers : ");
	scanf("%d",&a);
	scanf("%d",&b);
	int gcd_value=gcd(a,b);
	printf("GCD of %d and %d is %d",a,b,gcd_value);
}

