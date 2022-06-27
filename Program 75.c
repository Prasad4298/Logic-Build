/*
Accept number of rows and number of columns from user and display below pattern.

Input :		iRow = 4	iCol = 4

Output :	
			 1	2	3	4
			 2	3	4	5
			 3	4	5	6	
			 4	5	6	7
		
*/				

#include<stdio.h>
#include<stdlib.h>

void Pattern(int iRow, int iCol)
{
	int i= 0, j = 0, x = 0;

	for(i = 1; i <= iRow; i++)
	{
		x = 0;

		for(j = 1, x = i; j <= iCol; x++, j++)
		{
			printf("%d\t",x);
		}
		printf("\n");						
	}		
}

int main()	
{
	int iValue1 = 0, iValue2 = 0;

	printf("Enter the number of Rows and Columns\n");
	scanf("%d %d",&iValue1, &iValue2);

	Pattern(iValue1,iValue2);

	return 0;
}