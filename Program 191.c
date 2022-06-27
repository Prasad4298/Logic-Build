/*

Q.3) Write a recursive program which accept String from user and 
	 Count number of small characters.

input :	HElloWOrlD

Output:	5

*/

#include<stdio.h>

int SmallChar(char *str)
{
	static int iCnt = 0;
	if(*str != '\0')
	{
		if((*str >= 'a') && (*str <= 'z'))
		{
			iCnt++;
		}
	
		str++;
		SmallChar(str);
	}

	return iCnt;
}

int main()
{
	int iRet = 0;
	char arr[20];

	printf("Enter the string \n");
	scanf("%[^\n]%*c",arr);

	iRet = SmallChar(arr);
	printf("Number of Small characters in string is : %d",iRet);

	return 0;
}