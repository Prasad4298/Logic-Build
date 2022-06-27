/*

Q.2) Write a recursive program which accept Number from user and
	 Return Largest digits.

input :	523

Output:	30

*/

#include<stdio.h>

int LargeDigit(int iNo)
{
	int iDigit = 0; 
	static int iMax = 0;

	if(iNo != 0)
	{
		iDigit = iNo % 10;
		if(iMax < iDigit)
		{
			iMax = iDigit;
		}
		iNo = iNo / 10;
		LargeDigit(iNo);
	}
	return iMax;
}

int main()
{
	int iValue = 0, iRet = 0;

	printf("Enter the number \n");
	scanf("%d",&iValue);
	
	iRet = LargeDigit(iValue);

	printf("Largest Digit is : %d",iRet);

	return 0;
}