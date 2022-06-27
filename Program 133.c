/*
Q.3) Write a program which accept string from user and copy the Capital character of that string into another string.

Input : "Marvellous Multi OS"

Output : MMOS

*/

#include<stdio.h>
#include<stdlib.h>

void StrCpyCap(char *src,char *dest)
{

	while(*src != '\0')
	{  
		if((*src >= 'A') && (*src <= 'Z'))
		{
			*dest = *src;
			dest++;
		}
		src++;
	}
	*dest = '\0';
}

int main()
{
	char Arr[30];
	char Brr[30];		// empty string

	printf("Enter the string \n");
	scanf("%[^\n]%*c",Arr);

	StrCpyCap(Arr,Brr);

	printf("copy capital character is :-> %s",Brr);	

	return 0;
}