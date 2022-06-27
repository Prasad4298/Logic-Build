/*
Q.4) Write application which accept file name from user. and display size of file.

Input	:	Demo.txt
output	:	File size is 56 bytes

*/

#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include<fcntl.h>
#include<string.h>

#define FILESIZE 1024

int main()
{
	char Fname[20], Data[FILESIZE];
	int fd = 0, iRet = 0; 	

	printf("Enter file name to Open \n");
	scanf("%s",Fname);

	fd = open(Fname,O_RDONLY);	

	if(fd == (-1))
	{
		printf("Unable to Open file \n");
		return -1;	
	}

	printf("File is succefully Open \n");

	iRet = read(fd,Data,sizeof(Data));

	printf("Data from file is : %s\n", Data);
	printf("file size is : %d bytes \n",iRet);

	close(fd);

	return 0;
}

