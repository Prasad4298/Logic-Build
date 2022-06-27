/*

Q.4) Write a recursive program which accept Number from user and
	 Return Product of its digits.

input :	523

Output:	30

*/

#include<stdio.h>

int Mult(int iNo)
{
	int iDigit = 0; 
	static int iMult = 1;

	if(iNo != 0)
	{
		iDigit = iNo % 10;
		iMult = iMult * iDigit;
		iNo = iNo / 10;
		Mult(iNo);
	}
	return iMult;
}

int main()
{
	int iValue = 0, iRet = 0;

	printf("Enter the number \n");
	scanf("%d",&iValue);
	
	iRet = Mult(iValue);

	printf("Product of its Digit is : %d",iRet);

	return 0;
}