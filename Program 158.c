/*
Q.3) Write a program which accept one number and position from user and ON that bit.
	 Return modified number.

input : 10
		3

output : 14

iMarsk	0000	0000	0000	0000	0000	0000	0000	0001
Number	0000	0000	0000	0000	0000	0000	0000	0100
*/

#include<stdio.h>
#include<stdlib.h>

typedef unsigned int UINT;

UINT OnBit(UINT iNo, int iPos)
{
	int iMarsk = 0X00000001;	
	int iResult = 0;

	if((iPos <= 0) || (iPos > 32))
	{
		printf("Invalid Position \n");
		return 0;
	}

	iMarsk = iMarsk << (iPos - 1);

	iResult = iNo | iMarsk;

	return iResult;
}

int main()
{
	UINT iValue = 0;
	int iPos = 0;
	UINT Ret = 0;

	printf("Enter the number \n");
	scanf("%lu",&iValue);

	printf("Enter the Position \n");
	scanf("%d",&iPos);

	Ret = OnBit(iValue,iPos);

	printf("On Bit at that position and MOdified number is : %lu",Ret);
	return 0;
}
