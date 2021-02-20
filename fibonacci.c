#include <stdio.h>
int main()
{
int n;
printf("Enter number of elements: ");
scanf("%d",&n);
int f=0,s=1,t;
printf("\nFibonacci : \n%d %d ",f,s);
while(n>2)
{
t=f+s;
printf("%d ",t); 
f=s;
s=t;
n--;
}
}


