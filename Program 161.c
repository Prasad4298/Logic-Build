/*
Q.2) Write a program which accept Two numbers from user.
	 Display position of common ON bits from that two numbers.

input : 10	15		(1010	1111)
		
output : 2	4

iMarsk	0000	0000	0000	0000	0000	0000	0000	0001

*/

#include<stdio.h>
#include<stdlib.h>

typedef unsigned int UINT;

void CommonBit(UINT iNo1, UINT iNo2)
{
	UINT iMarsk1 = 0X00000001, iMarsk2 = 0X00000001;
	int iDigit1 = 0, iDigit2 = 0;
	int iCnt = 0;

	printf("Common position of ON Bits are :\n");

	while((iNo1 != 0) || (iNo2 != 0))
	{
		iDigit1 = iNo1 % 2;
		iDigit2 = iNo2 % 2;
		
		iCnt++;

		if((iDigit1 == iMarsk1) && (iDigit2 == iMarsk2))
		{
			printf("%d\t",iCnt);
		}

		iMarsk1 << 1;
		iNo1 = iNo1 / 2;
		iMarsk2 << 1;
		iNo2 = iNo2 / 2;
	}
}

int main()
{
	UINT iValue1 = 0, iValue2 = 0;
	
	printf("Enter the number \n");
	scanf("%lu",&iValue1);

	printf("Enter the number \n");
	scanf("%lu",&iValue2);

	CommonBit(iValue1,iValue2);

	return 0;
}
