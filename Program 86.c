/*
Accept number of rows and number of columns from user and display below pattern.

Input :		iRow = 4	iCol = 4

Output :	
			*	*	*	#
			*	*	#	*
			*	#	*	*
			#	*	*	*
		
*/				

#include<stdio.h>
#include<stdlib.h>

void Pattern(int iRow, int iCol)
{
	int i= 0, j = 0;

	if(iRow != iCol)
	{
		printf("Enter the same values :");
		return ;
	}

	for(i = 1; i <= iRow; i++)
	{
		for(j = iCol; j >= 1; j--)
		{
			if(i == j)
			{
				printf("#\t");
			}
			else
			{
				printf("*\t");
			}
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