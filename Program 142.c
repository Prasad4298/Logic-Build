/*
Q.2) Write a program which check whether 5th & 18th  bit is ON of OFF.

0000	0000	0000	0010	0000	0000	0001	0000	
  0		  0		  0		  2		  0		  0		  1       0

*/

#include<stdio.h>
#include<stdlib.h>

typedef int BOOL;
typedef unsigned int UINT;

#define TRUE 1
#define FALSE 0

BOOL ChkBit(UINT iNo)
{
	int iMarsk = 0X00020010;	
	int iResult = 0;

	iResult = iNo & iMarsk;

	if(iResult == 0)
	{
		return FALSE;
	}
	else
	{
		return TRUE;
	}
}

int main()
{
	int iValue = 0;
	BOOL bRet = FALSE;

	printf("Enter the number \n");
	scanf("%d",&iValue);

	bRet = ChkBit(iValue);

	if(bRet == TRUE)
	{
		printf("5th and 18th Bit is ON");
	} 
	else
	{
		printf("5th or 18th Bit is OFF");
	}
}
