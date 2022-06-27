/*
Q.2	Write a program which return Smallest element 
	form singly linear linked list.

	Function Prototype :-

	int SearchLastOcc(PNODE head);
	Input linked list  ; |110| -> |230| -> |20| -> |240| -> |640|
	
	Output : 20

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

int SmallElement(PNODE head)
{
	PNODE temp = 0;
	temp = head;

	int iSmall = temp -> data;

	while(temp != NULL)
	{
		if(iSmall > (temp -> data))
		{
			iSmall = temp -> data;
		}
		temp = temp -> next;
	}
	
	return iSmall;
}

int main()
{
	int iRet = 0;
	int iValue = 30;
	PNODE first = NULL;		

	InsertFirst(&first, 110);
	InsertFirst(&first, 230);
	InsertFirst(&first, 20);
	InsertFirst(&first, 240);	
	InsertFirst(&first, 640);
	
	iRet = SmallElement(first);
	printf("The Smallest elements from Linked List is : %d \n",iRet);

	return 0;
}