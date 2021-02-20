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
	int l=0;//l stores index of least integer lets assume its one at index 0
	for(int i=0;i<n;i++)
	{
		if(list[i]<list[l])//compare element at i with element at index l 
		l=i;//if less then l is i
	}
	printf("Entered integers :\n");
	for(int i=0;i<n;i++)//display the list entered
	{
		printf("%d ",list[i]);
	}
	printf("\nLeast integer is : %d",list[l]);//display smallest number
	printf("\nLeast integer is at index : %d",l);//and its position
	return 0;
}

