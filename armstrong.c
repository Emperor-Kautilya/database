#include <stdio.h>
int main()
{
  int i=0,n;
  printf("Enter the number : ");//enter a number from user
  scanf("%d",&n);
  int m=n,sum=0;//create a variable to store sum and create a copy of n in m
  while(m>0)
    {
    int d=m%10;//take out digit from m
    sum=sum+(d*d*d);//sum the cube of digits
    m=m/10;//update value of m
    }
  if(sum==n)
    printf("%d is an Armstrong number",n);
  else
    printf("%d Not an Armstrong number",n); 
  return 0;
}
