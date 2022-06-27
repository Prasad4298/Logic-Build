// write a program which accept number from user and return multiplication of all digits.
/*
Input : 	2395
OUtput : 	270

Input : 	1018
OUtput : 	8

Input : 	9440
OUtput : 	144

Input : 	922432
OUtput : 	864
*/

#include<stdio.h>

int MultDigits(int iNo)
{
	int iDigits = 0;
	int iMult = 1;

	while (iNo != 0)
	{
		iDigits = iNo % 10;
		iNo = iNo / 10;

		if(iDigits == 0)
		{
			iDigits = 1;
		}

		iMult = iMult * iDigits;
	}

	return iMult;
}

int main()
{
	int iValue = 0;
	int iRet = 0;

	printf("Enter the number \n");
	scanf("%d",&iValue);

	iRet = MultDigits(iValue);

	printf("%d",iRet);

	return 0;
}