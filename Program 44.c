/*
Accept N numbers from user and Check whether that numbers contains 11 in it or not.

Input 	:	N :		6
			Elements : 85	66	11	80	93	88	
Output 	: 	11 is present

Input 	:	N :		6
			Elements : 85	66	3	80	93	88	
Output 	: 	11 is absent

*/

#include<stdio.h>
#include<stdlib.h>

int Frequency(int Arr[], int iLength)
{
	int iCnt = 0, iCountF = 0;

	for(iCnt = 0; iCnt < iLength; iCnt++)
	{
		if(Arr[iCnt] == 11)
		{
			iCountF++;
		}
	}
	
	return iCountF;	
}

int main()	
{
	int iSize = 0, iLength = 0, iCnt = 0;
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

	printf("Enter the elements :\n");
	scanf("%d",&iLength);

	for(iCnt = 0; iCnt < iLength; iCnt++)
	{
		printf("Enter element : %d\n",iCnt+1);
		scanf("%d",&p[iCnt]);
	}

	iRet = Frequency(p, iSize);

	printf("the frequency of 11 in arary is :%d",iRet);

	free(p);
	return 0;
}