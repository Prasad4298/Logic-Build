/*
Q.4	Write a program which display all Palindrome elements of Singly
	LinkedList.

	Function Prototype :-

	void DisplayPllindrome(PNODE head);

	Input linked list  ; |11| -> |28| -> |17| -> |414| -> |6| -> |89|
	
	Output :	11	6	414

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

int ReverseDigit(int iNo)
{
	int iDigit = 0;
	int iRev = 0;

	while(iNo > 0)
	{
		iDigit = iNo % 10;
		iRev = iRev * 10 + iDigit;
		iNo = iNo / 10;
	}
	return iRev;
}

void DisplayPallindrome(PNODE head)
{
	int No = 0, iRet = 0;	
	PNODE temp = 0;
	temp = head;

	while(temp != NULL)
	{
		No = temp -> data;

		iRet = ReverseDigit(No);

		if(iRet == No)
		{
			printf("%d\t",iRet);
		}

		temp = temp -> next;
	}
}

int main()
{
	PNODE first = NULL;		

	InsertFirst(&first, 89);
	InsertFirst(&first, 6);
	InsertFirst(&first, 414);
	InsertFirst(&first, 17);	
	InsertFirst(&first, 28);
	InsertFirst(&first, 11);
	
	DisplayPallindrome(first);

	return 0;
}