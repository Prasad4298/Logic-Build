/*

Q.1) Write a recursive program which accept String from user and 
	 Count white spaces in the string.

input :	HE LLO WOr LD

Output:	3

*/

#include<stdio.h>

int whiteSpaces(char *str)
{
	static int iCnt = 0;
	if(*str != '\0')
	{
		if(*str == ' ')
		{
			iCnt++;
		}
	
		str++;
		whiteSpaces(str);
	}

	return iCnt;
}

int main()
{
	int iRet = 0;
	char arr[20];

	printf("Enter the string \n");
	scanf("%[^\n]%*c",arr);

	iRet = whiteSpaces(arr);
	printf("white spaces in string is : %d",iRet);

	return 0;
}