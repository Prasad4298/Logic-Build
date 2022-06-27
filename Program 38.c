/*
Accept N numbers from user and and Display all such elements which are divisible by 5.

Input 	:	N :		6
			Elements : 85	66	3	80	93	88
Output 	: 	80

*/

#include<stdio.h>
#include<stdlib.h>

void Display(int Arr[], int iLength)
{
	int iCnt = 0;

	printf("All such elements are Even and Divisible by 5 from the array is :\n");

	for(iCnt = 0; iCnt < iLength; iCnt++)
	{
		if(((Arr[iCnt] % 5) == 0) && ((Arr[iCnt] % 2) == 0))
		{
			printf("%d\n", Arr[iCnt]);
		}
	}
}

int main()
{
	int iSize = 0, iLength = 0, iCnt = 0;
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

	Display(p,iSize);

	free(p);
	return 0;
}