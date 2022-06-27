/*
Accept number from user and Display below pattern.

Input :		5

Output :	5	#	4	#	3	#	2	#	1	#
*/				

#include<stdio.h>
#include<stdlib.h>

void Pattern(int iNo)
{
	int iCnt = 0;

	for(iCnt = 5; iCnt >= 1; iCnt--)
	{
		printf("%d\t#\t",iCnt);
	}
}

int main()	
{
	int iValue = 0;

	printf("Enter the number\n");
	scanf("%d",&iValue);

	Pattern(iValue);

	return 0;
}