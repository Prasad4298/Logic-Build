/*
Q.2) Write a program which accept string from user and convert into Upper case.

Input : "Marvellous Multi OS"

Output : "MARVELLOUS MULTI OS"

*/

#include<stdio.h>
#include<stdlib.h>

 void StrUpper(char *str)
{
	while(*str != '\0')
	{
		if((*str >= 'a') && (*str <= 'z'))
		{
			*str = *str - 32;
		}
		str++;
	}
}

int main()
{
	char Arr[20];

	printf("Enter string \n");
	scanf("%[^'\n']s",Arr);

	StrUpper(Arr);

	printf("Upper case of String is : %s",Arr);

	return 0;
}