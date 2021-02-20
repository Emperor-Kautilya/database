/* Assumption -> user provide space after each word irrespective of any punctuations*/
//Pig Latin Programme
#include <stdio.h>
#include <string.h>
#include <ctype.h>

void clean(char* w) // clear entered string of all initial and grabage values hence user call by
{
	for(int i=0;i<50;i++)// for loop to clear all values
	w[i]='\0';
}
int main()
{
	char v[]="AEIOUaeiou"; // array to store all vowels
	char str[1000],res[1000]=""; // char array to store entered text and final string
	printf("Enter English Text :\n");
	fgets(str,1000,stdin);
	
	int len=strlen(str); // variable to store length of string entered  
	
	str[len-1]=' '; // word is considered end when you encounter ' ' hence, replace '\n' present at end with ' ', as at end there is no space
	
	char w[50]=""; // array to store each word of sentence
	int k=0,c=0; // control variable to control initaliztion of array s
	
	char punctuation; // variable to store puctuations if they come in between
	
	int i; // loop control variable
	
	for(i=0;i<len;i++) // loop reads each character of entered string
	{
		char ch=str[i]; // char variable to store each character of string
		
		if((ch>=97&&ch<=122)||(ch>=65&&ch<=90)) // if ch is between 'a' to 'z' OR 'A' to 'Z'  
		{
			int t= (char)tolower(ch);
			w[k]= t;
			k=k+1;
		}
		
		else if(ch==' ') // if ch is ' ' it is considered end of word
		{
			if(strchr(v,w[0])>0) // if index of w[0] in v(vowel array) is greater than 0,hence w[0] is a vowel
			{
				strcat(w,"yay "); // concatenate "yay" in w
				strcat(res,w); // concatenate w to res
				clean(w); // since we don't need w anymore clean it
				k=0; // set counter for w to zero
			}
			else // if first alphbet of w is not vowel
			{
				int flag=0; // variable to store position at which first vowel occus and also a flag
				char left[50]=""; // array to store whats left after first vowel
				c=0; // controls initalization of w

				for(int j=0;j<strlen(w);j++)
				{ 
		 			if(strchr(v,w[j])>0) // if index of w[j] in v(vowel array) is greater than 0,hence w[j] is a vowel
					{
						if(flag==0) // we only need position of first vowel that occurs in word
						flag=j;	
					}
					if (flag>0) // if first vowel is encountered
					left[c++]=w[j]; // copy rest of array in left
				}

					strncat(left,w,flag); // concatenate the flag number of aplhabet before first vowel to left string
					strcat(left,"ay "); // concatenate "ay " to end of text
					
					strcat(res,left); // concatenate left to res
					
					res[strlen(res)]=punctuation; // if a punctuation cme in after word place it after it and since punctuation is a char I didn't use strcat() function
					strcat(res," "); // concatenate a blank spcae after punctuation 
					/*reseting variables*/
					punctuation='\0'; // clear punctuation or it will add same punctuation many times 
					clean(w); //since we don't need w anymore clean it
					k=0; // reset k to 0
			}
		}
		else // if ch is either a alphabet or ' ' hence it is some sort of punctuation
		{
		punctuation=ch; 
		}
	}
	printf("\n\nPig Latin Text : \n%s",res);
	
	if(punctuation!='\0') //there might be puctuation at end of sentence which we didn't display
	printf("%c",punctuation);
	
}
		
			
					
