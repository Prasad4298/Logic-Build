/*
Q.1) Write a program which accept string from user and copy the contents of that string into another string.
	 (Implement strCpy() function)

Input : "Marvellous Multi OS"

Output : "Marvellous Multi OS"		in another string

*/

#include<stdio.h>
#include<stdlib.h>

void StrCpyX(char *src,char *dest)
{

	while(*src != '\0')
	{
		*dest = *src;
		src++;
		dest++;
	}
	*dest = '\0';
}

int main()
{
	char Arr[30];
	char Brr[30];		// empty string

	printf("Enter the string \n");
	scanf("%[^\n]%*c",Arr);

	StrCpyX(Arr,Brr);

	printf("String copy into another string  is :-> %s",Brr);	
	return 0;
}