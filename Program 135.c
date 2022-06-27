/*
Q.5) Write a program which accept string from user and concat second string after first string.(Implement strcat() function)

Input : "Marvellous Infosystems"
		"Logic Building"

Output : "Marvellous Infosystems Logic Building"

*/

#include<stdio.h>
#include<stdlib.h>

void StrConcat(char *src,char *dest)
{
	while(*src != '\0')
	{
		src++;
	}
	*src = ' ';

	while(*dest != '\0')
	{  
		src++;
		*src = *dest;
		dest++;
		
	}
	*dest = '\0';
}

int main()
{
	char Arr[30];
	char Brr[30];		// empty string

	printf("Enter the First string \n");
	scanf("%[^\n]%*c",Arr);

	printf("Enter the Second string \n");
	scanf("%[^\n]%*c",Brr);

	StrConcat(Arr,Brr);

	printf("After Concatination is :-> %s",Arr);	

	return 0;
}