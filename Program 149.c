/*
Q.4) Write a program which check whether 7th & 8th & 9th bit is ON of OFF.

0000	0000	0000	0000	0000	0001	1100	0000	// 7th 8th 9th bit
  0		  0	  	  0		  0		  0		  1		 12      0

0000	0000	0000	0000	0000	0000	0100	0000	// 7th bit
  0		  0	  	  0		  0		  0		  0		  4    0

0000	0000	0000	0000	0000	0000	1100	0000	// 8th bit
  0		  0	  	  0		  0		  0		  0		 12      0

0000	0000	0000	0000	0000	0001	1100	0000	// 9th bit
  0		  0	  	  0		  0		  0		  1		 12      0
*/

#include<stdio.h>
#include<stdlib.h>

typedef int BOOL;
typedef unsigned int UINT;

#define TRUE 1
#define FALSE 0

BOOL ChkBit(UINT iNo)
{
	UINT Marsk1 = 0X000001C0, Marsk7 = 0X00000040, Marsk8 = 0X000000C0, Marsk9 = 0X000001C0;	
	UINT iResult = 0, iResult7 = 0, iResult8 = 0, iResult9 = 0;
	UINT iNo1 = iNo, iNo7 = iNo, iNo8 = iNo, iNo9 = iNo;

	iResult = iNo1 & Marsk1;
	iResult7 = iNo7 & Marsk7;
	iResult8 = iNo8 & Marsk8;
	iResult9 = iNo9 & Marsk9;
	
	if(iResult7 == 0)
	{
		printf("7th Bit is OFF \n");
	}
	else
	{
		printf("7th Bit is ON \n");
	}

	if(iResult8 == 0)
	{
		printf("8th Bit is OFF \n");
	}
	else
	{
		printf("8th Bit is ON \n");
	}

	if(iResult9 == 0)
	{
		printf("9th Bit is OFF \n");
	}
	else
	{
		printf("9th Bit is ON \n");
	}

	if((iResult7 == 0) && (iResult8 == 0) && (iResult9 == 0))	
	{
		printf("ALL Bits are OFF... ! \n");
	}
	
	if((iResult7 != 0) && (iResult8 != 0) && (iResult9 != 0))	
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
