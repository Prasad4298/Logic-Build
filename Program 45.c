/*
Accept N numbers from user and Check whether that numbers contains 11 in it or not.

Input 	:	N :		6
			No :	66
			Elements : 85	66	3	66	93	88
Output 	: 	2

Input 	:	N :		6
			No :	12
			Elements : 85	11	3	15	11	111
Output 	: 	0

*/

#include<stdio.h>
#include<stdlib.h>

int Frequency(int Arr[], int iLength, int iNo)
{
	int iCnt = 0, iCountF = 0;

	for(iCnt = 0; iCnt < iLength; iCnt++)
	{
		if(Arr[iCnt] == iNo)
		{
			iCountF++;
		}
	}
	
	return iCountF;	
}

int main()	
{
	int iSize = 0, iLength = 0, iCnt = 0, iValue = 0;
	int *p = NULL;
	int iRet = 0;

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
	
	iRet = Frequency(p, iSize, iValue);

	printf("the frequency of %d in arary is :%d",iValue,iRet);

	free(p);
	return 0;
}