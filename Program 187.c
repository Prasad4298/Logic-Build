/*

Q.4) Write a recursive program which accept Number from user and return its factorial.

input :	5

Output:	120

*/

#include<stdio.h>

int Fact(int iNo)
{
	static int iFact = 1;

	if(iNo > 0)
	{
		iFact = iFact * iNo;
		iNo--;
		Fact(iNo);
	}
	return iFact;
}

int main()
{
	int iValue = 0, iRet = 0;

	printf("Enter the number \n");
	scanf("%d",&iValue);
	
	iRet = Fact(iValue);

	printf("Factorial of input Number is : %d",iRet);

	return 0;
}