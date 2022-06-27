// Write a program which accept one number from user and return difference between summation of all its factors and non factors.
// 
// Input : 		12
// Output :     50

//Input : 		10
// Output :     37

#include<stdio.h>

int FactDiff(int iNo)
{
	int iCnt = 0;
	int iSumNonFact = 0;
	int iSumFact = 0;
	int iFactDiff = 0;

	printf("The non factors of %d is :\n",iNo);

	for(iCnt = 1; iCnt <= iNo; iCnt++ )
	{
		if((iNo % iCnt) != 0)
		{
			printf("%d\n",iCnt);
			iSumNonFact = iSumNonFact + iCnt;
		}				
	}
	printf("the summation of non factors is :%d\n",iSumNonFact);

	printf("The factors of %d is :\n",iNo);

	for(iCnt = 1; iCnt <= iNo/2; iCnt++ )
	{
		if((iNo % iCnt) == 0)
		{
			printf("%d\n",iCnt);
			iSumFact = iSumFact + iCnt;
		}				
	}
	printf("the summation of factors is :%d\n",iSumFact);

	iFactDiff = iSumFact - iSumNonFact;

	return iFactDiff;
}	

int main()
{
	int iValue = 0;
	int iRet = 0;

	printf(" Enter number \n");
	scanf("%d",&iValue);

	iRet = FactDiff(iValue);
	
	printf("difference between summation of all its factors and non factors. of %d is :%d\n",iValue,iRet);

	return 0;
}