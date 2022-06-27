/*
Q.4	Write a program which display smallest Digits of all elements
	from singly linear linked List.
	Function Prototype :-

	void DisplayProduct(PNODE head);

	Input linked list  ; |11| -> |250| -> |532| -> |415| 
	
	Output :	1	0	2	1

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

int SmallDigit(int iNo)
{
	int iDigit = 0;
	int SmallDigit = (iNo % 10);

	while(iNo > 0)
	{
		iDigit = iNo % 10;

		if(SmallDigit > iDigit)
		{
			SmallDigit = iDigit;
		}

		iNo = iNo / 10;
	}
	return SmallDigit;
}

void DisplaySmall(PNODE head)
{
	int No = 0, iRet = 0;	
	PNODE temp = 0;
	temp = head;

	while(temp != NULL)
	{
		No = temp -> data;

		iRet = SmallDigit(No);
	
		printf("%d\t",iRet);
		
		temp = temp -> next;
	}
}

int main()
{
	PNODE first = NULL;		

	InsertFirst(&first, 41);
	InsertFirst(&first, 32);	
	InsertFirst(&first, 20);
	InsertFirst(&first, 11);
	
	DisplaySmall(first);

	return 0;
}