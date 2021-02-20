#include <stdio.h>
int main()
{
	int n;
	printf("Enter no. of integers : ");//ask user about how many entries he would like
	scanf("%d",&n);
	float list[n];//create a array to store n numbers
	printf("Enter numbers :\n");
	float sum=0.0;//variable to store sum
	for(int i=0;i<n;i++)
	{
		scanf("%f",&list[i]);//enter the number from user
		sum=sum+list[i];//keep adding the numbers entered to sum
	}
	printf("Sum of numbers : %f",sum);//print the sum of values
	return 0;
}

