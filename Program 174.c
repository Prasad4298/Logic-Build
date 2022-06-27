/*

Q.1) Write a recursive program which display below pattern.

Output :	*	*	*	*	*

*/

#include<stdio.h>

void Display(int iNo)
{
	static int iCnt = 0;
	if(iCnt < iNo)
	{
		printf("*\t");
		iCnt++;
		Display(iNo);
	}
}

int main()
{
	int No = 0;
	printf("how many times you will display * on screen \n");
	scanf("%d",&No);

	Display(No);

	return 0;
}