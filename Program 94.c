/*
Q.2	Write a program which return Largest element 
	form singly linear linked list.

	Function Prototype :-

	int SearchLastOcc(PNODE head);
	Input linked list  ; |110| -> |230| -> |320| -> |240|
	
	Output : 320

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

int LargeElement(PNODE head)
{
	PNODE temp = 0;
	temp = head;

	int iMax = temp -> data;

	while(temp != NULL)
	{
		if(iMax < (temp -> data))
		{
			iMax = temp -> data;
		}
		temp = temp -> next;
	}
	
	return iMax;
}

int main()
{
	int iRet = 0;
	int iValue = 30;
	PNODE first = NULL;		

	InsertFirst(&first, 110);
	InsertFirst(&first, 230);
	InsertFirst(&first, 320);
	InsertFirst(&first, 240);	
	
	iRet = LargeElement(first);
	printf("The largest elements from Linked List is : %d \n",iRet);

	return 0;
}