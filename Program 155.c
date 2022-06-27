/*
Q.5) Write a program which accept one number from user and on its first 4 bits.
	 Return modified number.

input : 73

output : 79

0000	0000	0000	0000	0000	0000	0000	0001
  0		  0	  	  0		  0		  0		  0		 0        1

*/

#include<stdio.h>
#include<stdlib.h>

typedef unsigned int UINT;

UINT OnBit(UINT iNo)
{
	UINT Marsk = 0X00000001;
	int iCnt = 1;
	
	while(iCnt <= 4)
	{
		iNo = iNo | Marsk;
		Marsk = Marsk << 1;
		iCnt++;
	}
	
	return iNo;
}

int main()
{
	UINT iValue = 0;
	UINT Ret;

	printf("Enter the number \n");
	scanf("%lu",&iValue);

	Ret = OnBit(iValue);

	printf("when on first 4 Bit then Modified number is : %lu",Ret);

	return 0;
}
