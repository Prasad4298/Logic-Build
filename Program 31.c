// write a program which accept number from user and return the count of even digits
/*
Input : 	2395
OUtput : 	1

Input : 	1018
OUtput : 	2

Input : 	8462
OUtput : 	4		

*/

#include<stdio.h>

int CountEven(int iNo)
{
	int iDigit = 0;
	int iCnt = 0;

	while (iNo != 0)
	{
		iDigit = iNo % 10;
		iNo = iNo / 10;

		if((iDigit % 2) == 0)
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

	iRet = CountEven(iValue);

	printf("%d",iRet);

	return 0;
}