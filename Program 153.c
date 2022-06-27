/*
Q.3) Write a program which accept one number from user and toggle 7th bit of that number.
	 Return modified number.

input : 137

output : 201

0000	0000	0000	0000	0000	0000	0100	0000
  0		  0	  	  0		  0		  0		  0		 4        0

*/

#include<stdio.h>
#include<stdlib.h>

typedef unsigned int UINT;

UINT ToggleBit(UINT iNo)
{
	UINT Marsk = 0X00000040;
	UINT iResult = 0;
	
	iResult = iNo ^ Marsk;
	return iResult;
}

int main()
{
	UINT iValue = 0;
	UINT Ret;

	printf("Enter the number \n");
	scanf("%lu",&iValue);

	Ret = ToggleBit(iValue);

	printf("Modified number is : %lu",Ret);

	return 0;
}
