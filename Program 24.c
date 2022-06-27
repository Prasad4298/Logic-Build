// Write a program which accept one number from user and return summation of all its non factors.
// 
// Input : 		12
// Output :     50

//Input : 		10
// Output :     37

#include<stdio.h>

int SumNonFact(int iNo)
{
	int iCnt = 0;
	int iSum = 0;

	printf("The non factors of %d is :\n",iNo);

	for(iCnt = 1; iCnt <= iNo; iCnt++ )
	{
		if((iNo % iCnt) != 0)
		{
			printf("%d\n",iCnt);
			iSum = iSum + iCnt;
		}				
	}

	return iSum;
}

int main()
{
	int iValue = 0;
	int iRet = 0;

	printf(" Enter number \n");
	scanf("%d",&iValue);

	iRet = SumNonFact(iValue);
	
	printf("The Summation of all non factors of %d is :%d\n",iValue,iRet);

	return 0;
}