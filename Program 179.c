/*

Q.1) Write a recursive program which display below pattern.

input : 5
Output: *	*	*	*	*	
*/

#include<stdio.h>

void Display(int iNo)
{
	static int iCnt = 0;
	if(iCnt < iNo)
	{
		iCnt++;
		printf("*\t");
		Display(iNo);
	}
}

int main()
{
	int iValue = 0;

	printf("Enter the number \n");
	scanf("%d",&iValue);

	Display(iValue);

	return 0;
}