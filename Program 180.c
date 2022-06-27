/*

Q.2) Write a recursive program which display below pattern.

Output :	1	2	3	4	5

*/

#include<stdio.h>

void Display(int iNo)
{
	static int iCnt = 1;
	if(iCnt < iNo)
	{
		printf("%d\t",iCnt);
		iCnt++;
		Display(iNo);
	}
}

int main()
{
	int No = 0;
	printf("Enter number for display number in increasing order \n");
	scanf("%d",&No);

	Display(No);

	return 0;
}