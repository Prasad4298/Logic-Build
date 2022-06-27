/*
All below quetions are depends on ASCII values of characters.  

Q.3) Accept character from user. If it is capital then display all the characters from the input character till Z.
	 If input charater is small then print all the characters in reverse order till a. 
	 In other cases return directly.

Input : Q
Output : Q	R	S	T	U	V	W 	X	Y	Z

Input : m
Output : m	l	k	j	i	h	g	f	e	d	c	b	a

Input : 8
Output : 

*/

#include<stdio.h>
#include<stdlib.h>

void Display(char ch)
{
	char A = '\0';

	if((ch >= 65) && (ch <= 90))
	{
		for(A = ch; A <= 90; A++)
		{
			printf("%c\t",A);
		}
	}
	else if((ch >= 97) && (ch <= 122))
	{
		for(A = ch; A >= 97; A--)
		{
			printf("%c\t",A);
		}
	}
	else
	{
		printf("Enter the character");
		return;
	}	
}

int main()
{
	char cValue = '\0';

	printf("Enter the character\n");
	scanf("%c",&cValue);

	Display(cValue);

	return 0;
}