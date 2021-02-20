#include<stdio.h>
#include<string.h>
struct Rcbooks
{
char model[50];
char color[50];
int axles;
char purpose[50];
char use[12];
char ltd[11];
int fyr;
char regno[50];
};
void input(struct Rcbooks book[20])
{	
	for(int i=0;i<20;i++)
	{
		struct Rcbooks temp;
		printf("Enter the model of vehilce : ");
		fgets(temp.model,50,stdin);
		printf("\nEnter the color of vehilce : ");
		fgets(temp.color,50,stdin);
		printf("\nEnter the number of axles in vehilce : ");
		printf("%d",&temp.axles);
		printf("\nEnter the use of vehilce (private/commercial): ");
		fgets(temp.use,20,stdin);
		printf("\nEnter the purpose of vehilce (eg: taxi): ");
		fgets(temp.use,50,stdin);	
		printf("\nEnter last test date(dd/mm/yyyy)");	
		scanf("%s",&temp.ltd);
		printf("\nEnter year of last registeration");	
		scanf("%d",&temp.fyr);
		printf("\nEnter registeration number");	
		scanf("%s",&temp.ltd);
		strcpy(book[i].model,temp.model);
		strcpy(book[i].color,temp.color);
		strcpy(book[i].use,temp.use);
		strcpy(book[i].ltd,temp.ltd);
		strcpy(book[i].regno,temp.regno);
	}
}
void display(struct Rcbooks book)
{	
	
		printf("Model of vehilce : %s",book.model);
		printf("\nColor of vehilce : %s",book.color);
		printf("\nNumber of axles in vehilce : %d",&book.axles);
		printf("\nPurpose of vehilce : %s",book.use);
		printf("\nLast test date(dd/mm/yyyy) : %s",book.ltd);
		printf("\nYear of last registeration : %d",book.fyr);
		printf("\nRegisteration number : %s\n",book.ltd);
	
}
void searchTaxi(struct Rcbooks book[20])
{
	char c[50];
	printf("Enter colour\n");
	fgets(c,50,stdin);
	printf("Taxis of color %s : ",c);
	int flag=0;
	for(int i=0;i<20;i++)
	{
		if((strcmp(c==(book.color)))||(strcmp((book.purpose),"commercial"))
		{
			flag++;
			printf("\n%d) ",flag);
			display(book);
		}
	}
	if(flag==0)
	{
		printf("None\n");
	}
}
void searchPrivate(struct Rcbooks book[20])
{
	char c[50];
	printf("Enter colour");
	fgets(c,50,stdin);
	printf("\nPrivate vehicles of color %s :",c);
	int flag=0;
	for(int i=0;i<20;i++)
	{
		if((strcmp(c,book.color)==0)||(strcmp(use,"private")==0)
		{
			flag++;
			printf("%d) ",flag);
			display(book);
		}
	}
	if(flag==0)
	{
		printf("None\n");
	}
}
void searchReg(struct Rcbooks book[20])
{
	char c[50];
	printf("Enter Registeration number");
	fgets(c,50,stdin);
	printf("Vehicles of Registeration number %s :",c);
	int flag=0;	
	for(int i=0;i<20;i++)
	{
		if(strcmp(c,book.regno)==0)
		{
			flag++;
			printf("\n");
			display(book);
		}
	}
	if(flag==0)
	{
		printf("Not Found\n");
	}
}
void main()
{
	int ch=0;
	struct Rcbooks RTO[20];
	input(RTO);
	printf("Enter your choice : \n");
	printf("1->for list all the vehicles which are taxi and given color \n");
	printf("2->for list all the private vehicles and a given color \n");
	printf("3->search for the details of a vehicle with a given vehicle registration number \n");
	scanf("%d",ch);
	if(ch==1)
	searchTaxi(RTO);
	else if(ch==2)
	searchPrivate(RTO);
	else if(ch==3)
	searchReg(RTO);
	else 
	printf("Invalid Input");
	return 0;
}
	
