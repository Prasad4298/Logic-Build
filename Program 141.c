/*
Q.1) Write a program which check whether 15th bit is ON of OFF.

0000	0000	0000	0000	0100	0000	0000	0000	
  0		  0		  0		  0		  4		  0		  0       0

*/

#include<stdio.h>
#include<stdlib.h>

typedef int BOOL;
typedef unsigned int UINT;

#define TRUE 1
#define FALSE 0

BOOL ChkBit(UINT iNo)
{
	int iMarsk = 0X00004000;	
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
		printf("15th Bit is ON");
	} 
	else
	{
		printf("15th Bit is OFF");
	}
}
