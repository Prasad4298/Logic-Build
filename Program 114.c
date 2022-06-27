/*
All below quetions are depends on ASCII values of characters.  

Q.4) Accept character from user and check whether it is special symbol or not.
	 (!,@,#,$,%,^,&,*)

Input : %
Output : TRUE

Input : d
Output : FALSE

*/

#include<stdio.h>
#include<stdlib.h>

#define TRUE 1
#define FALSE 0

typedef int BOOL;

BOOL ChkSpecial(char ch)
{
	if(((ch == 33) || (ch == 64) || (ch == 94) || (ch == 43)) && ((ch >= 35) || (ch <= 38)))
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

	printf("Enter the character\n");
	scanf("%c",&cValue);

	bRet = ChkSpecial(cValue);

	if(bRet == TRUE)
	{
		printf("it is Special Character");
	}
	else
	{
		printf("it is not a Special Character");
	}

	return 0;
}