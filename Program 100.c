/*
Q.4	Write a program which display addition of digits of element from 
	singly linear LinkedList.

	Function Prototype :-

	int SumDigit(PNODE head);
	Input linked list  ; |110| -> |230| -> |20| -> |240| -> |640|
	
	Output :	2	5	2	6	10

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

void AddDigit(PNODE head, int No)
{
	int DigSum = 0, Digit = 0;

	while(No != 0)
	{
		Digit = No % 10;
		DigSum = DigSum + Digit;

		No = No / 10;
	}
	printf("%d\t",DigSum);
}

void SumDigit(PNODE head)
{
	int No = 0;	
	PNODE temp = 0;
	temp = head;

	while(temp != NULL)
	{
		No = temp -> data;

		AddDigit(temp, No);

		temp = temp -> next;
	}
}

int main()
{
	PNODE first = NULL;		

	InsertFirst(&first, 640);
	InsertFirst(&first, 240);
	InsertFirst(&first, 20);
	InsertFirst(&first, 230);	
	InsertFirst(&first, 110);
	
	SumDigit(first);

	return 0;
}