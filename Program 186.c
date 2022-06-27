/*

Q.3) Write a recursive program which accept String from user and 
	 Count number of characters.

input :	Hello

Output:	5

*/

#include<stdio.h>

int CharCount(char *str)
{
	static int iCnt = 0;
	if(*str != '\0')
	{
		iCnt++;
		str++;
		CharCount(str);
	}

	return iCnt;
}

int main()
{
	int iRet = 0;
	char arr[20];

	printf("Enter the string \n");
	scanf("%s",arr);

	iRet = CharCount(arr);
	printf("Number of character from string is : %d",iRet);

	return 0;
}