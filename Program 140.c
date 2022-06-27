/*
Q.5) Write a program which accept string from user and copy that character of that string into another string.
	by Toggling the case.

Input : "Marvellous Python 2"

Output : "marvellous python 2"

*/

#include<stdio.h>
#include<stdlib.h>

void StrCpyToggle(char *src,char *dest)
{
	while(*src != '\0')
	{
		if((*src >= 'A') && (*src <= 'Z'))
		{
			*src = (*src + 32);
		}
		else if((*src >= 'a') && (*src <= 'z'))
		{
			*src = (*src - 32);
		}
		else
		{
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

	StrCpyToggle(Arr,Brr);

	printf("Copy string by Toggling the case :-> %s",Brr);	

	return 0;
}