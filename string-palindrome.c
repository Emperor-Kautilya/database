#include <stdio.h>
int main()
{
	char s[100];//create array to store string
	printf("Enter Word : ");//prompt the user to enter word
	scanf("%s",s);
	int n=0;
	while(s[n]!='\0')//loop to count number of alphabets are in string
	n++;
	int flag=1;//assume word to be palindrome
	for(int i=0;i<n/2;i++)//take loop from intex 0 to middle element
	{
		if(s[i]!=s[n-i-1])//compare if i th alphabet from start and end are equal
		{
			flag=0;//if not then turn down our assumption
		}
	}	
	if(flag==0)
	printf("\nNot a Palindrome Word");
	else
	printf("\nPalindrome Word");
	return 0;
}

