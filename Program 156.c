/*
Q.1) Write a program which accept one number and position from user and check whether bit at that position is on or off.
	 If Bit is on return TRUE otherwise return FLASE.

input : 10
		2

output : TRUE

0000	0000	0000	0000	0000	0000	0000	0000
0000	0000	0000	0000	0000	0000	0000	0010

*/

#include<stdio.h>
#include<stdlib.h>

#define TRUE 1
#define FALSE 0

typedef int BOOL; 
typedef unsigned int UINT;

BOOL ChkBit(UINT iNo, int iPos)
{
	int iMarsk = 0X00000001;	
	int iResult = 0;

	if((iPos <= 0) || (iPos > 32))
	{
		printf("Invalid Position \n");
		return 0;
	}

	iMarsk = iMarsk << (iPos - 1);

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
	UINT iValue = 0;
	int iPos = 0;
	BOOL bRet = FALSE;

	printf("Enter the number \n");
	scanf("%lu",&iValue);

	printf("Enter the Position \n");
	scanf("%d",&iPos);

	bRet = ChkBit(iValue,iPos);

	if(bRet == TRUE)
	{
		printf("At %d position Bit is ON",iPos);
	}
	else
	{
		printf("At %d position Bit is OFF",iPos);
	}

	return 0;
}
