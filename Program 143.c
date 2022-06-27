/*
Q.3) Write a program which check whether 7th & 15th & 21st & 28th bit is ON of OFF.

0000	1000	0001	0000	0100	0000	0100	0000	
  0		  8		  1		  0		  4		  0		  4       0

*/

#include<stdio.h>
#include<stdlib.h>

typedef int BOOL;
typedef unsigned int UINT;

#define TRUE 1
#define FALSE 0

BOOL ChkBit(UINT iNo)
{
	UINT Marsk7 = 0X00000040, Marsk15 = 0X00004000, Marsk21 = 0X00100000, Marsk28 = 0X08000000;	
	UINT iResult7 = 0, iResult15 = 0, iResult21 = 0, iResult28 = 0;
	UINT iNo7 = iNo, iNo15 = iNo, iNo21 = iNo, iNo28 = iNo;

	iResult7 = iNo7 & Marsk7;
	iResult15 = iNo15 & Marsk15;
	iResult21 = iNo21 & Marsk21;
	iResult28 = iNo28 & Marsk28;
	
	if(iResult7 == 0)
	{
		printf("7th Bit is OFF \n");
	}
	else
	{
		printf("7th Bit is ON \n");
	}

	if(iResult15 == 0)
	{
		printf("15th Bit is OFF \n");
	}
	else
	{
		printf("15th Bit is ON \n");
	}

	if(iResult21 == 0)
	{
		printf("21th Bit is OFF \n");
	}
	else
	{
		printf("21th Bit is ON \n");
	}

	if(iResult28 == 0)
	{
		printf("15th Bit is OFF \n");
	}
	else
	{
		printf("15th Bit is ON \n");
	}

	if((iResult7 == 0) && (iResult15 == 0) && (iResult21 == 0) && (iResult28 == 0))	
	{
		printf("ALL Bits are OFF... ! \n");
	}
	
	if((iResult7 != 0) && (iResult15 != 0) && (iResult21 != 0) && (iResult28 != 0))	
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
	BOOL bRet = FALSE;

	printf("Enter the number \n");
	scanf("%lu",&iValue);

	bRet = ChkBit(iValue);

	if(bRet == TRUE)
	{
		printf("Some Bits are ON or OFF... !");
	} 
	else
	{
		printf("ALL Bits are ON... ! \n");
	}
}
