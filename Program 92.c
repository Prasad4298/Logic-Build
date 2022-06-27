/*
Q.2	Write a program which search last occurrence of particular element 
	form singly linear linked list.
	function Should return position at which element is found. 

	Function Prototype :-

	int SearchLastOcc(PNODE head, int no);
	Input linked list  ; |10| -> |20| -> |30| -> |40| -> |50| -> |30| -> |70|

	Input element : 30
	Output : 6

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

int SearchLastOcc(PNODE head, int no)
{
	int iCnt = 0;
	int i = 0;
	int iCntLast = 0;
	PNODE temp = 0;
	PNODE tempLast = 0;

	temp = head;
	tempLast = head;

	while(temp != NULL)
	{
		temp = temp -> next;
		iCnt++;
	}
	
	for(i = 1; i <= iCnt; i++)
	{
		if((tempLast -> data) == no)
		{
			iCntLast = i;
		}
		tempLast = tempLast -> next;
	}	
	return iCntLast;
}

int main()
{
	int iRet = 0;
	int iValue = 30;
	PNODE first = NULL;		

	InsertFirst(&first, 70);
	InsertFirst(&first, 30);
	InsertFirst(&first, 50);
	InsertFirst(&first, 40);
	InsertFirst(&first, 30);
	InsertFirst(&first, 20);
	InsertFirst(&first, 10);	
	
	iRet = SearchLastOcc(first, iValue);
	printf("the Last occurance of number %d is : %d \n",iValue,iRet);

	return 0;
}