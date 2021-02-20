#include <stdio.h>
int main()
{
int n;// variable to store number entered
printf("Enter the number to be checked : ");//statment asking user to enter number
scanf("%d",&n);//statment to enter number
int c=0,i=1;//c is a counter 
while(i<=n)//loop divides by every numer from 1 to n 
{
if(n%i==0)//if n is divisible by i
{
c=c+1;//counter increses itself every time a number devides it
}
i=i+1;
}
if(c==2)//if only 1 and number itself(n) devides n
{
printf("Prime Number");
}
else
{
printf("Not a Prime Number");
return 0;
}
}

