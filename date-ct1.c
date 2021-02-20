#include <stdio.h>
#include <math.h>
int main()
{
	char d[7];
	printf("Enter the date : ddmmyy\n");
	scanf("%s",d);
	int yy=(d[4]-48)*10+(d[5]-48);
	int dd=(d[0]-48)*10+(d[1]-48);
	int mm=(d[2]-48)*10+(d[3]-48);
	if(yy>=80)
	yy=yy+1900;
	else 
	yy=yy+2000;
	int v[]={0,31,28,31,30,31,30,31,31,30,31,30,31};
	char v1[13][9]={"","January","February","March","April","May","June","July","August","September","October","November","December"};
	if(yy%100==0)
	{
	if(yy%400==0)
	v[2]=29;
	}
	else if(yy%4==0)
	v[2]=29;
	if(dd<0||dd>v[mm])
	{
		printf("Invaid date");
		return 0;
	}
	if(mm<0||mm>12)
	{
		printf("Invaid date");
		return 0;
	}
	if(yy<0)
	{
		printf("Invaid date");
		return 0;
	}
	printf("%s %d,%d",v1[mm],dd,yy);
}
	
