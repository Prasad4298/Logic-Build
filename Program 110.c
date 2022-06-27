/*
All below quetions are depends on ASCII values of characters.  

Q.4) Accept division of student from user and depends on the division display exam timing. There are 4 division in school as
	 A,B,C,D. Exam of division A at 7.30 AM, B at 8.30 AM, C at 9.30 AM, and D at 10.30 AM.
	 (Application should be case insensitive)

Input : c
Output : Your exam at 9.30 AM

Input : b
Output : Your exam at 10.30 AM
*/

#include<stdio.h>
#include<stdlib.h>

#define TRUE 1
#define FALSE 0

typedef int BOOL;

void DisplaySchedule(char chDiv)
{
	if((chDiv == 'A') || (chDiv == 'a'))
	{
		printf("Your exam at 7.30 AM \n");
	}
	else if((chDiv == 'B') || (chDiv == 'b'))
	{
		printf("Your exam at 8.30 AM \n");
	}
	else if((chDiv == 'C') || (chDiv == 'c'))
	{
		printf("Your exam at 9.30 AM \n");
	}
	else if((chDiv == 'D') || (chDiv == 'd'))
	{
		printf("Your exam at 10.30 AM \n");
	}
	else
	{
		printf("Enter valid standard");
	}
}

int main()
{
	char cValue = '\0';

	printf("Enter Your Division \n");
	scanf("%c",&cValue);

	DisplaySchedule(cValue);

	return 0;
}