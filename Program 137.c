/*
Q.2) Write a program which accept string from user and copy that character of that string into another string.
	by removing white spaces.

Input : "Marvel lous Pyth on"

Output : "MarvellousPython"

*/

#include<stdio.h>
#include<stdlib.h>

void StrCpyRemoveSpace(char *src,char *dest)
{
	while(*src != '\0')
	{
		if(*src == ' ')
		{
			src++;
			*src = *src;
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

	StrCpyRemoveSpace(Arr,Brr);

	printf("Copy string by removing white spaces is :-> %s",Brr);	

	return 0;
}