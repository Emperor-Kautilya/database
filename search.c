#include <stdio.h>
int main()
{
int n;
printf("Enter no. of integers : ");
scanf("%d",&n);
int s;
printf("Enter integers :\n");
for(int i=0;i<n;i++)
{
scanf("%d",&list[i]);
}
printf("Enter integer to be searched : ");
scanf("%d",&s);
int g;
for(int i=0;i<n;i++)
{
if(list[i]==s)
g=i;
}
printf("Entered integers :\n");
for(int i=0;i<n;i++)
{
printf("%d ",list[i]);
}
printf("\nSearched integer is in index : %d",g);
return 0;
}

