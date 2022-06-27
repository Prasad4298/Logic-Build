/*
Q.3) Write a program which accept One numbers from user.
	 And check whether 9th or 12th bit is ON of OFF.

input : 257
		
output : TRUE

iMarsk		0000	0000	0000	0000	0000	1001	0000	0000
             0		  0		  0       0       0       9       0       0

iMarsk9		0000	0000	0000	0000	0000	0001	0000	0000
              0       0      0        0       0       1       0       0

iMarsk12	0000	0000	0000	0000	0000	1000	0000	0000
              0       0       0       0       0       8       0       0

*/

#include<stdio.h>
#include<stdlib.h>

typedef int BOOL;
typedef unsigned int UINT;

#define TRUE 1
#define FALSE 0

BOOL ChkOnBit(UINT iNo)
{
	UINT MarskX = 0X00000900, Marsk9 = 0X00000100, Marsk12 = 0X00000800;	
	UINT iResultX = 0, iResult9 = 0, iResult12 = 0;
	UINT iNoX = iNo, iNo9 = iNo, iNo12 = iNo;

	iResultX = iNoX & MarskX;
	iResult9 = iNo9 & Marsk9;
	iResult12 = iNo12 & Marsk12;
	
	if(iResult9 == 0)
	{
		printf("9th Bit is OFF \n");
	}
	else
	{
		printf("9th Bit is ON \n");
	}

	if(iResult12 == 0)
	{
		printf("12th Bit is OFF \n");
	}
	else
	{
		printf("12th Bit is ON \n");
	}

	if((iResult9 == 0) && (iResult12 == 0))	
	{
		printf("Both Bits are OFF... ! \n");
	}
	
	if(iResultX == 0)	
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
	UINT iValue1 = 0;
	BOOL bRet = FALSE;
	
	printf("Enter the number \n");
	scanf("%lu",&iValue1);

	bRet = ChkOnBit(iValue1);

	if(bRet == TRUE)
	{
		printf("Some Bits are On.... ! ");
	}
	else
	{
		printf("Some Bits are OFF.... !");
	}

	return 0;
}
