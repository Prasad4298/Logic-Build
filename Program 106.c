/*
All below quetions are depends on ASCII values of characters.  

Q.1) Accept Character form user and check whether it is alphabet or not (A-Z,a-z)

Input : F
Output: TRUE

Input : &
Output : FALSE
*/

#include<stdio.h>
#include<stdlib.h>

#define TRUE 1
#define FALSE 0

typedef int BOOL;

BOOL ChkAlpha(char ch)
{
	if((ch >= 65) && (ch <= 90) || (ch >= 97) && (ch <= 122))
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

	bRet = ChkAlpha(cValue);

	if(bRet == TRUE)
	{
		printf("It is Character");
	}
	else
	{
		printf("It is not a Character");
	}

	return 0;
}