/*
Q.4	Write a program which display largest Digits of all elements
	from singly linear linked List.
	
	Function Prototype :-

	void DisplayLargeDigit(PNODE head);

	Input linked list  ; |11| -> |250| -> |532| -> |419| 
	
	Output :	1	5	5	9

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

int LargeDigit(int iNo)
{
	int iDigit = 0;
	int LargeDigit = (iNo % 10);

	while(iNo > 0)
	{
		iDigit = iNo % 10;

		if(LargeDigit < iDigit)
		{
			LargeDigit = iDigit;
		}

		iNo = iNo / 10;
	}
	return LargeDigit;
}

void DisplayLargeDigit(PNODE head)
{
	int No = 0, iRet = 0;	
	PNODE temp = 0;
	temp = head;

	while(temp != NULL)
	{
		No = temp -> data;

		iRet = LargeDigit(No);
	
		printf("%d\t",iRet);
		
		temp = temp -> next;
	}
}

int main()
{
	PNODE first = NULL;		

	InsertFirst(&first, 419);
	InsertFirst(&first, 532);	
	InsertFirst(&first, 250);
	InsertFirst(&first, 11);
	
	DisplayLargeDigit(first);

	return 0;
}