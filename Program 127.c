/*
Q.2) Write a program which accept string from user and accept one character. 
	 and return the frequency of that character.

Input : "MarvellouS Multi OS"
		M

Output : 2

Input : "marvellous multi os"
		W

Output : 0

*/

#include<stdio.h>
#include<stdlib.h>

int CountChar(char *str, char ch)
{
	int iCnt = 0;

	while(*str != '\0')
	{
		if((*str == (ch - 32)) || (*str == (ch + 32)) || (*str == ch))
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
	char cValue = '\0';
	int iRet = 0;

	printf("Enter string \n");
	scanf("%[^\n]%*c",Arr);

	printf("Enter the character \n");
	scanf("%c",&cValue);

	iRet = CountChar(Arr,cValue);

	printf("Character frequency is : %d",iRet);

	return 0;
}