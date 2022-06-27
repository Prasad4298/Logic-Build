/*
Q.4	Write a program which display product of all digits of all elements
	from singly linear linked List.
	Function Prototype :-

	void DisplayProduct(PNODE head);

	Input linked list  ; |11| -> |20| -> |32| -> |41| 
	
	Output :	1	2	6	4

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

int MultDigit(int iNo)
{
	int iDigit = 0;
	int Mult = 1;

	while(iNo > 0)
	{
		iDigit = iNo % 10;
		Mult = Mult * iDigit;
		iNo = iNo / 10;
	}
	return Mult;
}

void DisplayProduct(PNODE head)
{
	int No = 0, iRet = 0;	
	PNODE temp = 0;
	temp = head;

	while(temp != NULL)
	{
		No = temp -> data;

		iRet = MultDigit(No);
	
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
	
	DisplayProduct(first);

	return 0;
}