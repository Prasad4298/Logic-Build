/*
Q.5) Write a program which accept string from user and Count number of white spaces in String

Input : "MarvellouS"

Output : 0

Input : "MarvellouS Infosystems"

Output : 1

Input : "MarvellouS Infosystems by Piyush Manohar Khairnnar"

Output : 5

*/

#include<stdio.h>
#include<stdlib.h>

int CountWhite(char *str)
{
	int iCnt = 0;

	while(*str != '\0')
	{
		if(*str == ' ')
		{
			iCnt++;
		}

		str++;
	}

	return iCnt;
}

int main()
{
	char Arr[20];
	int iRet = 0;

	printf("Enter string \n");
	scanf("%[^'\n']s",Arr);

	iRet = CountWhite(Arr);

	printf("the count of white spaces in string is : %d",iRet);

	return 0;
}