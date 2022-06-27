/*
Accept number of rows and number of columns from user and display below pattern.

Input :		iRow = 4	iCol = 5

Output :	
			2	4	6	8	10	
			1	3	5	7	9
			2	4	6	8	10
			1	3	5	7	9
		
*/				

#include<stdio.h>
#include<stdlib.h>

void Pattern(int iRow, int iCol)
{
	int i= 0, j = 0, A = 0, B = 0;

	for(i = 1; i <= iRow; i++)
	{
		for(j = 1, A = 1, B = 0; j <= iCol; A++, B++, j++)
		{
			if((i % 2) != 0)
			{
				A = A + 1;
				printf("%d\t",A);
			}
			else
			{
				B = B + 1;
				printf("%d\t",B);
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