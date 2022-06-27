/*
Accept N numbers from user and Display all such numbers which contains 3 digits in it.

Input :		N :			6
			Elements :	8225	665		3		76		953		858

Output :	665		953		858

*/				

#include<stdio.h>
#include<stdlib.h>

void Digits(int Arr[], int iLength)
{
	int iCnt = 0, iDigits = 0, iDigitCnt = 0, iNo = 0;

	for(iCnt = 0; iCnt < iLength; iCnt++)
	{
		iNo = Arr[iCnt];
		iDigitCnt = 0;
		
		while(Arr[iCnt] != 0)
		{
			iDigits = Arr[iCnt] % 10;
			Arr[iCnt] = Arr[iCnt] / 10;
			iDigitCnt++;
		}

		if(iDigitCnt == 3)
		{
			printf("%d\t", iNo);			
		}					
	}
}

int main()	
{
	int iSize = 0, iLength = 0, iCnt = 0, iRet = 0;
	int *p = NULL;

	printf("Enter the size of array ( Array size and no. of element should be same ):\n");
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
	
	Digits(p, iSize);

	free(p);
	return 0;
}