/*

Q.3) Write a recursive program which display below pattern.

Output :	5	4	3	2	1	

*/

#include<stdio.h>

void Display(int iNo)
{
	static int iCnt = 1;
	if(iNo >= iCnt )
	{
		printf("%d\t",iNo);
		iNo--;
		Display(iNo);
	}
}

int main()
{
	int No = 0;
	printf("Enter number for display number in decreasing order \n");
	scanf("%d",&No);

	Display(No);

	return 0;
}