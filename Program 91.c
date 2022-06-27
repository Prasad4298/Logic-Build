/*
Q.1	Write a program which search First occurrence of particular element 
	form singly linew linked list.
	function Should return position at which element is found. 

*/

#include<stdio.h>
#include<stdlib.h>

struct node
{
	int data;
	struct node * next;		
};

typedef struct node NODE;
typedef struct node* PNODE;
typedef struct node** PPNODE;

void InsertFirst(PPNODE head, int no)
{
	PNODE newn = NULL;
	newn = (PNODE) malloc (sizeof(NODE));	

	newn -> data = no;
	newn -> next = NULL;

	if(*head == NULL)	// LL is empty
	{
		*head = newn;
	}
	else	// LL contains atleast one node
	{
		newn -> next = * head;
		*head = newn;
	}
}

int SearchFirstOcc(PNODE head, int no)
{
	int iCnt = 0;
	PNODE temp = 0;
	printf("Elements from linked list are :\n");

	temp = head;

	while(temp -> data <= no)
	{ 
		temp = temp -> next;
		iCnt++;
	}
	return iCnt;
}

int main()
{
	int iRet = 0;
	int iValue = 30;
	PNODE first = NULL;		

	InsertFirst(&first, 70);
	InsertFirst(&first, 30);
	InsertFirst(&first, 50);
	InsertFirst(&first, 40);
	InsertFirst(&first, 30);
	InsertFirst(&first, 20);
	InsertFirst(&first, 10);	
	
	iRet = SearchFirstOcc(first, iValue);
	printf("the First occurance of number %d is : %d \n",iValue,iRet);

	return 0;
}