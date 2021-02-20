#include<stdio.h>
float sum(float x,float y)
{
	return (x+y);
}
float sub(float x,float y)
{
	return (x-y);
}
float multi(float x,float y)
{
	return (x*y);
}
float div(float x,float y)
{
	return (x/y);
}
int main()
{
	float x,y;
	char o;
	printf("Enter number x and y : ");
	scanf("%f",&x);
	scanf("%f",&y);
	printf("Enter number operation to be performed (+,-,*,/) : ");
	scanf(" %c",&o);
	if(o=='+')
	printf("%f",sum(x,y));
	if(o=='-')
	printf("%f",sub(x,y));
	if(o=='*')
	printf("%f",multi(x,y));
	if(o=='/')
	printf("%f",div(x,y));
	return 0;
}
