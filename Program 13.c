// Write a program which accept one number from user and print that number of Even Factors of that number.
// 
// Input : 		36
// Output :    	2	6	12	18

#include<stdio.h>

 void DisplayEvenFactor(int iNo)
{
	int i = 0;

	if(iNo <= 0)
	{
		iNo = -iNo;
	}

	for(i = 1; i <= iNo/2; i++)
	{
		if(((i % 2) == 0) && ((i % 3) == 0))                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                    
		{
			printf("%d\t",i);
		}
	}	
}

int main()
{
	int iValue = 0;
	
	printf(" Enter number \n");
	scanf("%d",&iValue);

	DisplayEvenFactor(iValue);

	return 0;
}