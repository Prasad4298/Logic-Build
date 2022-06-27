// write a program which accept number from user and return difference between summation of even digits and summation of odd digits.
/*
Input : 	2395
OUtput : 	-15		(2 - 17)

Input : 	1018
OUtput : 	6		(8 - 2)

Input : 	8440
OUtput : 	16		(16 - 0)

Input : 	5733
OUtput : 	-18		(0 - 18)
*/

#include<stdio.h>

int CountDiff(int iNo)
{
	int iDigit = 0;
	int iSumEven = 0;
	int iSumOdd = 0;
	int iDiffer = 0;

	while (iNo != 0)
	{
		iDigit = iNo % 10;
		iNo = iNo / 10;

		if((iDigit % 2) == 0)
		{
			iSumEven = iSumEven + iDigit;
		}
		else
		{
			iSumOdd = iSumOdd + iDigit;
		}

		iDiffer = iSumEven - iSumOdd;
	}

	return iDiffer;
}

int main()
{
	int iValue = 0;
	int iRet = 0;

	printf("Enter the number \n");
	scanf("%d",&iValue);

	iRet = CountDiff(iValue);

	printf("%d",iRet);

	return 0;
}