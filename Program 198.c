/*
Q.5) Write application which accept file name and one string from user. 
	 and write that string at the end of file.
	 
Input	:	Demo.txt
			Hello World

output	:	Write Hello World at the end of Demo.txt file.

*/

#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include<fcntl.h>
#include<string.h>

#define FILESIZE 1024

int main()
{
	char Fname[20], Data[FILESIZE], Read[FILESIZE];
	int fd = 0, iRet = 0; 	

	printf("Enter file name to Open \n");
	scanf("%s",Fname);

	printf("Enter the Data that you want to write \n");
	scanf(" %[^'\n]s",Data);

	fd = open(Fname,O_RDWR | O_APPEND);	

	if(fd == (-1))
	{
		printf("Unable to Open file \n");
		return -1;	
	}

	printf("File is succefully Open \n");
	write(fd,Data,strlen(Data));

	fd = open(Fname,O_RDONLY);
	read(fd,Read,sizeof(Read));
	printf("Data from file is : %s\n", Read);
	
	close(fd);
	return 0;
}

