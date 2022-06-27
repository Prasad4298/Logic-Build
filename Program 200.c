/*
Q.2) Write a program which accept file name from user and Count number of small character from that file.

Input	:	Demo.txt

Output	:	Number of Small character are ......

*/

#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include<fcntl.h>
#include<string.h>

#define FILESIZE 1024

int CountSmall(char Fname[])
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
			if((Data[i] >= 'a') && (Data[i] <= 'z'))
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
	char FileName[20];
	int iRet = 0;

	printf("Enter file name to open \n");
	scanf("%s",FileName);

	iRet = CountSmall(FileName);
	printf("Number of Small Character from that file is : %d",iRet);

	return 0;
}
