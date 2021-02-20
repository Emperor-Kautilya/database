#include <stdio.h>
#include <string.h>
struct student
{
	char name[25];
	int age;
	int class;
	char address[50];
};
void changeStudent(struct student list[10])
{
	list[0].age+=5;
	list[0].class+=5;
	list[1].age+=7;
	list[1].class+=7;
}
void display(struct student std)
{
	printf("Name : %s\n",std.name);
	printf("Age : %d\n",std.age);
	printf("class : %d\n",std.class);
	printf("Address : %s\n\n",std.address);
}
int main()
{
	struct student list[10];
	strcpy(list[0].name,"Aditya");
	list[0].age=17;
	list[0].class=11;
	strcpy(list[0].address,"Address 1");

	strcpy(list[1].name,"Pranav");
	list[1].age=18;
	list[1].class=12;
	strcpy(list[1].address,"Address 2");
	display(list[0]);
	display(list[1]);
	changeStudent(list);
	display(list[0]);
	display(list[1]);
}
