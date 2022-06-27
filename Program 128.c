/*
Q.3) Write a program which accept string from user and accept one character. 
	 and return the index of First Occurrence of that character.

Input : "MarvellouS Multi OS"
		M

Output : 0

Input : "marvellous multi os"
		W

Output : -1

Input : "marvellous multi os"
		e

Output : 4

*/

#include<stdio.h>
#include<stdlib.h>

int FirstOccChar(char *str, char ch)
{
	int iCnt = -1;

	while(*str != '\0')
	{
		if((*str == (ch - 32)) || (*str == (ch + 32)) || (*str == ch))
		{
			iCnt++;
			break;
		}
		iCnt++;
		str++;		
	}
	
	return iCnt;
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

	iRet = FirstOccChar(Arr,cValue);

	printf("First Occurrence is : %d",iRet);

	return 0;
}