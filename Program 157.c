/*
Q.2) Write a program which accept one number and position from user and Off that bit.
	 Return modified number.

input : 10
		2

output : 8

0000	0000	0000	0000	0000	0000	0000	0010
0000	0000	0000	0000	0000	0000	0000	0000    

*/

#include<stdio.h>
#include<stdlib.h>
 
typedef unsigned int UINT;

UINT OffBit(UINT iNo, int iPos)
{
	int iMarsk = 0X00000001;	
	int iResult = 0;

	if((iPos <= 0) || (iPos > 32))
	{
		printf("Invalid Position \n");
		return 0;
	}

	iMarsk = iMarsk << (iPos - 1);

	iResult = iNo ^ iMarsk;

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

	Ret = OffBit(iValue,iPos);

	printf("Off Bit at that position and MOdified number is : %lu",Ret);
	return 0;
}
