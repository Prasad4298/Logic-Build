/*
Q.1) Write a program which accept string from user and convert into lower case.

Input : "Marvellous Multi OS"

Output : "marvellous multi os"

*/

#include<stdio.h>
#include<stdlib.h>

 void StrLower(char *str)
{
	while(*str != '\0')
	{
		if((*str >= 'A') && (*str <= 'Z'))
		{
			*str = *str + 32;
		}
		str++;
	}
}

int main()
{
	char Arr[20];

	printf("Enter string \n");
	scanf("%[^'\n']s",Arr);

	StrLower(Arr);

	printf("Lower case of String is : %s",Arr);

	return 0;
}