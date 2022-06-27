/*
Q.1) Write a program which accept one number and Count number of ON(1) bits.
	 without using % and / operator.

input : 11
		

output : 3

iMarsk	0000	0000	0000	0000	0000	0000	0000	0001
Number	0000	0000	0000	0000	0000	0000	0000	1011

*/

#include<stdio.h>
#include<stdlib.h>

typedef unsigned int UINT;

int CntOnBit(UINT iNo)
{
	UINT iMarsk = 0X00000001;	
	int iCnt = 0;
	int iDigit = 0;

	while(iNo != 0)
	{
		iDigit = iNo % 2;
		if(iDigit == iMarsk)
		{
			iCnt++;
		}
		iMarsk << 1;
		iNo = iNo / 2;
	}

	return iCnt;
}

int main()
{
	UINT iValue = 0;
	int Ret = 0;

	printf("Enter the number \n");
	scanf("%lu",&iValue);

	Ret = CntOnBit(iValue);

	printf("Count of On Bit is : %d",Ret);
	return 0;
}
