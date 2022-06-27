/*
Q.4) Write a program which accept string from user and display only digits from that string.

Input : "marve89llous121"

Output : "89121"

Input : "Demo"

Output : 

*/

#include<stdio.h>
#include<stdlib.h>

 void DisplayDigit(char *str)
{
	while(*str != '\0')
	{
		if((*str >= 48 ) && (*str <= 57))
		{
			printf("Number in the String is : %c",*str);
		}

		str++;
	}
}

int main()
{
	char Arr[20];

	printf("Enter string \n");
	scanf("%[^'\n']s",Arr);

	DisplayDigit(Arr);

	return 0;
}