/*
Q.3) Write a program which accept string from user and copy that character of that string into another string.
	by converting all small characters into capital case.

Input : "Marvellous Python 2"

Output : "MARVELLOUS PYTHON 2"

*/

#include<stdio.h>
#include<stdlib.h>

void StrCpyConvertCap(char *src,char *dest)
{
	while(*src != '\0')
	{
		if((*src >= 'a') && (*src <= 'z'))
		{
			*src = (*src - 32);
		}

		*dest = *src;

		dest++;
		src++;
	}
	*dest = '\0';
}

int main()
{
	char Arr[30];
	char Brr[30];		// empty string

	printf("Enter the First string \n");
	scanf("%[^\n]%*c",Arr);

	StrCpyConvertCap(Arr,Brr);

	printf("Copy string by convert character into capital case is :-> %s",Brr);	

	return 0;
}