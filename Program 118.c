/*
Q.3) Write a program which accept string from user and return difference between frequency.\
	 of small characters and frequecy of capital character.
	 

Input : "Marvellous"

Output : 6	(8-2)

*/

#include<stdio.h>
#include<stdlib.h>

int Difference(char *str)
{
	int iCntCapital = 0;
	int iCntSmall = 0;
	int Diff = 0;

	while(*str != '\0')
	{
		if((*str >= 'A') && (*str <= 'Z'))
		{
			iCntCapital++;
			str++;
		}
		
		if((*str >= 'a') && (*str <= 'z'))
		{
			iCntSmall++;
			str++;
		}
	}

	Diff = iCntSmall - iCntCapital;
	return Diff;
}

int main()
{
	char arr[20];
	int iRet = 0;

	printf("Enter string \n");
	scanf("%[^'\n']s",arr);

	iRet = Difference(arr);

	printf("difference of small and capital character from string is : %d",iRet);

	return 0;
}