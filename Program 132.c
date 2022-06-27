/*
Q.2) Write a program which accept string from user and copy the contents of that string into another string.
	 (Implement strCpy() function)

Input : "Marvellous Multi OS"
		10

Output : Marvellous

Note : If third parameter is greater than the size of source string then copy whole string into destination.

*/

#include<stdio.h>
#include<stdlib.h>

void StrNCpyX(char *src,char *dest, int iCnt)
{

	while((*src != '\0') && (iCnt != 0))
	{
		*dest = *src;
		src++;
		dest++;
		iCnt--;
	}
	*dest = '\0';
}

int main()
{
	char Arr[30];
	char Brr[30];		// empty string

	printf("Enter the string \n");
	scanf("%[^\n]%*c",Arr);

	StrNCpyX(Arr,Brr,10);

	printf("String copy into another string  is :-> %s",Brr);	

	return 0;
}