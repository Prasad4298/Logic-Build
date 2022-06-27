/*
Q.3) Write a program which accept string from user and reverse that string in place.

Input : "abcd"

Output : "dcba"

Input : "abba"

Output : "abba"

*/

#include<stdio.h>
#include<stdlib.h>

void StrRevX(char *str)
{
	char *start = str;	
	char *end = str;	
	char temp;

	while(*end != '\0')
	{
		end++;
	}
	end--;

	while(start < end)
	{
		temp = *start;		
		*start = *end;		
		*end = temp;	

		start++;	
		end--;		
	}
}

int main()
{
	char Arr[20];

	printf("Enter string \n");
	scanf("%[^\n]%*c",Arr);

	StrRevX(Arr);

	printf("Modified string is :-> %s",Arr);

	return 0;
}