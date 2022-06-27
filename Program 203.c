/*
Q.4) Write a program which accept file name and one count from user and.
	 Read that number of characters from starting position.

Input	:	Demo.txt	12

Output	:	Display first 12 characters from Demo.txt

*/

#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include<fcntl.h>
#include<string.h>

#define FILESIZE 1024

void DisplayChar(char Fname[], int iSize)
{
	char Data[FILESIZE];		
	int fd = 0, iRet = 0, i = 0;

	fd = open(Fname,O_RDWR);	
	if(fd == (-1))
	{
		printf("Unable to open file \n");
		return;	
	}

	while((iRet = read(fd,Data,sizeof(Data))) != 0)
	{
		for(i = 0; i < iSize; i++)
		{
			printf("%c",Data[i]);
		}
	}

	close(fd);
}

int main()
{
	char FileName[30];
	int iValue = 0;

	printf("Enter file name to open \n");
	scanf("%s",FileName);

	printf("Enter the number of characters that you want to display on screen \n");
	scanf(" %d",&iValue);

	DisplayChar(FileName,iValue);
	
	return 0;
}