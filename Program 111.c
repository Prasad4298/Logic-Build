/*
All below quetions are depends on ASCII values of characters.  

Q.1) Write a program which displays ASCII table. Table contains symbol, Decimal, Hexadecimal and Octal 
	 representation of every member from 0 to 255.

*/

#include<stdio.h>
#include<stdlib.h>

void DisplayASCII()
{
	int iCnt = 0;

	for(iCnt = 0; iCnt <= 255; iCnt++)
	{
		printf(" %d\t ",iCnt);
		printf(" Character Value %c\t ",iCnt);
		printf(" Decimal Value %d\t ",iCnt);
		printf(" Octal Value %o\t ",iCnt);
		printf(" HexaDecimal Value %x\t ",iCnt);
		printf("\n");
	}
}

int main()
{
	DisplayASCII();

	return 0;
}