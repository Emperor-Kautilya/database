#include <math.h>
#include <stdio.h>
int main()
{
	double a,b,c;
	printf("Enter coefficients of quadratic equation in form ax^2+bx+c=0 \n");
	scanf("%lf",&a);
	scanf("%lf",&b);
	scanf("%lf",&c);
	double  D=b*b-4*a*c;
	if(D>0)
	{
	double  x1=((-1*b)+sqrt(D))/(2*a);
	double  x2=((-1*b)-sqrt(D))/(2*a);
	printf("Roots are real and distinct \nRoots are :\nx=%lf and x=%lf",x1,x2);
	}
	else if(D==0)
	{
	double  x1=((-1*b)+sqrt(D))/(2*a);
	printf("Roots are real and repeated \nRoot is :\nx=%lf",x1);
	}
	else
	{
	D=D*(-1);
	printf("Roots are imaginary \nRoots are :\nx=(%lf + (%lf)i )/%lf and x=(%lf + (%lf)i )/%lf",(-1*b),sqrt(D),(2*a),(-1*b),sqrt(D),(2*a));
	}
	return 0;
}
	
