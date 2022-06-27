/*
Q.3) Write application which accept file name from user.
	 Read all data from that file and display contents on screen.

Input	:	Demo.txt
output	:	Disply all data of file.

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
	printf("Data from file is : \n");

	while((iRet = read(fd,Data,sizeof(Data))) != 0)
	{
		write(1,Data,iRet);	
	}

	close(fd);

	return 0;
}

