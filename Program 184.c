/*

Q.1) Write a recursive program which accept number from user and display below patten.

input :	5

Output:	5	*	4	*	3	*	2	*	1	*
*/

#include<stdio.h>

void Display(int iNo)
{
	if(iNo > 0)
	{
		printf("%d\t*\t",iNo);
		iNo--;
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