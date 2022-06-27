/*
Q.1) Write application which accept file name from user and open that file in read mode.

Input	:	Demo.txt
output	:	File opened successfully

*/

#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include<fcntl.h>

int main()
{
	char Fname[20];
	int fd = 0; 	

	printf("Enter file name to Open \n");
	scanf("%s",Fname);

	fd = open(Fname,O_RDONLY);	

	if(fd == (-1))
	{
		printf("Unable to Open file \n");
		return -1;	
	}

	printf("File is succefully Open \n");

	return 0;
}

