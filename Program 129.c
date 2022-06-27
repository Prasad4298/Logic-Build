/*
Q.3) Write a program which accept string from user and accept one character. 
	 and return the index of Last Occurrence of that character.

Input : "MarvellouS Multi OS"
		M

Output : 11

Input : "marvellous multi os"
		W

Output : -1

Input : "marvellous multi os"
		e

Output : 4

*/

#include<stdio.h>
#include<stdlib.h>

int LastOccChar(char *str, char ch)
{
	int iCnt = 0;
	int Pos = -1;

	while(*str != '\0')
	{
		if((*str == (ch - 32)) || (*str == (ch + 32)) || (*str == ch))
		{
			Pos = iCnt;
		}
		iCnt++;
		str++;		
	}

	if(Pos == (-1))
	{
		return -1;
	}
	else
	{
		return Pos;
	}
}

int main()
{
	char Arr[20];
	char cValue = '\0';
	int iRet = 0;

	printf("Enter string \n");
	scanf("%[^\n]%*c",Arr);

	printf("Enter the character \n");
	scanf("%c",&cValue);

	iRet = LastOccChar(Arr,cValue);

	printf("Last Occurrence is : %d",iRet);

	return 0;
}