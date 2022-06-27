/*
Q.3	Write a program which return addition all even element from singly
	linear linked list.

	Function Prototype :-

	int DisplayPrime(PNODE head);
	Input linked list  ; |11| -> |20| -> |32| -> |41| 
	
	Output :	52

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

int AdditionEven(PNODE head)
{
	int iAddEven = 0;
	PNODE temp = 0;
	temp = head;

	while(temp != NULL)
	{
		if(((temp -> data) % 2) == 0)
		{
			iAddEven = iAddEven + (temp -> data);
		}
		
		temp = temp -> next;
	}

	return iAddEven;
}

int main()
{
	int iRet = 0;
	PNODE first = NULL;		

	InsertFirst(&first, 41);
	InsertFirst(&first, 32);
	InsertFirst(&first, 20);
	InsertFirst(&first, 11);	
	
	iRet = AdditionEven(first);

	printf("Addition of even number from singly linear linkedlist is : %d",iRet);

	return 0;
}