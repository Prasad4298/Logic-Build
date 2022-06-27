/*
Q.4	Write a program which return second maximum element from 
	Singly Linear LinkedList

	Function Prototype :-

	int SecMaximum(PNODE head);
	Input linked list  ; |110| -> |230| -> |320| -> |240| 
	
	Output :	240

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

int SecMaximum(PNODE head)
{
	int iMax = 0;
	int iCnt = 0;
	int iSecMax = 0;
	PNODE temp1 = 0;
	temp1 = head;

	PNODE temp2 = 0;
	temp2 = head;

	iMax = temp1 -> data;
	iSecMax = temp2 -> data;

	while(temp1 != NULL)
	{
		iCnt++;

		if(iMax < (temp1 -> data))
		{
			iMax = temp1 -> data;
		}

		temp1 = temp1 -> next;
	}

	printf("%d\n",iCnt);
	printf("%d\n",iMax);

	if(iSecMax == iMax)	// maximum number is same as first elemnent
	{	
		while(temp2 != NULL)
		{
			if((temp2 -> data) < iSecMax)
			{
				iSecMax = temp2 -> data;
				break;
			}
			temp2 = temp2 -> next;
		}		
	}

	return iSecMax;
}

int main()
{
	int iRet = 0;
	PNODE first = NULL;		

	InsertFirst(&first, 240);
	InsertFirst(&first, 320);
	InsertFirst(&first, 230);
	InsertFirst(&first, 110);	
	InsertFirst(&first, 310);
	InsertFirst(&first, 250);
	InsertFirst(&first, 350);
	
	iRet = SecMaximum(first);

	printf("Second Maximum number from singly linear linkedlist is : %d",iRet);

	return 0;
}