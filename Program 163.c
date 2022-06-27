/*
Q.4) Write a program which accept One number, two positions from user.
	 And check whether bit at first or bit at second position is ON of OFF.

input : 10
		3	7

output : TRUE

iMarsk1		0000	0000	0000	0000	0000	0000	0000	0001

*/

#include<stdio.h>
#include<stdlib.h>

typedef int BOOL;
typedef unsigned int UINT;

#define TRUE 1
#define FALSE 0

BOOL ChkOnBit(UINT iNo, int iPos1, int iPos2)
{
	int iMarsk1 = 0X00000001;
	int iMarsk2 = 0X00000001;
	
	UINT iResult1, iResult2;

	int iNo1 = iNo;
	int iNo2 = iNo;

	if((iPos1 <= 0) || (iPos1 > 32) || (iPos2 <= 0) || (iPos2 > 32))
	{
		printf("Invalid Position \n");
		return 0;
	}

	iMarsk1 = iMarsk1 << (iPos1 - 1);
	iResult1 = iNo1 & iMarsk1;

	if(iResult1 == 0)
	{
		printf("Bit is OFF At given 1st Position ... !\n");
	}
	else
	{
		printf("Bit is ON At given 1st Position ... !\n");
	}

	iMarsk2 << (iPos2 - 1);
	iResult2 = iNo2 & iMarsk2;

	if(iResult2 == 0)
	{
		printf("Bit is OFF At given 2st Position ... !\n");
	}
	else
	{
		printf("Bit is ON At given 1st Position ... !\n");
	}

	if((iResult1, iResult2 == 0))
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
	int iPos1 = 0, iPos2 = 0;

	BOOL bRet = FALSE;
	
	printf("Enter the number \n");
	scanf("%lu",&iValue);

	printf("Enter the Two Positions \n");
	scanf("%d%d",&iPos1,&iPos2);

	bRet = ChkOnBit(iValue, iPos1, iPos2);

	if(bRet == TRUE)
	{
		printf("Some Bits are On.... ! \n");
	}
	
	else
	{	
		printf("Some Bits are OFF.... ! \n");
	}

	return 0;
}
