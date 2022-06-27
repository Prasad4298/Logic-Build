// Write a program which accept one number from user and check whether it contains 0 in it or not.
 
 /*
 Input : 	2395
 Output :   There is no Zero
				

Input : 	1018
Output :   	It Contains Zero

Input : 	9000
Output :   	It contains Zero

*/

#include<stdio.h>

#define TRUE 1
#define FALSE 0

typedef int BOOL;

BOOL ChkZero(int iNo)
{
	int iDigit = 0;

	if(iNo < 0)
	{
		iNo = -iNo;
	}

	while(iNo != 0)
	{
		iDigit =  iNo % 10;

		printf("%d\n",iDigit);

		iNo = iNo / 10;

		if(iDigit == 0)
		{
			break;
		}
	}

	if(iDigit == 0)
	{
		return TRUE;
	}
	else
	{
		return FALSE;
	}	
}

int main()
{
	int iValue = 0;
	BOOL bRet = FALSE;

	printf(" Enter number \n");
	scanf("%d",&iValue);

	bRet = ChkZero(iValue);

	if(bRet == TRUE)
	{
		printf("It Contains Zero");
	}
	else
	{
		printf("There is no Zero");
	}

	return 0;
}