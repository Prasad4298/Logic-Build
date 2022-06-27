/*
Q.2	Write a program which return addition of all  element 
	form singly linear linked list.

	Function Prototype :-

	int SearchLastOcc(PNODE head);
	Input linked list  ; |10| -> |20| -> |30| -> |40|
	
	Output : 100

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

int Addition(PNODE head)
{
	int iAdd = 0;
	
	PNODE temp = 0;
	temp = head;

	while(temp != NULL)
	{
		iAdd = iAdd + (temp -> data);
		temp = temp -> next;
	}
	
	return iAdd;
}

int main()
{
	int iRet = 0;
	int iValue = 30;
	PNODE first = NULL;		

	InsertFirst(&first, 10);
	InsertFirst(&first, 20);
	InsertFirst(&first, 30);
	InsertFirst(&first, 40);	
	
	iRet = Addition(first);
	printf("Addition of elements from Linked List is : %d \n",iRet);

	return 0;
}