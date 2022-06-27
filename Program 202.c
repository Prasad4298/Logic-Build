/*
Q.4) Write a program which accept file name and one character from user and.
	 Count number of occurrences of that charaters from that file.

Input	:	Demo.txt	'M'

Output	:	Frequency of M is 7

*/

#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include<fcntl.h>
#include<string.h>

#define FILESIZE 1024

int CountChar(char Fname[], char ch)
{
	char Data[FILESIZE];		
	int fd = 0, iRet = 0, i = 0, iCnt = 0;

	fd = open(Fname,O_RDWR);	
	if(fd == (-1))
	{
		printf("Unable to open file \n");
		return -1;	
	}

	while((iRet = read(fd,Data,sizeof(Data))) != 0)
	{
		for(i = 0; i < iRet; i++)
		{
			if((Data[i] == ch) || (Data[i]== (ch + 32)) || (Data[i] == (ch -32)))
			{
				iCnt++;
			}
		}
	}

	close(fd);
	return iCnt;
}

int main()
{
	char FileName[30], cValue = '\0';
	int iRet = 0;

	printf("Enter file name to open \n");
	scanf("%s",FileName);

	printf("Enter the character \n");
	scanf(" %c",&cValue);

	iRet = CountChar(FileName,cValue);
	printf("Frequency of that character is : %d",iRet);

	return 0;
}