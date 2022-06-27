/*
Accept N numbers from user and return Difference between frequency of even numbers and odd numbers.

Input 	:	N :		7
			Elements : 85	66	3	80	93	88	90
Output 	: 	1	(4 - 3)

*/

#include<stdio.h>
#include<stdlib.h>

int Frequency(int Arr[], int iLength)
{
	int iCnt = 0, iCountEven = 0, iCountOdd = 0, iAns = 0;

	for(iCnt = 0; iCnt < iLength; iCnt++)
	{
		if((Arr[iCnt] % 2) == 0)
		{
			iCountEven++;
		}
		else
		{
			iCountOdd++;
		}
	}
	
	iAns = iCountEven - iCountOdd;
	return iAns;
}

int main()
{
	int iSize = 0, iLength = 0, iRet = 0, iCnt = 0;
	int *p = NULL;

	printf("Enter Size of Array :\n");
	scanf("%d",&iSize);

	p = (int *) malloc (iSize * sizeof(int));

	if(p == NULL)
	{
		printf("Unable to allocate memory \n");
		return -1;
	}

	printf("Enter the elements :\n");
	scanf("%d",&iLength);

	for(iCnt = 0; iCnt < iLength; iCnt++)
	{
		printf("Enter element : %d\n",iCnt+1);
		scanf("%d",&p[iCnt]);
	}

	iRet = Frequency(p,iSize);

	printf("The defference between frequency of even number and odd numbers is : %d",iRet);

	free(p);
	return 0;
}