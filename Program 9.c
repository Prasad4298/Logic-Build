// Accept one number from user and display that number of * on screen 

#include<stdio.h>

 void Display(int iNo, int iFrequency)
{
	int i = 0;

	for(i = 1; (i <= iFrequency); i++)
	{
		printf("%d\n",iNo);
	}
}

int main()
{
	int iValue = 0;
	int iCount = 0;
	
	printf("Enter number \n");
	scanf("%d",&iValue);

	printf("Enter Frequency \n");
	scanf("%d",&iCount);

	Display(iValue,iCount);

	return 0;
}