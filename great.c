#include <stdio.h>
int main()
{
	int n;	
	printf("Enter no. of integers : ");//ask user about how many integers he would like to enter
	scanf("%d",&n);
	int list[n];//create an array to store list of integers 
	printf("Enter integers :\n");
	for(int i=0;i<n;i++)//enter the list of integers
	{
		scanf("%d",&list[i]);
	}
	int g=0;//g stores index of greatest integer lets assume its one at index 0
	for(int i=0;i<n;i++)
	{
		if(list[i]>list[g])//compare element at i with element at index g 
		g=i;//if greater g is i
	}
	printf("Entered integers :\n");
	for(int i=0;i<n;i++)//display the list entered
	{
		printf("%d ",list[i]);
	}
	printf("\nGreatest integer is : %d",list[g]);//display greatest number
	printf("\nGreatest integer is at index : %d",(g));//and its position
	return 0;
}

