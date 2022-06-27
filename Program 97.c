/*
Q.2	Write a program which Display all elements which are Prime from
	from singly Linear LinkedList.

	Function Prototype :-

	int DisplayPrime(PNODE head);
	Input linked list  ; |11| -> |20| -> |17| -> |41| -> |22| -> |89|
	
	Output :	11	17	41	89

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

void DisplayPrime(PNODE head)
{
	PNODE temp = 0;
	temp = head;

	printf("Prime number from singly linear linkedlist are :");

	while(temp != NULL)
	{
		if(((temp -> data) % 2) != 0)
		{
			printf("%d\t",temp -> data);
		}
		
		temp = temp -> next;
	}
}

int main()
{
	PNODE first = NULL;		

	InsertFirst(&first, 11);
	InsertFirst(&first, 28);
	InsertFirst(&first, 17);
	InsertFirst(&first, 41);	
	InsertFirst(&first, 6);
	InsertFirst(&first, 89);
	
	DisplayPrime(first);

	return 0;
}