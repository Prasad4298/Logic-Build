/*

Q.4) Write a recursive program which display below pattern.

Output :	A	B	C	D	E	F
*/

#include<stdio.h>

void Display(int iNo)
{
	static int iCnt = 0;
	static char cValue = 'A';
	if(iCnt < iNo)
	{
		iCnt++;
		printf("%c\t",cValue);
		cValue++;
		Display(iNo);
	} 
}

int main()
{
	int no = 0;
	printf("Enter the number \n");
	scanf("%d",&no);
	Display(no);

	return 0;
}