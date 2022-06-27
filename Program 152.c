/*
Q.2) Write a program which accept one number from user and off 7th bit and 10th bit of that number if it is on.
	 Return modified number.

input : 577

output : 1

0000	0000	0000	0000	0000	0010	0100	0000
  0		  0	  	  0		  0		  0		  2		 4        0

*/

#include<stdio.h>
#include<stdlib.h>

typedef int BOOL;
typedef unsigned int UINT;

#define TRUE 1
#define FALSE 0

BOOL OffBit(UINT iNo)
{
	UINT Marsk = 0X00000240;
	UINT iResult = 0;
	
	iResult = iNo ^ Marsk;
	return iResult;
}

int main()
{
	UINT iValue = 0;
	BOOL bRet = FALSE;

	printf("Enter the number \n");
	scanf("%lu",&iValue);

	bRet = OffBit(iValue);

	printf("Modified number is : %d",bRet);
}
