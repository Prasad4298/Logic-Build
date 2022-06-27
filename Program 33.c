// write a program which accept number from user and return the count of digits in between 3 and 7.
/*
Input : 	2395
OUtput : 	1

Input : 	1018
OUtput : 	0

Input : 	4521
OUtput : 	2

Input : 	9922
OUtput : 	0
*/

#include<stdio.h>

int CountRange(int iNo)
{
	int iDigit = 0;
	int iCnt = 0;

	if(iNo < 0)
	{
		iNo = -iNo;
	}

	while (iNo != 0)
	{
		iDigit = iNo % 10;
		iNo = iNo / 10;

		if((iDigit > 3) && (iDigit < 7))
		{
			iCnt++;
		}
	}

	return iCnt;
}

int main()
{
	int iValue = 0;
	int iRet = 0;

	printf("Enter the number \n");
	scanf("%d",&iValue);

	iRet = CountRange(iValue);

	printf("%d",iRet);

	return 0;
}