/*
Q.3) Write a program which check whether first and last bit is ON or OFF.

0000	0000	0000	0000	0000	0000	0000	0001	First (1 bit) 
  0		  0	  	  0		  0		  0		  0		 0        1

1000	0000	0000	0000	0000	0000	0000	0000	LAST (32 bit)
  8	  	  0	  	  0		  0		  0		  0		  0    	  0

*/

#include<stdio.h>
#include<stdlib.h>

typedef int BOOL;
typedef unsigned int UINT;

#define TRUE 1
#define FALSE 0

BOOL ChkBit(UINT iNo)
{
	UINT MarskX = 0X80000001, Marsk1 = 0X00000001, Marsk32 = 0X10000000;
	UINT iResultX = 0, iResult1 = 0, iResult32 = 0;
	UINT iNoX = iNo, iNo1 = iNo, iNo32 = iNo;

	iResultX = iNoX & MarskX;
	iResult1 = iNo1 & Marsk1;
	iResult32 = iNo32 & Marsk32;
	
	if(iResult1 == 0)
	{
		printf("1th Bit is OFF \n");
	}
	else
	{
		printf("1th Bit is ON \n");
	}

	if(iResult32 == 0)
	{
		printf("32th Bit is OFF \n");
	}
	else
	{
		printf("32th Bit is ON \n");
	}

	if(iResultX == 0)
	{
		return FALSE;
	}
	else
	{
		printf("Bits are ON..!")
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
		printf("First or Last Bits are ON or OFF... !");
	} 
	else
	{
		printf(" Bits are OFF... ! \n");
	}
}
