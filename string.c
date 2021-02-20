#include <stdio.h>
#include <string.h>
#include <ctype.h>
char str[1000];
void clear(char clear[]) // function clears entire string
{
	for(int i=0;i<200;i++)
	clear[i]='\0'; // initialize each position by '\0'
} 
void countChar() // function counts each type of characters
{
	printf("\nCount\n-----");
	int n=strlen(str); 
	int l=0,u=0,space=0,special=0,tab=0; // variable counter to store different type of characters
	for(int i=0;i<n;i++)
	{
		char ch=str[i]; // variable to store each character
		if(ch>=65&&ch<=90) // if character is upper case
		u++;
		else if(ch>=97&&ch<=122) // if character is lower case
		l++;
		else if(ch==32) // if character is blank space
		space++;
		else if(ch=='\t') // if character is tab
		tab++;
		else
		special++; 
	}
	special+=space; // tab is also considered as a special character
	printf("\nUpperCase : %d\nLower Case : %d\nSpecial Characters : %d\nSpaces : %d\nTabs : %d\n",u,l,special,space,tab);
}
void VandC() // function to count vowels and consonants
{
	2printf("\nVOWELS & CONSONANTS\n-------------------");
	int c[26]; // counter array to store occurance of each alphabet a to z (case insensitive)
	for(int i=0;i<26;i++)
	c[i]=0; // clearing counter array of garbage values
	for(int i=0;i<strlen(str);i++)
	{
		int ch=str[i];
		if(isupper(ch)) // is character in upper case
		ch=ch-65;
		else if(islower(ch)) // is character in lower case
		ch=ch-97;
		else // the character is not an alphabet
		ch=-1;
		
		if(ch>=0) // if charater is an alphabet
		c[ch]++;
	}
	int v[]={0,4,8,14,20}; // position of vowel in alphabet chart
	printf("\nVowels :");
	for(int i=0;i<=5;i++)
	if(c[v[i]]>0)
	printf("\n%c- %d",(char)(97+v[i]),c[v[i]]);
	printf("\nConsonants :\n");
	for(int i=0;i<26;i++)
	{
		if(!(i==0||i==4||i==8||i==14||i==20))
		if(c[i]>0)
		printf("%c- %d\n",(char)(97+i),c[i] );
	}
}
void replace() // function to replace all vowel by '*' and all consonants '#'
{
	printf("\n\nReplace Vowels(*) and Consonants(#)\n-----------------------------------\n");
	for(int i=0;i<strlen(str);i++)
	{
		int ch=str[i]; 
		if(isalpha(ch))
		{	
			/* changing char ASCII values to position of character in alphabet chart */
			if(isupper(ch))
			ch=ch-65;
			else if(islower(ch))
			ch=ch-97;
			if(ch==0||ch==4||ch==8||ch==14||ch==20)
			printf("%c",'*');
			else 
			printf("%c",'#');			
		}
		else
		printf("%c",ch);	
	}
}
void toggle() // function to convert entered string to toggle case
{
	printf("\nToggle\n------\n");
	
	char w[200]; // an character array to store words from sentence
	clear(w); // clear w of all garbage data
	int k=0; // index counter in initialisation of word
	
	for(int i=0;i<strlen(str);i++) // read sentence letter by letter
	{
		int ch=str[i];
		if(isalpha(ch)) // if letter is an alphabet then it is part of word 
		{
			w[k++]=toupper(ch); // convert each character to upper case
		}
		else // word will be terminated by anything that is not an alphabet
		{	
			char *p=w+1; // pointer to value of w[1]
			printf("%c%s%c",tolower(w[0]),p,ch); // print word with first letter in lower case and rest as it is
			
			clear(w); // after printing the word clear it for next word to be stored
			k=0;// take index counter to first index
		}	
	}
}
void line() // function helps print a string word in a line
{
	printf("\nPrinting the words, one in a line\n---------------------------------\n");
	int flag=0; // flag to control that if a space occurs after a pucuation it does not change line twice
	/* flag turn 1 if a special character is printed once so line does not change twice*/
	for(int i=0;i<strlen(str);i++)
	{
		int ch=str[i]; 
		if(isalnum(ch)) // if ch is alphanumeral we have to print it in a line
		{	
			printf("%c",ch);
			flag=0;			
		}
		else if(flag==0) // if ch is anything but alphanumeral line has to change 
		{
			printf("%c\n",ch);
			flag=1; // line should not change twice for two special characters.
		}	
	}
}
void search() // function searches for a character in string 
{
	printf("\nSearch\n------\n");
	
	char key; // variable to store character to be searched
	printf("Input a character to be searched (Case Sensitive) : ");
	scanf("%c",&key);
	
	char w[200]; // an character array to store words from sentence
	clear(w); // clear w of all garbage data
	int k=0; // index counter in initialisation of word
	
	int flag=0; // flag turns 1 if character was found un word so we can print it
	int flag2=0; //flag to ensure that comman doesn't get printed before first character.
	printf("Output : ");
	for(int i=0;i<strlen(str);i++) // read string character by character
	{
		int ch=str[i]; // store i th character of string
		if(isalpha(ch)) // if character is an alphabet
		{	
			w[k++]=ch; 
			if(ch==key) // if ch is key
			flag=1;
		}
		else
		{	
			if(flag==1) // only need to print word which have key in them
			{
				if(flag2==0) // don't print comma before first letter
				{
				printf("%s",w);
				flag2=1;
				}
				else
				printf(",%s",w);
				flag=0; 
			}
			clear(w); // clear word for next to be stored 
			k=0; // turn index counter to zero
		}	
	}
}
int main()
{
	printf("Enter Input Text\n");
	fgets(str,1000,stdin);
	countChar();
	toggle();
	VandC();
	search();
	replace();
	line();
	return 0;
}
