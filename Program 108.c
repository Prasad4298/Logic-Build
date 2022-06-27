/*
All below quetions are depends on ASCII values of characters.  

Q.3) Accept Character form user and check whether it is digit or not

Input : 7
Output: TRUE

Input : d
Output : FALSE
*/

#include<stdio.h>
#include<stdlib.h>

#define TRUE 1
#define FALSE 0

typedef int BOOL;

BOOL ChkDigit(char ch)
{
	if((ch >= 48) && (ch <= 57))
	{
		return TRUE;
	}
	else
	{
		return FALSE;
	}
}

int main()
{
	char cValue = '\0';
	BOOL bRet = FALSE;

	printf("Enter the cahracter \n");
	scanf("%c",&cValue);

	bRet = ChkDigit(cValue);

	if(bRet == TRUE)
	{
		printf("It is Digit");
	}
	else
	{
		printf("It is not a Digit");
	}

	return 0;
}