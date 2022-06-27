/*
Accept N numbers from user and accept one another number as NO, return index of last occurrence of that NO.

Input 	:	N :		6
			No :	66
			Elements : 85	66	3	66	93	88
Output 	: 	3

Input 	:	N :		6
			No :	93
			Elements : 85	66	3	66	93	88
Output 	: 	4

Input 	:	N :		6
			No :	12
			Elements : 85	11	3	15	11	111
Output 	: 	-1


*/

#include<stdio.h>
#include<stdlib.h>

int LastOcc(int Arr[], int iLength, int iNo)
{
	int iCnt = 0;

	for(iCnt = (iLength - 1); iCnt >= 0; iCnt--)
	{
		if(Arr[iCnt] == iNo)
		{
			break;
		}
	}
	if(Arr[iCnt] == iNo)
	{
		return iCnt;
	}
	else
	{
		return -1;
	}
}

int main()	
{
	int iSize = 0, iLength = 0, iCnt = 0, iValue = 0;
	int *p = NULL;
	int iRet = 0;

	printf("Enter Size of Array :\n");
	scanf("%d",&iSize);

	p = (int *) malloc (iSize * sizeof(int));

	if(p == NULL)
	{
		printf("Unable to allocate memory \n");
		return -1;
	}

	printf("Enter the number of elements :\n");
	scanf("%d",&iLength);

	for(iCnt = 0; iCnt < iLength; iCnt++)
	{
		printf("Enter element : %d\n",iCnt+1);
		scanf("%d",&p[iCnt]);
	}

	printf("Enter Number to check last occurance :\n");
	scanf("%d",&iValue);
	
	iRet = LastOcc(p, iSize, iValue);

	if(iRet == -1)
	{
		printf("There is no such number : %d",iRet);
	}
	else
	{
		printf("last occurrence of number is : %d",iRet);
	}

	free(p);
	return 0;
}