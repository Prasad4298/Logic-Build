/*
All below quetions are depends on ASCII values of characters.  

Q.4) Accept character from user and display its ASCII value in decimal, octal, hexadecimal format.

Input : a
Output : Decimal		65
		 Octal			0101
		 Hexadecimal 	0x41

*/

#include<stdio.h>
#include<stdlib.h>

#define TRUE 1
#define FALSE 0

typedef int BOOL;

void Display(char ch)
{
	if((ch >= 'A') || (ch <= 'Z') && (ch >= 'a') || (ch <= 'z'))
	{
		printf("ASCII value of %c is :-> \n",ch);
		printf("Decimal Value : %d \n",ch);
		printf("Octal Value : %o \n",ch);
		printf("HexaDecimal Value : %x \n",ch);
	}
	else
	{
		printf("Enter the character");
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