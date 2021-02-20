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
	int op1,op2;//variable to store options he chose
	printf("Number System of input data,choose:\n2-> for Binary \n10-> for Decimal \n8-> for Octal \n16-> for Hexadecimal\n ");
	scanf("%d",&op1);
	printf("Enter number : ");
	scanf("%s",n);
	printf("Number System of output data,enter:\n2-> for Binary \n10-> for Decimal \n8-> for Octal \n16-> for Hexadecimal\n ");
	scanf("%d",&op2);
	length();
	int v=convertDecimal(len-1,op1,0);
	if(op2==10)
	printf("Decimal value of %s is ",n);
	if(op2==2)
	{
	printf("Binary value of %s is ",n);
	}
	if(op2==8)
	{
	printf("Octal value of %s is ",n);
	}
	if(op2==16)
	{
	printf("HexaDecimal value of %s is ",n);
	}
	convert(v,op2);
	return 0;
}	

