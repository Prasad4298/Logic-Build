/*
Accept N numbers from user and Check whether that number is present or not.

Input 	:	N :		6
			No :	66
			Elements : 85	66	3	66	93	88
Output 	: 	TRUE

Input 	:	N :		6
			No :	12
			Elements : 85	11	3	15	11	111
Output 	: 	FALSE

*/

#include<stdio.h>
#include<stdlib.h>

#define TRUE 1
#define FALSE 0

typedef int BOOL;

BOOL Frequency(int Arr[], int iLength, int iNo)
{
	int iCnt = 0;

	for(iCnt = 0; iCnt < iLength; iCnt++)
	{
		if(Arr[iCnt] == iNo)
		{
			break;
		}
	}
	
	if(Arr[iCnt] == iNo)
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
	int iSize = 0, iLength = 0, iCnt = 0, iValue = 0;
	int *p = NULL;
	BOOL bRet = FALSE;

	printf("Enter one Number\n");
	scanf("%d",&iValue);

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
	
	bRet = Frequency(p, iSize, iValue);

	if(bRet == TRUE)
	{
		printf("Number is present");
	}
	else
	{
		printf("Number is not present");
	}

	free(p);
	return 0;
}