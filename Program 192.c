/*

Q.4) Write a recursive program which accept Number from user and
	 Return Smallest digits.

input :	523

Output:	30

*/

#include<stdio.h>

int SmallDigit(int iNo)
{
	int iDigit = 0;
	static int iSmall = 0;

	if(iNo != 0)
	{
		iDigit = iNo % 10;
		if(iSmall > iDigit)
		{
			iSmall = iDigit;
		}
		else if(iSmall == 0)
		{
			iSmall = iDigit;
		}
		iNo = iNo / 10;
		SmallDigit(iNo);
	}
	return iSmall;
}

int main()
{
	int iValue = 0, iRet = 0;

	printf("Enter the number \n");
	scanf("%d",&iValue);
	
	iRet = SmallDigit(iValue);

	printf("Smallest Digit is : %d",iRet);

	return 0;
}