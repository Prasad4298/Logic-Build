/*

Q.2) Write a recursive program which accept number from user and 
	 Return summation of its Digits.

input :	879

Output:	24	

*/

#include<stdio.h>

int Sum(int iNo)
{
	int iDigit = 0; 
	static int iSum = 0;

	if(iNo != 0)
	{
		iDigit = iNo % 10;
		iSum = iSum + iDigit;
		iNo = iNo / 10;
		Sum(iNo);
	}
	return iSum;
}

int main()
{
	int iValue = 0, iRet = 0;

	printf("Enter the number \n");
	scanf("%d",&iValue);
	
	iRet = Sum(iValue);

	printf("Summation is : %d",iRet);

	return 0;
}