/*
Q.4) Write a program which accept string from user and copy the Small character of that string into another string.

Input : "Marvellous Multi OS"

Output : arvellous ulti

*/

#include<stdio.h>
#include<stdlib.h>

void StrCpySmall(char *src,char *dest)
{

	while(*src != '\0')
	{  
		if((*src >= 'a') && (*src <= 'z') || (*src == ' '))
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

	StrCpySmall(Arr,Brr);

	printf("copy Small character is :-> %s",Brr);	
	return 0;
}