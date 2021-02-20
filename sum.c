#include <stdio.h>
float power(float x,int i)
{
	float f=1.0;
	while(i>0)
	{
		f=f*x;
		i--;
	}
	return f;
}
int main()
{
	float x,y;
	printf("Enter numbers x and y: \n");
	scanf("%f",&x);
	scanf("%f",&y);
	float s=0;
	for(int i=1;i<=20;i++)
	{
	s=s+power((power(x,i)+power(y,i)),(i*2));
	}
	printf("Result : %f",s);
	return 0;
}


