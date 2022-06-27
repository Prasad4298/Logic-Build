/*
Q.1) Write a program which accept string from user and Display it in reverse order.

Input : "MarvellouS"

Output : "SuollevraM"

*/

#include<stdio.h>
#include<stdlib.h>

 void Reverse(char *str)
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
	char arr[20];

	printf("Enter string \n");
	scanf("%[^'\n']s",arr);

	Reverse(arr);

	printf("Reverse String : %s",arr);

	return 0;
}