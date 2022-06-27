/*
All below quetions are depends on ASCII values of characters.  

Q.2) Accept character from user. If character is small display its corresponding capital charater, and if it small then display its 
	 correspoinding capital. In other cases display as it is.

Input : Q
Output : q

Input : m
Output : M

Input : 4
Output : 4

Input : %
Output : %

*/

#include<stdio.h>
#include<stdlib.h>
#include<ctype.h>

void Display(char ch)
{
	if((ch >= 65) && (ch <= 90))
	{
		printf("the LOWER CASE of character %c is : %c",ch,tolower(ch));
	}
	else if((ch >= 97) && (ch <= 122))
	{
		printf("the UPPER CASE of character %c is : %c",ch,toupper(ch));
	}
	else
	{
		printf("%c",ch);
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