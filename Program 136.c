/*
Q.1) Write a program which accept string from user and copy that character of that string into another string in reverse order.

Input : "Marvellous Python"

Output : "nohtyP suollevraM"

*/

#include<stdio.h>
#include<stdlib.h>

void StrCpyRev(char *src,char *dest)
{
	char *start = src;
	
	while(*start != '\0')
	{
		start++;
	}
	start--;

	while(*src != '\0')
	{
		*dest = *start;
		src++;
		dest++;
		start--;
	}
	*dest = '\0';
}

int main()
{
	char Arr[30];
	char Brr[30];		// empty string

	printf("Enter the First string \n");
	scanf("%[^\n]%*c",Arr);

	StrCpyRev(Arr,Brr);

	printf("Copy string in reverse order into another string is :-> %s",Brr);	

	return 0;
}