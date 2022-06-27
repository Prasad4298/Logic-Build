/*
Q.3) Write a program which accept string from user and toggle the case.
Input : "MarvellouS Multi OS"

Output : "mARVELLOUs mULTI os"

*/

#include<stdio.h>
#include<stdlib.h>

 void StrToggleX(char *str)
{
	while(*str != '\0')
	{
		if((*str >= 'A') && (*str <= 'Z'))
		{
			*str = *str + 32;
		}
		else if((*str >= 'a') && (*str <= 'z'))
		{
			*str = *str - 32;
		}
		else
		{
			*str = *str;
		}

		str++;
	}
}

int main()
{
	char Arr[20];

	printf("Enter string \n");
	scanf("%[^'\n']s",Arr);

	StrToggleX(Arr);

	printf("Toggle String is : %s",Arr);

	return 0;
}