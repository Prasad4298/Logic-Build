/*
Q.2) Write application which accept file name from user and Creat that file in read mode.

Input	:	Demo.txt
output	:	File Created successfully

*/

#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include<fcntl.h>

int main()
{
	char Fname[20];
	int fd = 0; 	

	printf("Enter file name to Creat \n");
	scanf("%s",Fname);

	fd = creat(Fname,0777);	

	if(fd == (-1))
	{
		printf("Unable to Creat file \n");
		return -1;	
	}

	printf("File is succefully Created \n");

	return 0;
}

