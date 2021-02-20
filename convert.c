#include <stdio.h>
#include <stdlib.h>
#include <math.h>
char n[1000];
int len=0;
int DecryptValue(char a)
{
	int t=(int)a;
	if(t>47&&t<58)
	t=t-48;
	else if(t>=65&&t<=70)
	t=t-55;
	return t;
}
char EncryptValue(int t)
{
	if(t>=0&&t<=9)
	t=t+48;
	else if(t>=10&&t<=15)
	t=t+55;
	char x=(char)t;
	return x;
}
int convertDecimal(int d,int op1,int i)
{
	if(i==len)
	return 0;
	int t=DecryptValue(n[i]);
	return t*pow(op1,d)+convertDecimal(d-1,op1,i+1);
}
void convert(int d,int op2) 
{	
	if(d==0)
	return;
	char v=EncryptValue(d%op2);
	convert(d/op2,op2);
	printf("%c",v);
	return;
}
void length()
{
	if(n[len]=='\0')
	{
	return;
	}
	len++;
	length();
}
int main()
{
	int op1;//variable to store option
	printf("Enter number : ");
	scanf("%s",n);
	length();
	int op2[]={2,10,8,16};
	int v=0;
	if(n[0]=='o')
	{
		op1=8;
		v=convertDecimal(len-2,op1,1);
		op2[2]=0;
	}
	else if(n[0]!='0')
	{
		op1=10;
		v=convertDecimal(len-1,op1,0);
		op2[1]=0;
	}
	else
	{
		if(n[1]=='x')
		{	
			op1=16;
			v=convertDecimal(len-3,op1,2);
			op2[3]=0;
		}
		else
		{
			op1=2;
			v=convertDecimal(len-2,op1,1);
			op2[0]=0;
	
		}
	}
	//int v=convertDecimal(len-1,op1,0);
	for(int i=0;i<=3;i++)
	{	
		if(op2[i]==0)
		continue;
		if(op2[i]==10)
		printf("\nDecimal value of %s is ",n);
		if(op2[i]==2)
		printf("\nBinary value of %s is 0",n);
		if(op2[i]==8)
		printf("\nOctal value of %s is o",n);
		if(op2[i]==16)
		printf("\nHexaDecimal value of %s is 0x",n);
		convert(v,op2[i]);
	}
	return 0;
}	

