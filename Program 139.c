/*
Q.4) Write a program which accept string from user and copy that character of that string into another string.
	by converting all Capital characters into Small case.

Input : "Marvellous Python 2"

Output : "marvellous python 2"

*/

#include<stdio.h>
#include<stdlib.h>

void StrCpyConvertSmall(char *src,char *dest)
{
	while(*src != '\0')
	{
		if((*src >= 'A') && (*src <= 'Z'))
		{
			*src = (*src + 32);
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

	StrCpyConvertSmall(Arr,Brr);

	printf("Copy string by convert character into Small case is :-> %s",Brr);	

	return 0;
}